/*
Q2: Write a C program to find the address of a specific element in the given array, implement a function named “findElement()”, which should take the
array as parameter and should return the address of the element if found or NULL if element is not present.
*/
#include <stdio.h>
int *check(int arr[], int x);
int main()
{
	int *iptr;
	int arr[10];
	int i, x = 0;
	for (i = 0; i < 10; i++)
	{
		printf("Enter elements%d\n:", i);
		scanf("%d", &arr[i]);
	}
	printf("Enter number you want to check:");
	scanf("%d", &x);
	iptr = check(arr, x);
	if (iptr != NULL)
	{
		printf("%p", iptr);
	}
	else
	{
		printf("Not found:");
	}
	return 0;
}
int *check(int arr[], int x)
{
	int i, z;
	for (i = 0; i < 10; i++)
	{
		if (x == arr[i])
		{
			return &arr[i];
		}
	}
	return NULL;
}
