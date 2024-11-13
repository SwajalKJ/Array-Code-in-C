/*\
Q6: WAP Polynomial evaluation where coefficients are stored in an array
a0x
n+a1x
n-1+a2x
n-2+...+an
*/

#include <stdio.h>
#include <math.h>
int input(int arr[], int, int);
int coef(int arr[], int, int);
int size = 5;
int main()
{
	int arr[size], x, y;
	input(arr, x, size);
	printf("Enter value of x:");
	scanf("%d", &x);
	y = coef(arr, x, size);
	printf("%d", y);
}
int input(int arr[], int x, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("Enter array [i]:");
		scanf("%d", &arr[i]);
	}
}
int coef(int arr[], int x, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + (arr[i] * pow(x, size - i));
	}
	printf("%d", sum);
}
