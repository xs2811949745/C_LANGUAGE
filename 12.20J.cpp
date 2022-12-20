#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//int BalanceMatrix(int a[][101], int n);
//int main()
//{
//	int n,a[101][101];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int flag=BalanceMatrix(a, n);
//	if (flag == 1)
//	{
//		printf("OK");
//	}
//	if (flag == 2)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int j=0, k=0,sum=0,sum2=0;
//			sum += a[i][j];
//			sum2 += a[k][i];
//			k++; j++;
//			if ((sum + 1) % 2 == 0 && (sum2 + 1) % 2 == 0)
//			{
//				printf("Change bit(%d,%d)", k, j);
//				break;
//			}
//		}
//	}
//	if (flag == -1)
//	{
//		printf("Corrupt");
//	}
//	return 0;
//}
//int BalanceMatrix(int a[][101], int n)
//{
//	int count=0,count1=0;
//		int sum2 = 0;
//		int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//	    int j, k;
//		for ( j = 0; j < n; j++)
//		{
//			sum += a[i][j];
//		}
//		for ( k = 0; k < n; k++)
//		{
//			sum2 += a[k][i];
//		}
//		if (sum % 2 == 0 && sum2 % 2 == 0)
//		{
//			count++;
//			continue;
//		}
//		else if ((sum + 1) % 2 == 0 && (sum2 + 1) % 2 == 0)
//		{
//			return 2;
//		}
//		
//		
//	}
//	
//	if (count == n)
//
//		return 1;
//	else
//		return -1;
//	
//}