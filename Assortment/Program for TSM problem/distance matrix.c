#include<stdio.h>
#include<conio.h>

void tsm(int a[10][10], int n);

void main()
{
	int a[10][10], n, i, j, k;

	printf("\nEnter the total number of city : ");
	scanf("%d", &n);
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
				scanf("%d", &a[i][j]);
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
	getch();
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
