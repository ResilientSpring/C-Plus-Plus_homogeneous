#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

void tsm(int a[10][10], int n);

void main()
{
	int a[10][10], n, i, j, k;

	printf("\nEnter the total number of city : ");


	// To resolve "Return value ignored: scanf", put scanf() in an if statement.[1]
	if(scanf("%d", &n) > 0)
		printf("you want %d cities.\n", n);
	else
		printf("You did not enter any number.\n");	
	
	
	printf("\nEnter the distance of cities\n");

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (i == j)
			{
				a[i][j] = 0;
			}
			else
			{
				printf("\nEnter the distance %d --> %d", i, j);
				
				if(scanf("%d", &a[i][j]) >= 0)
					printf("you want %d meters between the two cities.\n", a[i][j]);
				
				


				a[j][i] = a[i][j];
			}
		}
	}
	printf("\nGraph is\n\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("\t%d", a[i][j]);
		}
		printf("\n\n");
	}
	tsm(a, n);

	// To resolve "Return value ignored: getch", silence the warning by explicitly ignoring the 
	// return value.[2]
	(void) getch();
}

void tsm(int a[10][10], int n)
{
	int* v;

	v = 0;

	int c, i, j, k, min, sum = 0;

	v = (int *)malloc(n * sizeof(int));

	for (c = 0; c < n; c++)
	{
		v[c] = 0;
	}

	v[0] = 1;
	min = a[0][1];
	c = 0;

	for (i = 0; i < n - 1; i++)
	{
		printf("\n\t%d", c);

		for (j = 0; j < n; j++)
		{
			if ((c != j) && v[j] != 1)
			{
				if (a[c][j] <= min)
				{
					min = a[c][j];
					k = j;
				}
			}
		}

		c = k;
		v[c] = 1;
		sum = sum + min;

		printf(" ---> %d = %d\t\tSum = %d", c, min, sum);

		if (c == n - 1)
			min = a[c][c - 1];
		else
			min = a[c][c + 1];
	}

	min = a[c][0];
	sum = sum + min;

	printf(" \n\t%d ---> 0 = %d\t\tSum = % d", c, min, sum);
	printf("\n\nTotal Distance by Salesman : % d", sum);
}


/*

References:

1. https://stackoverflow.com/questions/10043841/c-error-ignoring-return-value-of-scanf
2. https://stackoverflow.com/questions/55583364/6031-return-value-ignored-getchar-in-visual-studio-2019

*/