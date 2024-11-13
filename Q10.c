/*
Q10: WAP for Trace of a matrix
*/
#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int trace2darr(int m, int n, int arr[m][n]);
int row = 3, col = 3;

int main()
{
	int arr[row][col];
	Enter2darr(row, col, arr);
	print2darr(row, col, arr);
	trace2darr(row, col, arr);
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

int trace2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0, sum = 0;
	for (i = 0, j = 0; i < row, j < col; i++, j++)
	{
		sum = sum + arr[i][j];
	}
	printf("%d", sum);
}
