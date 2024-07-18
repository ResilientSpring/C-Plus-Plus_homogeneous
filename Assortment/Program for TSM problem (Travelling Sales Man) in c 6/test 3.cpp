#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>  // [2]

void tsm(int a[10][10], int n);

void main()
{
	int a[10][10], n, i, j, k;

	printf("\nEnter the total number of city : ");

	/*
	if (scanf("%d", &n) > 0)
		printf("\nYou want %d cities.\n", n);
	else
		printf("\nYou didn't enter a number.\n");

     */

	scanf("%d", &n);

	printf("\nEnter the distance between cities:\n");

	// distance matrix
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (i == j)
			{
				a[i][j] = 0;  // the distance between a node and itself is 0.
			}
			else
			{
				printf("\nEnter the distance from %d --> %d (Hint: distance_matrix[%d][%d]): ", i, j, i, j);

				scanf("%d", &a[i][j]);

				/*
				if (scanf("%d", &a[i][j]) >= 0)
					printf("The distance between the two cities is %d .\n", a[i][j]);
				else
					printf("You haven't entered the distance between the two cities.\n");
				*/

				a[j][i] = a[i][j];    // eliminate the need to re-calculate. 
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

	// getch();
	(void)_getch();
}

void tsm(int a[10][10], int n)
{
	int* v;

	v = 0;

	int c, i, j, k, min, sum = 0;

	v = (int*)malloc(n * sizeof(int));

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

	printf(" \n\t%d ---> 0 = %d\t\tSum = %d", c, min, sum);
	printf("\n\nTotal Distance by Salesman : % d .\n", sum);
}


// Reference:
// 1. https://stackoverflow.com/questions/4529459/malloc-undefined
// 2. https://stackoverflow.com/questions/71315334/malloc-always-returns-a-null-pointer-visual-studio-2022