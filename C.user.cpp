#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
int prime(int n)	//�����ж�
{

	int flag = 1;	//��������ֵΪ1
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (n == 1)
		flag = 0;	//����������0
	if (n == 2 || n == 3)
	{
		flag = 1;
	}
	return flag;
}
int vowel(char ch)		//	�ж�Ԫ��
{
	int flag = 0;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		flag = 1;
	}
	return flag;
}
int HmsToS(int h, int m, int s)		//�ж�һ��������
{
	int end = h * 3600 + m * 60 + s;
	return end;

}
void PrintTime(int c)         //��ӡ��ʱ���
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
int Narcissus(int a)				//�ж��Ƿ���ˮ�ɻ���
{
	int flag = 0;
	int b = a / 100;
	int c = a / 10 % 10;
	int d = a % 100 % 10;
	if (a == b * b * b + c * c * c + d * d * d)
		flag = 1;
	return flag;
}

int find_same_string_num(char* str1, char* str2)		//������ͬ�ַ������ִ���   ,ֻ����scanf����
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

void del(int a[], int n, int i)  /*ɾ������a���±�Ϊi��Ԫ��*/
{
	for (int j = i; j < n; j++)
	{
		a[j] = a[j + 1];
		
	}
	  
}
void PrintArr(int a[], int n)/*�������a��ǰn��Ԫ��*/
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
				//����λ�� 
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