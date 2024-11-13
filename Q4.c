/*
Q4: WAP to Reverse an array in memory
*/
#include <stdio.h>
void rev(int arr[]);
int size = 5;
int main()
{
	int i = 0;
	int arr[size];
	{
		for (i = 0; i < size; i++)
		{
			printf("Enter elements:");
			scanf("%d", &arr[i]);
		}
		rev(arr);
	}
}
void rev(int arr[])
{
	int i = 0, temp = 0;
	for (i = 0; i < size / 2; i++)
	{
		temp = arr[size - 1 - i];
		arr[size - 1 - i] = arr[i];
		arr[i] = temp;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
}
