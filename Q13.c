/*
Q13: WAP for Checking whether given matrix is null or not?
*/
#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int nullmat2darr(int m, int n, int arr[m][n]);
int row = 3, col = 3;

int main()
{
	int arr[row][col];
	Enter2darr(row, col, arr);
	print2darr(row, col, arr);
	nullmat2darr(row, col, arr);
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

int nullmat2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0, x = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] != 0)
			{
				x = 1;
			}
		}
	}

	if (x == 0)
	{
		printf("null matrix:");
	}
	else
	{
		printf("not a null matrix:");
	}
}
