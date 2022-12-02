#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
//int prime(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <=n/2.0 ; i++)
//	{
//		int a = prime(i);
//		int b = prime(n - i);
//		if (a == 1 && b == 1)
//		{
//			printf("%d=%d+%d\n", n, i, n-i);
//		}
//	}
//		
//	return 0;
//}
//int prime(int n)
//{
//	int flag = 0;
//	for (int a = 2; a < sqrt(n); a++)
//	{
//		if (n % a == 0)
//		{
//			flag = 1; break;
//		}
//	}
//	return flag;
//}

//void delete_char(char str[], char str2);
//int main()
//{
//	char str[80],ch;
//	scanf("%s", &str);
//	getchar();
//	scanf("%c", &ch);
//	delete_char(str, ch);
//	printf("%s", str);
//	return 0;
//}
//void delete_char(char str[], char ch)
//{
//	for (int i = 0; i < 80; i++)
//	{
//		if (str[i] == ch)
//		{
//			for (int j = i; j < 80; j++)
//			{
//			str[j] = str[j + 1];
//			}
//			i--;
//		}
//	}
//}
//#include<stdio.h>
//void delete_char(char str[], char ch)
//{
//	int i, j;
//	for (i = 0; i < 80; i++)
//	{
//		if (str[i] == ch)
//		{
//			for (j = i; j < 80; j++)
//			{
//				str[j] = str[j + 1];
//			}
//			i--;
//		}
//
//	}
//
//}
//void main()
//{
//	char a[80], b;
//	printf("«Î ‰»Î◊÷∑˚¥Æ:");
//	gets_s(a); 
//		printf("«Î ‰»Î¥˝…æ◊÷∑˚:");
//	scanf("%c", &b);
//	delete_char(a, b);
//	puts(a);
//}
// OJ110
//#include<stdio.h>
//int common(int x, int y);
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int ret = common(x, y);
//	printf("%d", ret);
//	return 0;
//}
//int common(int x, int y)
//{
//	while (x != y)
//	{
//		if (x > y)
//			x = x / 2;
//		else
//			y = y / 2;
//	}
//	return x;
//}


//#include <stdio.h>
//void inverse(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	inverse(n);
//	return 0;
//}
//void inverse(int n)
//{
//	int a;
//	if (n>0)
//	{
//		scanf("%d", &a);
//		inverse(n-1);
//		printf("%d " ,a);
//
//	}
//	if (n ==-1)
//		printf("%d",a);
//}
//# include<stdio.h>
//void inverse(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	inverse(n);
//	return 0;
//}
//void inverse(int n)
//{
//	int num;
//	if (n > 1)
//	{
//		scanf("%d", &num);
//		inverse(n - 1);
//		printf("%d ", num);
//	}
//	if (n == 1)
//	{
//		scanf("%d", &num);
//		printf("%d ", num);
//	}
//}
//#include <stdio.h>
//void convert(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    convert(n);
//	return 0;
//}
//void convert(int n)
//
//{
//
//    if (n > 0)
//
//    {
//        convert(n / 2);
//        printf("%d", n % 2);
//    }
//
//}
//int main()
//{
//	return 0;
//}
//#include<stdio.h>
//int fib(int k);
//int count = 0;
//
//int main(void)
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", fib(n));
//    printf("µ›πÈµ˜”√¡À%d¥Œ", count);
//    return 0;
//}
//int fib(int k)
//{
//    count++;
//    if (k == 1 || k == 2)
//    {
//      
//        return 1;
//    }
//    else
//    {
//        return fib(k - 1) + fib(k - 2);
//        
//    }
//}
