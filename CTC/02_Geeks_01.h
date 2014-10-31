/* Program to find if tow matrices are identical */

#include<stdio.h>
#include<stdlib.h>

#define N 4

bool isSameMatrix(int m1[][N], int m2[][N])
{
	int i = 0;
	int j = 0;

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			if(m1[i][j] != m2[i][j])
				return false;

	return true;
}

void isSameMatrixMain()
{
	int m1[N][N] = {{1,1,1,1},
					{2,2,2,2},
					{3,3,3,3},
					{4,4,4,4}};

	int m2[N][N] = {{1,1,1,1},
					{2,2,2,2},
					{3,3,3,3},
					{4,4,4,4}};

	if(isSameMatrix(m1,m2))
		printf("Matrices are same\n");
	else
		printf("Matrices are different\n");

	getchar();
}	
