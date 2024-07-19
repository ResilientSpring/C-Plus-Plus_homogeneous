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
}