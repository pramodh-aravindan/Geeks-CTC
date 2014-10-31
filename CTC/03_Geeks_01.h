/* Program to swap 2 strings */
#include<stdio.h>
#include<stdlib.h>


void stringSwap(char **str1, char **str2)
{
	char *temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void stringSwapMain()
{
	char *string1 = "Pramodh";
	char *string2 = "Aravindan";

	stringSwap(&string1,&string2);

	printf("After swapping string 1: %s and string2: %s\n", string1, string2);

	getchar();

}