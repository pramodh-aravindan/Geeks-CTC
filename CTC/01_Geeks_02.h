/* Program to find largest element in an array */

#include<stdio.h>
#include<stdlib.h>

int largestArrayElement(int arr[], int size)
{
	int largest = arr[0];
	int i = 0;

	for(int i = 0; i < size; i++)
	{
		if(arr[i] > largest)
			largest = arr[i];
	}

	return largest;
}

void largestArrayElementMain()
{
	int arr[] = {12,433,231,32,123,434,212};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("The largest element in the array is: %d\n", largestArrayElement(arr, size));
	getchar();

}