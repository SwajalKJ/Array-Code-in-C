/*
Q1: Write a C program to create an array of 10 integers, initialize the array using user input. Once the array has been initialized, write a function which
will check whether a number (user input) is present in the array or not!
->If Number is present in the array, then return the index position of
the that number
->If number is not present in that array, then return -1 to calling
function.
Print the result in both the cases.
*/
#include <stdio.h>
int check(int arr[], int x);
int main()
{
	int y = 0;
	int arr[10];
	int i, x = 0;
	for (i = 0; i < 10; i++)
	{
		printf("Enter elements%d\n:", i);
		scanf("%d", &arr[i]);
	}
	printf("Enter number you want to check:");
	scanf("%d", &x);
	y = check(arr, x);
	printf("%d", y);
	return 0;
}
int check(int arr[], int x)
{
	int i, z;
	for (i = 0; i < 10; i++)
	{
		if (x == arr[i])
		{
			z = i;
			break;
		}
		else
		{
			z = -1;
		}
	}
	return z;
}
