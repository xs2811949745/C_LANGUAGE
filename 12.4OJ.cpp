#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
//int MinIndex(int a[], int n);  //函数返回数组a中最小元素的下标
//
//int MaxIndex(int a[], int n);//函数返回数组a中最大元素的下标
// void PrintArr(int a[],int n);
//int main()
//{
//	int arr[10], n,b, count;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &b);
//		arr[i] = b;
//	}
//	int tem1, tem2;
//	int c=MinIndex(arr, n);
//	tem1= arr[0];
//	arr[0] = arr[c];
//	arr[c] = tem1;
//	int d=MaxIndex(arr, n);
//	tem2 = arr[n-1];
//	arr[n-1] = arr[d];
//	arr[d] = tem2;
//	PrintArr(arr, n);
//	return 0;
//}
//int MinIndex(int a[], int n)  //函数返回数组a中最小元素的下标
//{
//		int min = a[0], count=0;
//		if (n > 1)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				if (min > a[i])
//				{
//					min = a[i];
//					count = i;
//				}
//			}
//		}
//		else count = 0;
//	return count;
//}
//int MaxIndex(int a[], int n)  //函数返回数组a中最大元素的下标
//{
//	int max = a[0], count=0;
//	if (n > 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (max < a[i])
//			{
//				max = a[i];
//				count = i;
//			}
//		}
//	}
//	else count = 0;
//	return count;
//}
//void PrintArr(int a[], int n)
//{
//	printf("%d", a[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf(" %d", a[i]);
//	}
//}
#include <stdio.h>.
int main()
{
	int n,x;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		arr[i] = x;

	}
	int sum=arr[0]*6;
	sum += n * 5;
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] > arr[i + 1])
			sum += (arr[i] - arr[i + 1]) * 4;
		if (arr[i] < arr[i + 1])
			sum += (arr[i + 1] - arr[i]) * 6;
		if (arr[i] == arr[i + 1])
			;


	}
	printf("%d", sum);
	return 0;
}