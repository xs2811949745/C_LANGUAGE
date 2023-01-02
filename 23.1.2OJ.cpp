#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <string.h>
//#include<stdio.h>
//int main()
//{
//	char a[81],ch;
//	scanf("%s", a);
//	
//	for (int i = 0; i <(strlen(a))/2; i++)
//	{
//		ch = a[i];
//		a[i] = a[strlen(a) - 1 - i];
//		a[strlen(a) - 1 - i] = ch;
//
//	}
//	
//	for (int i = 0; i < strlen(a) ; i++)
//		printf("%c", a[i]);
//	return 0;
//}
//#include <stdio.h>
//int add(int(*a)[3]);
//int main()
//{
//	int a[4][3];
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			scanf("%d", &a[i][j]);
//	}
//	int sum=add(a);
//	printf("%d", sum);
//}
//int add(int (*a)[3])
//{
//	int sum = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			sum += a[i][j];
//	}
//	return sum;
//}
//#include<math.h>
//#include <stdio.h>
//int gcd(int x, int y);
//int main()
//{
//	int x1, y1, x2, y2;
//	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//	int a, b;
//	a = y2 - y1; b = x2 - x1;
//	if (b!=0&&(a % b == 0))
//	{
//		printf("%d", a / b);
//	}
//	else if (a * b > 0)
//	{
//		int ret = gcd(a, b);
//		printf("%d/%d", a / ret, b / ret);
//	}
//	 else if (a * b < 0)
//	{
//		int ret = gcd(a, b);
//		printf("-%d/%d", abs(a) / ret,abs(b) / ret);
//	}
//	if (a * b == 0)
//		printf("%d", -1);
//	return 0;
//}
//int gcd (int x,int y) 
//{
//	int ys;
//	ys = x % y;
//	while (ys!=0)
//	{
//		x = y;
//		y = ys;
//		ys = x % y;
//
//	}
//	return y;
//}