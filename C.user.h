#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>



int prime(int n);	//素数判断

int vowel(char ch);	//	判断元音

int HmsToS(int h, int m, int s);  //计算时间多少秒

void PrintTime(int c); //打印时间差

int Narcissus(int a);  //判断水仙花

int find_same_string_num(char* atr1, char* str2);//返回相同字符串出现次数   ,只能用scanf输入

void del(int a[], int n, int i);  /*删除数组a中下标为i的元素*/

void PrintArr(int a[], int n); /*输出数组a的前n个元素*/

int sort(int a[], int n);	/*冒泡排序（未优化）*/