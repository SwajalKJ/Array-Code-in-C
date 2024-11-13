/*
Q14: WAP for Determinant for 2x2 , 3x3 matrices
*/
#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int detm2(int m, int n, int arr[m][n]);
int row = 2, col = 2;
int main()
{
	int arr[row][col];
	Enter2darr(row, col, arr);
	print2darr(row, col, arr);
	detm2(row, col, arr);
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
int detm2(int m, int n, int arr[m][n])
{
	int i = 0, j = 0, d = 0;
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 1; j++)
		{
			d = (arr[i][j] * arr[i + 1][j + 1]) - (arr[i][j + 1] * arr[i + 1][j]);
		}
	}
	printf("Dterminamt:%d", d);
}
#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int detm3(int m, int n, int arr[m][n]);
int row = 3, col = 3;
int main()
{
	int arr[row][col];
	Enter2darr(row, col, arr);
	print2darr(row, col, arr);
	detm3(row, col, arr);
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
int detm3(int m, int n, int arr[m][n])
{
	int i = 0, j = 0, d = 0;
	d = (arr[i][j] * ((arr[i + 1][j + 1] * arr[i + 2][j + 2]) - (arr[i + 1][j + 2] * arr[i + 2][j + 1]))) -
		(arr[i][j + 1] * ((arr[i + 1][j] * arr[i + 2][j + 2]) - (arr[i + 1][j + 2] * arr[i + 2][j]))) +
		(arr[i][j + 2] * ((arr[i + 1][j] * arr[i + 2][j + 1]) - (arr[i + 1][j + 1] * arr[i + 2][j])));
	printf("Detrminant of 3X3 matrix is=%d", d);
}
