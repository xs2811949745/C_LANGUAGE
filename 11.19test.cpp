#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
/*��д����ʵ�����е��������������n��1<=n<=10����n�����������������n�����������Ҫ�����������n��������ÿ������ռ4�У��Ҷ��롣*/
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
//}/*��д����ʵ�����������Сֵ������a��n��Ԫ�أ������n��Ԫ�ص���Сֵ�����±ꡣ����Сֵ�ж����������±���С��һ����ע�⣬��Ч�±��0��ʼ������Ҫ����������У���һ����һ��������n��n<=1000)���ڶ�����n�����������Ҫ�����ռһ�С�����������Сֵ�����±꣬�ÿո������*/
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

//��������ԭ��

//����С�����˳�������������� 
//int main() {
//	int n, a[10] = {0}, i;
//	//����n����ʾ������n������
//	scanf("%d", &n);
//	for(i = 0; i < n; i++){
//		//����n����������������a[i]
//		scanf("%d", &a[i]); 
//	} 
//	//���ú�����������
//	sort(a, n);
//	//���ú����������Ԫ��
//	PrintArr(a, n);
//	 
//	return 0;
//}

////ʹ�ñȽϽ����ķ����������������
//
////�������Ԫ��
////			//����˷�
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
/*��д����ʵ��������ַ���Ӣ����ĸ�����Ƶ����ߵ����ĸ���ĸ��? ����һ���ַ���������ַ����г��ִ���������ĸ������Ҫ������һ��ֻ���д�Сд��ĸ�Ϳո���ַ��������Ȳ�����100���Իس����������Ҫ�����һ��Сд��ĸ����ʾ���ַ����г��ִ���������ĸ�������ж������ֻ���ASCII����С���Ǹ���*/
//int main()
//{
//	char str[100];
//	fgets(str, 100, stdin);
//
//	return 0;
//}