/* Program to print a matrix spirally */

#include<stdio.h>
#include<stdlib.h>

#define R 4
#define C 6

void spiralPrint(int m[R][C])
{
	int rS = 0;
	int rE = R - 1;

	int cS = 0;
	int cE = C - 1;

	int i = 0;

	while(rS < rE && cS < cE)
	{
		// Print first remaining row left to right
		for(i = cS; i <= cE; i++)
			printf("%d ", m[rS][i]);

		rS++;

		// Print the last remaining column top to bottom

		for(i = rS; i <= rE; i++)
			printf("%d ", m[i][cE]);
		
		cE--;

		// Print the last remaining row from right to left

		for(i = cE; i >= cS; i--)
			printf("%d ", m[rE][i]);

		rE--;

		// Print the first remaining column from bottom to top

		for(i = rE; i >= rS; i--)
			printf("%d ", m[i][cS]);

		cS++;
	}
}

void spiralPrintMain()
{
	int matrix[R][C] = {{1,2,3,4,5,6}, 
						{16,17,18,19,20,7}, 
						{15,24,23,22,21,8}, 
						{14,13,12,11,10,9} };

	spiralPrint(matrix);

	getchar();
}