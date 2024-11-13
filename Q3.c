/*
Q3: Write a C program, given an array arr[5]; using pointer and user input, initialize all the elements of the array (pointer to array elements)
*/

#include <stdio.h>
int arr(int arr[]);
int main()
{
	int i = 0;
	int arr[5];
	int(*ptr)[5];
	ptr = &arr;
	for (i = 0; i < 5; i++)
	{
		printf("Enter elements:");
		scanf("%d", &(*ptr)[i]);
	}
	if (ptr != 0)
	{
		for (i = 0; i < 5; i++)
		{
			printf("%d", (*ptr)[i]);
		}
	}
}
