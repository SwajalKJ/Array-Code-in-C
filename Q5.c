/*
Q5: WAP to Addition of two arrays
*/
#include <stdio.h>
void sum(int arr1[], int arr2[]);
int size = 5;
int main()
{
	int i = 0;
	int arr1[size], arr2[size];
	for (i = 0; i < size; i++)
	{
		printf("Enter elements:");
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < size; i++)
	{
		printf("Enter elements:");
		scanf("%d", &arr2[i]);
	}
	sum(arr1, arr2);
}
void sum(int arr1[], int arr2[])
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr1[i] = arr1[i] + arr2[i];
		printf("%d\n", arr1[i]);
	}
}
