/*
Q12: WAP for Checking whether given matrix is identity or not?
*/
#include <stdio.h>
int Enter2darr(int m, int n, int arr[m][n]);
int print2darr(int m, int n, int arr[m][n]);
int idemat2darr(int m, int n, int arr[m][n]);
int row = 3, col = 3;

int main()
{
	int arr[row][col];
	Enter2darr(row, col, arr);
	print2darr(row, col, arr);
	idemat2darr(row, col, arr);
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

int idemat2darr(int m, int n, int arr[m][n])
{
	int i = 0, j = 0, x = 0, y = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j)
			{
				if (arr[i][j] != 1)
				{
					x = 1;
				}
			}
			else if (i != j)
			{
				if (arr[i][j] != 0)
				{
					y = 1;
				}
			}
		}
	}
	if (x == 0 && y == 0)
	{
		printf("identity matrix:");
	}
	else
	{
		printf("not identity matrix:");
	}
}
