/* Program to remove duplicate characters from a fiven string */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * removeDuplicates(char *str)
{
	bool charHash[256] = {0};

	int i = 0;

	/*for(i = 0; i < 256; i++)
		charHash[i] = false;
*/
	int oldStrIndex = 0;
	int newStrIndex = 0;

	int oldStrLen = strlen(str);

	for(oldStrIndex = 0; oldStrIndex < oldStrLen; oldStrIndex++)
	{
		if(charHash[(int)str[oldStrIndex]] == false)
		{
			charHash[(int)str[oldStrIndex]] = true;
			str[newStrIndex] = str[oldStrIndex];
			newStrIndex++;
			printf("%s\n", str);
		}
		
	}

	str[newStrIndex] = '\0';

	return str;
}


void removeDuplicatesMain()
{
	char arr[] = "Thisisateststring";

	printf("After removing duplicates is %s\n", removeDuplicates(arr));
	getchar();
}