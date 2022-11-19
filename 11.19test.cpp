#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
/*编写程序，实现数列的逆序输出。输入n（1<=n<=10）和n个整数，逆序输出这n个整数。输出要求：逆序输出这n个整数，每个整数占4列，右对齐。*/
//int main()
//{
//	int a,b;
//	int arr[11];
//	scanf("%d", &a);
//	int i = 0;
//	for ( i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		arr[i] = b;
//
//	}
//	for (int j = i - 1; j >=0; j--)
//	{
//		printf("%4d", arr[j]);
//	}
//	/*int max,min,tem;
	/*for (int m = 0; m < a - 1; m++)
	{
		for (int n = 0; n < a - 1 - m; n++)
		{
			if (arr[n + 1] > arr[n])
			{
				min = arr[n];
				
				max = arr[n + 1];
				arr[n] = max;
				arr[n + 1] = min;
			}

		}
	}*/
	
	//return 0;
//}/*编写程序，实现求数组的最小值。数组a有n个元素，请输出n个元素的最小值及其下标。若最小值有多个，请输出下标最小的一个。注意，有效下标从0开始。输入要求：输入分两行，第一行是一个正整数n（n<=1000)，第二行是n个整数。输出要求：输出占一行。输出数组的最小值及其下标，用空格隔开。*/
//#include <stdio.h>
//int main()
//{
//	int a, b, c=0, min;
//	int arr[1000];
//	int biao[1000];
//	scanf("%d", &a);
//	int i;
//	for ( i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		arr[i] = b;
//		
//	}
//	min = arr[0];
//	for (int j = 0; j < i-1; j++)
//	{
//		if (min < arr[j + 1])
//		{
//			;
//		}
//		else {
//			min = arr[j + 1];
//			biao[c] = j+1;
//		}
//		
//	}
//	for (int j = 0; j < a; j++)
//	{
//		if (arr[j] == min)
//		{
//			c = j;
//			break;
//		}
//
//	}
//	printf("%d %d", min,c);
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e, f,n;
//	scanf("%d", &n);
//	int arr[1000];
//	int i = 0;
//	for (int j = 0; j < n; j++)
//	{
//		scanf("%d", &b);
//		arr[j] = b;
//	}
//	scanf("%d", &i);
//	del(arr, n, i);
//	PrintArr(arr, n);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	int arr[1000];
//	int i, j;
//	int max, min;
//	for (i = 0; i < a - 1; i++)
//	{
//		for (j = 0; j < a - 1 - i; j++)
//		{
//	for (int m = 0; m < a; m++)
//	{
//		scanf("%d", &b);
//		arr[m] = b;
//	}
//	sort(arr, a);
//	PrintArr(arr, a);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 10

//声明函数原型

//按从小到大的顺序对数组进行排序 
//int main() {
//	int n, a[10] = {0}, i;
//	//输入n，表示数组有n个整数
//	scanf("%d", &n);
//	for(i = 0; i < n; i++){
//		//输入n个整数，存入数组a[i]
//		scanf("%d", &a[i]); 
//	} 
//	//调用函数进行排序
//	sort(a, n);
//	//调用函数输出数组元素
//	PrintArr(a, n);
//	 
//	return 0;
//}

////使用比较交换的方法对数组进行排序
//
////输出数组元素
////			//矩阵乘法
//#include <stdio.h>
//int main()
//{
//	int x;
//	int m, p, n;
//	scanf("%d%d%d", &m, &p, &n);
//	int arr1[10][10];
//	int arr2[10][10];
//	int arr3[10][10]={0};
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < p; j++)
//		{
//			scanf("%d", &x);
//			arr1[i][j] = x;
//		}
//	}
//	for (int i = 0; i < p; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &x);
//			arr2[i][j] = x;
//		}
//	}
//	int r = 0, c = 0;
//	int y, j;
//	for (j = 0; r<m; )
//	{
//
//		for (y = 0; y < p; y++)
//		{
//			arr3[r][c] += arr1[r][y] * arr2[y][j];
//		}
//		c++;
//		if (c == n)
//		{
//			c = 0;
//			r++;
//			y = 0;
//			j = 0;
//			continue;
//		}
//		j++;
//		
//	}
//	int k, l;
//	for (k = 0; k < m-1; k++)
//	{
//		for ( l = 0; l < n-1; l++)
//		{
//			printf("%d ", arr3[k][l]);
//		}
//		printf("%d\n", arr3[k][n-1]);
//	}
//	for (int x = 0; x < n ; x++)
//		printf("%d ", arr3[k][x]);
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//
//    char string[1000], c;
//
//    int i, count = 0, flag = 0;
//    fgets(string, 1000, stdin);
//    for (i = 0; (c = string[i]) != '\0'; i++) {
//        if (c == ' ')
//        {
//            flag = 0;
//        }
//        else if (flag == 0)
//        {
//            flag = 1; count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}
/*编写程序，实现求最常用字符。英文字母里出现频率最高的是哪个字母呢? 给定一个字符串，输出字符串中出现次数最多的字母。输入要求：输入一个只含有大小写字母和空格的字符串，长度不超过100，以回车结束。输出要求：输出一个小写字母，表示该字符串中出现次数最多的字母。若答案有多个，则只输出ASCII码最小的那个。*/
//int main()
//{
//	char str[100];
//	fgets(str, 100, stdin);
//
//	return 0;
//}