#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
//int Narcissus(int a);
//int main()
//{
//	int  m, n;
//	int arr[5];
//	int count = 0;
//	int* p = arr;
//	int flag = 0;
//	int flag2=0;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		for (; m <= n; m++)
//		{
//			flag = Narcissus(m);
//			if (flag == 1)
//			{
//				arr[count] = m;
//				count++;
//				flag2 = 1;
//			}
//		}
//
//			 if(flag2==1)
//			 {
//				printf("%d", arr[0]);
//				for (int i = 1; i <=count - 1; i++)
//				{
//					printf(" %d", arr[i]);
//				}
//			}
//			else if (flag == 0)
//				printf("no\n");
//			 arr[0] = NULL;
//		
//	}
//	return 0;
//}
//int Narcissus(int a)
//{
//	int flag = 0;
//	int b = a / 100;
//	int c = a / 10 % 10;
//	int d = a % 100 % 10;
//	if (a == b * b * b + c * c * c + d * d * d)
//		flag = 1;
//	return flag;
//}
//void s(int n, int m)
//{
//	int i, a, b, c, l1 = 0, l2 = 0;
//	for (i = n; i <= m; i++)
//	{
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100;
//		if (i == a * a * a + b * b * b + c * c * c && l1 == 0)
//		{
//			printf("%d", i);
//			l1 = 1;
//			l2 = 1;
//		}
//		else if(i == a * a * a + b * b * b + c * c * c && l1 == 1)
//			printf(" %d", i);
//	}
//	if (l2 == 0)
//		printf("no");
//}
//int main()
//{
//	int m, n, l = 0;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		s(m, n);
//		printf("\n");
//	}
//	return 0;
//}