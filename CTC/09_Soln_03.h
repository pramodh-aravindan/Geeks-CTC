/* A magic index in an array A[1..n-1] is defined to be an index such that A[i] =
   i. Given a sorted array of distinct integers, write a method to find a magic index, if
   one exists, in array A.
   
   FOLLOW UP
   
   What if the values are not distinct */

#include<iostream>

using namespace std;

int magicSlow(int myArray[])
{
	int size = sizeof(myArray)/sizeof(myArray[0]);
	
	for(int i = 0; i < size; i++)
	{
		if(myArray[i] == i)
			return i;
	}

	return -1;
}