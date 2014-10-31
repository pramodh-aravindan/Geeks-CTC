/* Program to find the transpose of a Matrix */

#include<stdio.h>
#include<stdlib.h>

#define N 4 

void matrixTranspose(int m1[][N], int m2[][N])
{
	int i,j;

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			m2[i][j] = m1[j][i];
}

void matrixTransposeMain()
{
	int m1[N][N] = {{1,1,1,1},
					{2,2,2,2},
					{3,3,3,3},
					{4,4,4,4}};

	int m2[N][N];
	int i,j;

	matrixTranspose(m1,m2);

	printf("After Transpose\n");

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			printf("%d ", m2[i][j]);
		printf("\n");
	}

	getchar();
}