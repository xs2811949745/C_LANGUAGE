#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
int main()

{	
	int a,b;
	int  arr[1000] = {};
	int flag = 1;
	scanf("%d", &a);		//输入a次
	int i = 0;
	for ( i = 0; i < a; i++)
	{
		scanf("%d", &b);
		arr[i] = b;
	}
	int c,d;
	int j;
	char answer[3000] = {};
	scanf("%d", &c);
	for ( j = 0; j < c; j=j+3)
	{
		scanf("%d", &d);
		for (int m = 0; m < i; m++)
		{
			if (arr[m] == d)
			{
				answer[j] = 'y';
				answer[j + 1] = 'e';
				answer[j + 2] = 's';
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			answer[j] = 'n';
			answer[j + 1] = 'o';
			answer[j + 2] = 's';
		}
		
	}
	for (int n = 0; n < j - 3; n = n + 3)
	{
		printf("%c", answer[n]);
		printf("%c", answer[n+1]);
		printf("%c\n", answer[n+2]);
	}
	
		printf("%c%c%c", answer[j-5],answer[j-4],answer[j-3]);
		
	
	return 0;
}
//#include <stdio.h>
//int main()
//
//{
//	int a, b;
//	int arr[1000] = {};
//	int flag = 1;
//	scanf("%d", &a);		//输入a次
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		arr[i] = b;
//	}
//	int c, d;
//	scanf("%d", &c);
//	for (int j = 0; j < c; j++)
//	{
//		flag = 1;
//		scanf("%d", &d);
//		for (int m = 0; m < i; m++)
//		{
//			if (arr[m] == d)
//			{
//				printf("yes\n");
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("no\n");
//
//	}
//	return 0;
//}
