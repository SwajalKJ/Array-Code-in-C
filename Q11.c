/*
Q11: WAP for Generation of identity, null matrices
*/

#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int Nullmat2darr(int m, int n, int arr[m][n]);
int identitymat2darr(int m, int n, int arr[m][n]);
int row = 3, col = 3;

int main()
{
	int arr[row][col];
	Enter2darr(row, col, arr);
	print2darr(row, col, arr);
	Nullmat2darr(row, col, arr);
	identitymat2darr(row, col, arr);
}

int Enter2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("Enter row[%d] col[%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

int print2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int Nullmat2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = 0;
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int identitymat2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0;
	for (i = 0, j = 0; i < row, j < col; i++, j++)
	{
		arr[i][j] = 1;
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
