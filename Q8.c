/*
Q8: WAP for Addition, Subtraction, Multiplication of two matrices
*/
#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int addmat(int m, int n, int arr1[m][n], int arr2[m][n]);
int submat(int m, int n, int arr1[m][n], int arr2[m][n], int arr3[m][n]);
int row = 2, col = 2;

int main()
{
	int arr1[row][col];
	printf("Enter matrix 1:");
	Enter2darr(row, col, arr1);
	print2darr(row, col, arr1);

	int arr2[row][col];
	printf("Enter matrix 2:");
	Enter2darr(row, col, arr2);
	print2darr(row, col, arr2);

	int arr3[row][col];
	addmat(row, col, arr1, arr2);
	submat(row, col, arr1, arr2, arr3);
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

int addmat(int m, int n, int arr1[m][n], int arr2[m][n])
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr1[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}

int submat(int m, int n, int arr1[m][n], int arr2[m][n], int arr3[m][n])
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr3[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
}
