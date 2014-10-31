/* Program to return max occurring character in input string */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int countArr[256];

void maxOccurringMain()
{
	char arr1[] = "test string";
	int *countArr = (int *)malloc(sizeof(int) * 256);

	int length = strlen(arr1);
	int i;
	int maxCountIndex = 0;

	for(i = 0; i < length; i++)
	{
		countArr[(int)arr1[i]]++;
	}

	for(i = 0; i < 256; i++)
	{
		if(countArr[i] > countArr[maxCountIndex])
			maxCountIndex = i;
	}

	printf("The max occurring character in %s is %c\n", arr1, (char)maxCountIndex);
	getchar();

	free(countArr);

}