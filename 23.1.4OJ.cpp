#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//【OJ1127：矩阵乘法】
//int sum_juz(int(*a)[11], int(*b)[11],int n,int i,int j);
//void printarr(int (*a)[11], int m, int n);
//int main()
//{
//	int m, n, p;
//	int arr1[11][11], arr2[11][11],arr3[11][11];
//	scanf("%d%d%d", &m, &p, &n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < p; j++)
//			scanf("%d", &arr1[i][j]);
//	}
//	for (int i = 0; i < p; i++)
//	{
//		for (int j = 0; j < n; j++)
//			scanf("%d", &arr2[i][j]);
//	}
//	//输入两个矩阵
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = sum_juz(arr1, arr2,p,i,j);
//		}
//	}
//	printarr(arr3, m, n);
//	return 0;
//}
//int sum_juz(int (*a)[11], int (*b)[11],int p,int i,int j)
//{
//	int sum = 0;
//
//	for (int k = 0; k < p; k++)
//	{
//		
//		sum += a[i][k] * b[k][j];
//		
//	}
//	return sum;
//}
//void printarr(int (*a)[11], int m, int n)
//{
//	for(int i=0;i<m;i++)	
//	{
//		printf("%d", a[i][0]);
//			for (int j = 1; j < n; j++)
//			{
//				printf(" %d", a[i][j]);
//			}
//			printf("\n");
//	}
//}
//【OJ1126：布尔矩阵的奇偶性】
int BalanceMatrix(int(*a)[101], int n);
int count_i=0, count_j=0;
int main()
{
	int arr[101][101], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int flag=BalanceMatrix(arr, n);
	if (flag == 1)
		printf("OK");
	if (flag == -1)
		printf("Corrupt");

	return 0;
}
int BalanceMatrix(int (*a)[101], int n)
{
	int flag = 1, sum1 = 0, sum2 = 0, count = 0; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum1 += a[i][j];
			sum2 += a[j][i];
		}
		if (sum2 % 2 == 0 && sum1 % 2 == 0)
		{
			;
		}
		if (sum2 % 2 == 1 && sum1 % 2 == 1)
		{
			count++;
			count_i = i;
		}
		sum1 = 0;
		sum2 = 0;
	}
	if (count == 1)
		flag = 2;
	if (count >= 2)
		flag = -1;

	return flag;
}