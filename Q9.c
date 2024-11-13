/*
Q9: WAP for Transpose of a matrix
*/
#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int transpose2darr(int m, int n, int arr[m][n]);
int row = 3, col = 4;

int main()
{
	int arr[row][col];
	Enter2darr(row, col, arr);
	print2darr(row, col, arr);
	transpose2darr(row, col, arr);
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

int transpose2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0;
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
}
