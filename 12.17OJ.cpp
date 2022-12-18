#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//#include <windows.h>
//int main()
//{
//	char str1[100001]; char str2[100001];
//	while (scanf("%s%s", str1, str2) != EOF)
//	{
//		char max1 = str1[0], max2 = str2[0], tem;
//
//		for (int i = 0; i < strlen(str1) - 1; i++)
//		{
//			for (int j = 0; j < strlen(str1) - 1 - i; j++)
//			{
//				if (str1[j] >= str1[j+1])
//				{
//					tem = str1[j];
//					str1[j] = str1[j + 1];
//					str1[j + 1] = tem;
//				}
//			}
//		}
//		for (int i = 0; i < strlen(str2) - 1; i++)
//		{
//			for (int j = 0; j < strlen(str2) - 1 - i; j++)
//			{
//				if (str2[j] >= str2[j+1])
//				{
//					tem = str2[j];
//					str2[j] = str2[j+1];
//					str2[j+1] = tem;
//				}
//			}
//		}
//		if (strcmp(str2, str1) >= 0)
//			printf("yes");
//		else
//			printf("no");
//	}
//	return 0;
//}
#include <stdio.h>
int IsUpperTriMatrix(int (*a)[11], int n);
int main()
{
	int n,a[11][11];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int b=IsUpperTriMatrix(a, n);
	if (b == 0)
		printf("NO");
	if (b == 1)
	{
		printf("YES");
	}
	return 0;
}
int IsUpperTriMatrix(int (*a)[11], int n)
{
		int count = 0;
	int r = n, c = n,flag=0;
	for (int i = 0; i < n; i++)
	{
		for (int j =1 ; j < n-count; j++)
		{
			if (a[j + count][i] == 0)
				flag = 0;
			else
				flag = 1;
			if (flag == 1)
				return 0;
		}
		count++;
	}
	return 1;
}