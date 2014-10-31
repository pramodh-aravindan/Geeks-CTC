/* Program to check if a given string is a palindrome */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

bool isPalindrome(char str[])
{
	int len = strlen(str);
	int start = 0;
	int end = len - 1;

	while(start < end)
	{
		if(str[start] != str[end])
			return false;

		start++;
		end--;
	}

	return true;
}

void isPalindromeMain()
{
	char string1[] = "abcdedcba";
	char string2[] = "blaaaaaah";

	if(isPalindrome(string1))
		printf("%s is a palindrome\n", string1);
	else 
		printf("%s is not a palindrome\n", string1);

	if(isPalindrome(string2))
		printf("%s is a palindrome\n", string2);
	else 
		printf("%s is not a palindrome\n", string2);

	getchar();
}
