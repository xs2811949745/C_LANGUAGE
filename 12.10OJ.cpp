#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//void swap(int* pa, int* pb)
//{
//	int t;
//	t = *pa; *pa = *pb; *pb = t;
//}
//int main()
//{
//	
//	int a[4];
//
//	scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3 - i; j++)
//		{
//			if (a[j] < a[j + 1])
//				swap(&a[j], &a[j + 1]);
//		}
//	}
//	printf("%d", a[0]);
//	for (int i = 1; i < 4; i++)
//	{
//		printf(" %d", a[i]);
//	}
//	return 0;
//}
void LargestTow(int a[], int n, int* pfirst, int* psecond)
{
	int max=a[0],min=a[0];
	for(int i=0;i<n;i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (min < a[i])
		{
			if(min!=max)
			min = a[i];
		}
	}
	*pfirst = max;
	*psecond = min;
	printf("%d %d", *pfirst, *psecond);
	/*����a��n��Ԫ�أ��������е����ֵ�����β�ָ��pfirst��ָ�ڴ浥Ԫ���������еڶ����ֵ�����β�ָ��psecond��ָ�ڴ浥Ԫ�� */
}
int main()
{
	int* pfirst=NULL; int* psecond=NULL;
	int n,a[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	LargestTow(a, n, pfirst, psecond);
	return 0;
}