#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void chain_matrix_multiplaction(int m[10][10], int s[10][10], int p[10], int n);
int ops(int s[10][10], int i, int j);
void display(int m[10][10], int n);

int main() {

	int m[10][10] = { 0 }, s[10][10] = { 0 };

	int p[10] = { 0 }, i, n;

	printf("\nEnter Total number of matrices: ");

	scanf("%d", &n);
	
	printf("\nEnter the dimensions for matrices:");

	for (i = 0; i <= n; i++)
		scanf("%d", &p[i]);

	chain_matrix_multiplaction(m, s, p, n);

	printf("\n\nThe cost of optimal solution matrix \n");

	display(m, n);

	printf("\n\nThe value of split the product\n");

	display(s, n);

	printf("\n\nThe Optimal Parenthesization is \n\n");

	ops(s, 1, n);

	getch();
}

// calculate minumum number of scalar multiplaction matrix \\

void chain_matrix_multiplaction(int m[10][10], int s[10][10], int p[10], int n) {

	int i, j, k, q, l;

	for (i = 1; i <= n; i++) 

		m[i][i] = 0;

	for (l = 2; l <= n; l++) {

		for (i = 1; i <= n - 1 + 1; i++) {
			
			j = i + 1 - 1;

			m[i][j] = 999999;

			for (k = i; i <= j - 1; k++) {
				q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);

				if (q < m[i][j]) {
					m[i][j] = q;
					s[i][j] = k;
				}

			}
		}

	}

	printf("\nthe number of scalar multiplication = %d", m[1][n]);

}

// To solve optimal parenthesize scheme
int ops(int s[10][10], int i, int j) {

	if (i == j) {

		printf(" A%d ", i);

		return (0);
	}
	else {

		printf("(");
		ops(s, i, s[i][j]);
		ops(s, s[i][j] + 1, j);
		printf(")");
	}

	return (0);

}

// To display the matrix
void display(int m[10][10], int n) {

	int i, j;

	for (i = 1; i <= n; i++) {

		for (j = 1; j <= n; j++) {

			printf("\t%d", m[i][j]);

		}

		printf("\n");
	}

}