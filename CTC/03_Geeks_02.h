/* C Program to sort an array of strings or names */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int myCompare(const void *a, const void *b)
{
	return strcmp(*(const char**) a, *(const char**) b);
}

void stringSort(const char *arr[], int n)
{
	qsort(arr, n, sizeof(const char *), myCompare);
}

void stringSortMain()
{
	const char *arr1[] = {"Roger", "Federer", "Novak", "Djokovic"};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int i;

	printf("Before Sort\n");
	for(i = 0; i < n; i++)
		printf("%d: %s\n", i, arr1[i]); 

	stringSort(arr1, n);

	printf("After Sort\n");
	for(i = 0; i < n; i++)
		printf("%d: %s\n", i, arr1[i]); 

	getchar();
}