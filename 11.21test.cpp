#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*shuzuzhuanzhi*/
//#include <stdio.h>
//int main()
//{
//	int n,x;
//	int arr1[10][10];
//	scanf("%d", &n);
//	int arr2[10][10];
//	for (int i=0;i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &x);
//			arr1[i][j] = x;
//			arr2[j][i] = x;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//
//		for (int j = 0; j < n; j++)
//		{
//			printf("%5d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//
//		for (int j = 0; j < n; j++)
//		{
//			printf("%5d", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	for(int i=0;i<n;i++)
//	printf("%5d", arr2[n-1][i]);
//	return 0;
//}
/*�����ܣ�����һ���й�ʡ�ݻ�����Ϣ�ṹ�壬����ʡ������ơ��������ƽ��������˿�(����)�ȡ���д��������������n��������n��1��n��20����ʡ�ݵ���Ϣ��Ҫ����������˿��ܶ�����ʡ����Ϣ���������ֵ�����ݱ�����λС����

�������룺

4

����  ԥ  16.7  9402.36

�Ĵ�  ��  48.14  8041.82

����  ��  1.68  1961.20 

�½�ά���������  ��  166  2181.33

���������


����  ��  1.68  1961.20*/
//#include <stdio.h>
//typedef struct country
//{
//	char shengfen[10], jiancheng[5];
//	float s, c;
//	float md;
//};
//int main()
//{
//	int n = 0;
//	country cou[20];
//	scanf("%d", &n);
//	int count=0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s%s%f%f", &cou[i].shengfen, &cou[i].jiancheng, &cou[i].s, &cou[i].c);
//		cou[i].md = cou[i].c / cou[i].s;
//	}
//	int max = cou[0].md;
//	for (int i = 0; i < n; i++)
//	{
//		if (max <= cou[i].md)
//		{
//			max = cou[i].md;
//			count = i;
//		}
//	}
//	printf("%s %s %.2f %.2f\n", cou[count].shengfen, cou[count].jiancheng, cou[count].s, cou[count].c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'z')
//	{
//		ch -= 32;
//	}
//	printf("%c", ch);
//	return 0;
//}
//#include <stdio.h>
//void max_min(int a[], int n, int* pmax, int* pmin);
//int main()
//{
//	int arr[10];
//	int n,a;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		arr[i] = a;
//	}
//	int* pmax=&arr[0], * pmin = &arr[n];
//	
//	max_min(arr, n, pmax, pmin);
//	printf("%d %d", *pmax, *pmin);
//	return 0;
//}
//void max_min(int a[], int n, int* pmax, int* pmin)
//{
//	
//	int count1 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (*pmax <= *(pmax + count1))
//		{
//			*pmax = *(pmax + count1);
//		}
//		else
//		{
//			;
//		}
//		count1++;
//	}
//	int count = 0;
//	for (int i = n ; i >0; i--)
//	{
//		
//		if (*(pmin-count) <= *pmin)
//		{
//			*pmin = *(pmin - count);
//		}
//		else
//			;
//		count++;
//		
//	}
//
//	
//}