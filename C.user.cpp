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
int HmsToS(int h, int m, int s)
{
	int end = h * 3600 + m * 60 + s;
	return end;

}
void PrintTime(int c)
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
int Narcissus(int a)
{
	int flag = 0;
	int b = a / 100;
	int c = a / 10 % 10;
	int d = a % 100 % 10;
	if (a == b * b * b + c * c * c + d * d * d)
		flag = 1;
	return flag;
}