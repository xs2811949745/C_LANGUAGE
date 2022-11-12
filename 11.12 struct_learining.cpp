#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//struct
//{
//	char a;
//	int c;
//
//}a;
//struct
//{
//	char a;
//	int c;
//}*b;
//int main()
//{
//	int ** b = &a;
//	return 0;
//}
//typedef struct aa
//{
//	int  a;
//};
//int main()
//{
//	aa sh={5};
//	return 0;
//}
//typedef struct 
//{
//	int  a;
//	
//}aa;
//int main()
//{
//	aa sh = { 5 };
//	aa ch = { 213 };
//	return 0;
//}
//√∞≈›≈≈–Ú
//#include <stdio.h>
//int main()
//{
//	
//	
//	int arr[100] = {1,5,9,7,5,3,6,8,4,2};
//
//	int max = arr[0];
//	int tem;
//	int min = arr[1];
//	for (int i = 1; i < 9; i++)
//	{
//		for (int i = 1; i < 10; i++)
//		{
//			max = arr[i - 1];
//			min = arr[i];
//			if (min <= max)
//			{
//				tem = max;
//				max = min;
//				min = tem;
//			}
//			arr[i - 1] = max;
//			arr[i] = min;
//		}
//	}
//	return 0;
//}
//√∞≈›≈≈–Ú”≈ªØ
//void bubble_sort(int arr[], int sz);
//int main()
//{
//	int arr[] = { 1,5,9,7,5,3,6,8,4,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int flag = 1;
//	int max = arr[0];
//	int min = arr[1];
//	int tem;
//	for (int i = 0; i < sz - 1; i++)
//			{
//				for (int j = 0; j < sz -1 -i; j++)
//				{
//					if (arr[j] > arr[j+1])
//					{
//						int max = arr[j];
//						arr[j] = arr[j + 1];
//						arr[j + 1] = max;
//						flag = 0;
//					}
//				}
//				if (flag == 1)
//					break;
//		
//			}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6};
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i + 1]);
//	}
//	return 0;
//}