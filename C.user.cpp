#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
int prime(int n)	//素数判断
{

	int flag = 1;	//素数返回值为1
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (n == 1)
		flag = 0;	//非素数返回0
	if (n == 2 || n == 3)
	{
		flag = 1;
	}
	return flag;
}
int vowel(char ch)		//	判断元音
{
	int flag = 0;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		flag = 1;
	}
	return flag;
}
int HmsToS(int h, int m, int s)		//判断一共多少秒
{
	int end = h * 3600 + m * 60 + s;
	return end;

}
void PrintTime(int c)         //打印出时间差
{
	int h = 0, m = 0, s;
	s = c;
	while (s >= 60)
	{
		{
			s -= 60;
			m++; }
		while (m >= 60)
		{
			m -= 60;
			h++;
		}
	}
	printf("%02d:%02d:%02d\n", h, m, s);

}
int Narcissus(int a)				//判断是否是水仙花数
{
	int flag = 0;
	int b = a / 100;
	int c = a / 10 % 10;
	int d = a % 100 % 10;
	if (a == b * b * b + c * c * c + d * d * d)
		flag = 1;
	return flag;
}

int find_same_string_num(char* str1, char* str2)		//返回相同字符串出现次数   ,只能用scanf输入
{
	int sum = 0;
	while (strstr(str1, str2) != NULL)
	{
		
		sum++;
		str1 = strstr(str1, str2)+1;
			while (*str1 != '\0')
			{
				if (*str1 == *str2)
				{
					break;
				}
				str1++;
			}
	}

	return sum;
}

void del(int a[], int n, int i)  /*删除数组a中下标为i的元素*/
{
	for (int j = i; j < n; j++)
	{
		a[j] = a[j + 1];
		
	}
	  
}
void PrintArr(int a[], int n)/*输出数组a的前n个元素*/
{
	int x;
	printf("%d", a[0]);
	for (x = 1; x <=n -1; x++)
		printf(" %d", a[x]);
	
}
int sort(int a[], int n) {
	int i, j, t;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				//交换位置 
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	return 0;
}

int IsLeap_year(int n)
{
	int flag = 0;
	if (n % 4 == 0 && n % 100 != 0)
		flag = 1;
	if (n % 400 == 0)
		flag = 1;
	return flag;
}