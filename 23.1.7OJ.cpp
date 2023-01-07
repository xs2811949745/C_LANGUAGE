#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
//int main()
//{
//	int n,count=0;
//	char name_call[201][20];
//	char name[] = "younik";
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//			int flag = 0;
//			char tem[20]="0";
//
//			
// 		scanf("%s", tem);
//
//		for (int j = 0; j <=i; j++)
//		{
//			if (strcmp(tem,name)==0)
//			{
//				flag = 2;
//				break;
//			}
//			if (strcmp(name_call[j], tem) == 0)
//			{
//				flag = 1;
//				break;
//			}
//			
//		}
//		if (flag == 0)
//		{
//			count++;
//		
//			strcpy(name_call[i], tem);
//		}
//		if (flag == 2)
//		{
//			count++;
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//void move_range(int a[], int n, int m)
//#include <stdio.h>
//void move_range(int a[], int n, int m);
//void arr_print(int a[], int n);
//int main()
//{
//	
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = i; j < 8 ; j++)
//		{
//			int a[8] = { 1,2,3,4,5,6,7,8 };
//			if (i != j)
//			{
//				move_range(a, i, j);
//
//				arr_print(a, 8);
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
//void move_range(int a[],int n,int m)
//{
//	int tem;
//	tem = a[n];
//	a[n] = a[m];
//	a[m] = tem;
//}
//void arr_print(int a[],int n)
//{
//	printf("%d", a[0]);
//	for(int i=1;i<n;i++)
//		printf(" %d", a[i]);
//
//}
#include<cstdio>
int main()
{
	for (int a = 1; a < 9; a++)
	{
		for (int b = 1; b < 9; b++)
		{
			for (int c = 1; c < 9; c++)
			{
				for (int d = 1; d < 9; d++)
				{
					for (int e = 1; e < 9; e++)
					{
						for (int f = 1; f < 9; f++)
						{
							for (int g = 1; g < 9; g++)
							{
								for (int h = 1; h < 9; h++)
								{
									int book[9] = { 0 };
									book[a]++;
									book[b]++;
									book[c]++;
									book[d]++;
									book[e]++;
									book[f]++;
									book[g]++;
									book[h]++;
									int ans = 1;
									while (ans < 9 && book[ans] == 1) ans++;
									if (ans == 9) printf("%d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}