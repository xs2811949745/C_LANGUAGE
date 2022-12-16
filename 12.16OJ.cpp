#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include<stdio.h>
#include<math.h>

//int prime(int x);
//void fenjie(int x)
//{
//	int i = 2, y;
//	y = x;
//	printf("%d=", x);
//	do
//	{
//		if (x % i == 0)
//		{
//			while (x % i == 0)
//			{
//				if (x == i)
//					
//					break;
//				
//				printf("%d*", i);
//
//				x = x / i;
//
//			}
//		}
//		else {
//			i++;
//		}
//		if (prime(x) == 1)
//		{
//			printf("%d", x); break;
//		}
//		
//	} while (i < y);
//	printf("\n");
//}
//int prime(int x)
//{
//	int i, m = sqrt(x);
//	for (i = 2; i <= m; i++)
//
//	
//		if (x % i == 0)
//			return 0;
//	
//	return 1;
//
//}
//int main()
//{
//	int x, m, n, c;
//	printf("请输入区间[m,n](m<n):");
//	scanf("%d%d", &m, &n);
//	for (x = m; x <= n; x++)
//	{
//		if (prime(x) == 0)
//			fenjie(x);
//		else printf("%d=(素数!)\n", x);
//	}
//}
int a = 2, b = 3;
int add(int a,int b);
int main()
{
	int c=add(a, b);
	printf("%d", c);
	return 0;
}
int add(int a,int b)
{
	return a + b;
}