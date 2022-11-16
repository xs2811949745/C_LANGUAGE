#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
int prime(int n)	//素数判断
{

	int flag = 1;	//素数返回值为1
	for (int i = 2; i <=sqrt(n); i++)
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
		flag == 1;
	}
	return flag;
}
