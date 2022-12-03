#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*OJ1114*/
//int main()
//{
//	int a[10];
//	int n;
//	scanf("%d", &n);
//	int count = n;
//	for (int i = 0; i <count; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (; n >0; n--)
//		printf("%4d", a[n-1]);
//	return 0;
//}
// OJ1116
//#include <stdio.h>
//int main()
//{
//	int n,a[1000],min,count,b;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &b);
//		a[i] = b;
//		}
//	min = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (min == a[i])
//		{
//			count = i;
//			break;
//		}
//	}
//	printf("%d %d", min, count);
//	return 0;
//}
//#include <stdio.h>
//void del(int a[], int n, int i);  /*删除数组a中下标为i的元素*/
//void PrintArr(int a[], int n); /*输出数组a的前n个元素*/
//int main()
//{
//	int n, a[10],b;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &b);
//		a[i] = b;
//	}
//	int i;
//	scanf("%d", &i);
//	if (n > 1)
//	{
//		del(a, n, i);
//		PrintArr(a, n);
//	}
//	return 0;
//}
//void del(int a[], int n, int i)  /*删除数组a中下标为i的元素*/
//{
//	for (int j = i; j < n - 1; j++)
//	{
//		a[j] = a[j + 1];
//	}
//}
//void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
//{
//	printf("%d", a[0]);
//	for (int i = 1; i < n -1 ; i++)
//	{
//		printf(" %d", a[i]);
//	}
//}
//#include <stdio.h>
//int find(int a[], int n, int x);
//int main()
//{
//	int n,a[10],x;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		a[i] = x;
//	}
//	int b;
//	scanf("%d", &b);
//	int ret=find(a, n, b);
//	if (ret == -1)
//		printf("Not Found");
//	if(ret==1)
//		for (int i = 0; i < n -1 ; i++)
//		{
//			printf("%4d", a[i]);
//		}
//	return 0;
//}
//int find(int a[], int n, int x)
//{
//	int flag = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			for (int j = i; j < n; j++)
//			{
//				a[j] = a[j + 1];
//			}
//			flag = 1;
//		break;
//		}
//	}
//	return flag;
//}
//#include <stdio.h>
//void insert(int a[], int n, int num);
//void PrintArr(int a[], int n); /*输出数组a的前n个元素*/
//
//int main()
//{
//	int a, b, c, arr[1000];
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		arr[i] = b;
//	}
//	scanf("%d", &c);
//	insert(arr, a, c);
//	PrintArr(arr, a);
//	return 0;
//}
//void insert(int a[], int n, int num)
//{
//	int count,count1=0;
//	for (int i = 0; i < n; i++)
//	{
//		if (num <= a[i])
//		{
//			count = i;
//			break;
//		}
//	}
//	for (int i = n - 1; n - 1 >=count; n--)
//	{
//		a[n] = a[n-1];
//	}
//	a[count] = num;
//}
//#include <stdio.h>
//void  sort(int a[], int n);
//void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
//;
//int main()
//{
//	int n,a[1000],b;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &b);
//		a[i] = b;
//	}
//	sort(a, n);
//	PrintArr(a, n);
//	return 0;
//}
//void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
//{
//	printf("%d", a[0]);
//	for (int i = 1; i <n; i++)
//	{
//		printf(" %d", a[i]);
//	}
//}
//void  sort(int a[], int n)
//{
//	int tem;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] >= a[j + 1])
//			{
//				tem=a[j];
//				a[j] = a[j + 1];
//					a[j + 1] = tem;
//
//				
//			}
//		}
//	}
//}