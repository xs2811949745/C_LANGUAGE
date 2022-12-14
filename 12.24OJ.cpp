#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void FindMax(int p[][3], int m, int n, int* pRow, int* pCol);
int main()
{
	int a[2][3];
	int* pRow=NULL;
	pRow=(int*)malloc(4*sizeof(int)); int* pCol = NULL;
	pCol = (int*)malloc(4 * sizeof(int));
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	FindMax(a, 2, 3, pRow, pCol);
	printf(" %d %d", *pRow, *pCol);
	return 0;
}
//int* FindMax(int p[][3], int m, int n, int* pRow, int* pCol)
//{
//	
//}
void FindMax(int p[][3], int m, int n, int* pRow , int* pCol )
{
	int max = p[0][0];
	int i=0, j=0;
	
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			if (max <=p[i][j])
			{
				max = p[i][j];
			*pRow = i;
			*pCol = j;
				 
			}
		}
	}
	printf("%d", max);
	//在m*n矩阵p中查找最大值，将其行下标存入pRow所指内存单元，将其列下标存入pCol所指内存单元 
}
