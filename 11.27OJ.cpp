#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*OJ106回文数*/
//int main()
//{
//	int n, m;
//	int tem;
//			int a=0;
//	scanf("%d%d", &m, &n);
//	for (; m < n; m++)
//	{
//		int  ws = log10(m);
//		int count = ws;
//		
//			int c = m;
//		for (int i = 0; i <=count; i++)
//		{
//			a = a * 10 + c % 10;
//			c /= 10;
//
//			
//		}
//			if (a == m)
//				printf("%d ", m);
//			a = 0;
//	}
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
// /*OJ107
//#include <stdio.h>
//int inverse(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int b = inverse(n);
//	int sum = b + n;
//	while (b=inverse(n),b != n)
//	{
//		printf("%d ", n);
//		n = b + n;
//	}
//	printf("%d", b);
//	return 0;
//}
//int inverse(int n)
//{
//	int a = 0;
//	while (n !=0)
//	{
//		 
//		a = a * 10 + n % 10;
//		n /= 10;
//	}
//	return a;
//}
/*OJ108输出
指定数字图形*/
//void PrintLine(int n,int m,int space);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n != 1)
//	{
//		for (int m = 0; m < n; m++)
//		{
//			int space = n - m;
//			PrintLine(n, m, space);
//		}
//		for (int j = n - 2; j > 0; j--)
//		{
//			int space = n - j;
//
//			PrintLine(n, j, space);
//		}
//		for (int i = 1; i < n; i++)
//			printf(" ");
//		printf("1");
//	}
//	if (n == 1)
//		PrintLine(n, n, n);
//	return 0;
//}
// void PrintLine(int n,int m,int space)
//{
//	 if (n != 1)
//	 {
//		 for (int j = 0; j < space - 1; j++)
//		 {
//			 printf(" ");
//		 }
//		 printf("1");
//		 for (int i = 2; i <= m + 1; i++)
//		 {
//			 printf("%d", i);
//		 }
//		 for (int i = m; m > 0; m--)
//		 {
//			 printf("%d", m);
//		 }
//		 printf("\n");
//	 }
//	 if (n == 1)
//		 printf("1");
//
//}
/*OJ109*/
/*数根*/
//#include <stdio.h>
//int digitSum(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n > 9)
//	{
//		n = digitSum(n);
//	}
//	printf("%d", n);
//	return 0;
//}
//int digitSum(int n)
//{
//	int ws = log10(n)+1;
//
//	int sum=0;
//	for (int i = 0; i < ws; i++)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	//函数返回n的各位数字之和 
//	return sum;
//}
//int main()
//{
//
//	return 0;
//}