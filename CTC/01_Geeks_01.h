/* C Program to find sum of elements in a given array  */

#include<stdio.h>
#include<stdlib.h>

int sumOfArray(int arr[], int size)
{
	int sum = 0;
	int i = 0;

	for(i = 0; i < size; i++)
		sum += arr[i];

	return sum;
}

void sumOfArrayMain()
{
	int arr[] = {12,3,4};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Sum of elements in the arrar is %d\n", sumOfArray(arr, size));
	getchar();

}
