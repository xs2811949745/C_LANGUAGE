#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
	/*char arr[2][10] = { "123456","ashijd"};
	char str[] = "I am happy"; */
	/*char b[100] = { "saghj" };
	char a[100] = { b[100]};*/
	/*int a[2][3] = { 1,2,3,4,5,6 };
	int* p = a[1];*/
//	return 0;
//}
//void bs(int* p)
//{
//
//}
//		�������ʼ״̬Ϊ0 ���ĺ�Ϊ1 ������̺���״̬
#include <stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &n, &m);
//	int arr[100][100]={0};
//	int x;
//	int a, b;
//
//	scanf("%d", &x);
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		scanf("%d%d", &a, &b);
//		arr[a - 1][b-1] = 1;
//		
//	}
//	for (int j = 0; j < n-1; j++)	//n-1��
//
//	{
//		for (int l = 0; l < m; l++)
//		{
//			printf("%d ", arr[j][l]);
//		}
//		printf("\n");
//	}
//	printf("%d %d", arr[n-2][m-2],arr[n-1][m-1]);
//	return 0;
//}
// /*����50����λ������������ܺ�ƽ��ֵ���Ҵ�������*/
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[50];
//	int puts[50];
//	int i;
//	int a, b, c, d, e, f,count=0;
//	int sum=0,sum_average;
//	for ( i = 0; i < 50; i++)
//	{
//		a = rand() % 100;
//		if (a < 9)
//		{
//			a += 10;
//		}
//		arr[i] = a;
//	}
//	for(int j=0;j<50;j++)
//	{
//		sum += arr[j];
//	}
//	sum_average = sum / 50;
//	for ( int m = 0; m < 50; m++)
//	{
//		if (arr[m] > sum_average && (arr[m] % 5 == 0 && arr[m] % 10 != 0 || arr[m] == 50))
//		{
//			puts[count] = arr[m];
//			count++;
//		}
//	}
//	int max;
//	int temp;
//	int min ;
//	for (int x = 0; x < count - 1; x++)	//ð������
//	{
//		for (int y = 0; y < count - 1 - x; y++)
//		{
//			if (puts[y] > puts[y+1])
//			{
//				 max=puts[y];
//				 puts[y] = puts[y + 1];
//					puts[y+1]=max;
//
//			}
//		}
//	}
//	for (int j = 0; j < 50; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	printf("sum_average=%d\n",sum_average);
//	for (int z = 0; z <count; z++)
//	{
//		printf("%d ", puts[z]);
//	}
//	
//	return 0;
//}
// /*���������е���ĸ*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[1000];
//	fgets(arr, 1000, stdin);
//	int count = 0;
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z' || (arr[i] >= 'A' && arr[i] <= 'Z'))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}