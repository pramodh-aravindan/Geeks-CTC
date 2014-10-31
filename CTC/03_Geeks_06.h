/* Program to print all the duplicates in the input string */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printDuplicates(char *str)
{
	bool hash[256] = {0};
	int length = strlen(str);
	int i;

	printf("Printing repeating characters in a string\n");
	for(i = 0; i < length; i++)
	{
		if(hash[(int) str[i]] == false)
		{
			hash[(int) str[i]] = true;
		}
		else
		{
			printf("%c \n", str[i]);
		}
	}
}

void printDuplicatesMain()
{
	char str[] = "letstryandfindduplicatecharacters!";
	printf("%s\n", str);
	printDuplicates(str);
	getchar();
}