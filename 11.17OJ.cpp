#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
//int prime(int n);
//int main()
//{
//	int a;
//	int count = 0;
//	scanf("%d", &a);
//	int flag;
//	int flag2;
//	int arr[10000];
//	int i;
//	for (i = 2; i <=a / 2; i++)
//	{
//		flag = prime(i);
//		flag2 = prime(a - i);
//		if (flag == 1 && flag2 == 1)
//		{
//			arr[count] = i;
//			arr[count + 1] = a - i;
//			count += 2;
//		}
//	}
//	for (int j = 0; j < count - 2; j = j + 2)
//	{
//		printf("%d %d\n", arr[j], arr[j + 1]);
//	}
//	printf("%d %d", arr[count - 2], arr[count - 1]);
//	return 0;
//}
//int prime(int n)	//素数判断
//{
//
//	int flag = 1;	//素数返回值为1
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (n == 1)
//		flag = 0;	//非素数返回0
//	if (n == 2 || n == 3)
//	{
//		flag = 1;
//	}
//	return flag;
//}
//int vowel(char ch);
//int main()
//{
//	char arr[1000];
//	int a = 0;
//	int count = 0;
//	fgets(arr, 1000, stdin);
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		a = vowel(arr[i]);
//		if (a == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int vowel(char ch)
//{
//	int flag = 0;
//	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//	{
//		flag = 1;
//	}
//	return flag;
//}
int main()
{
	int h1, m1, s1,h2,m2,s2;
	int a, b;
	while (scanf("%d:%d:%d", &h1, &m1, &s1) != EOF)
	{
		scanf("%d:%d:%d", &h2, &m2, &s2);
		a = HmsToS(h1, m1, s1);
		b = HmsToS(h2, m2, s2);
		PrintTime(b-a);
		
	}
	return 0;
}