#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//int main()
//{
//	char a, b, c;
//	char max, min, tem;
//	int i = 0;
//	char arr[999];
//while (scanf("%c%c%c\n", &a, &b, &c)!=EOF)
//	{
//		max = (a > b ? a : b);
//			min = (a < b ? b : a);
//		max = (max > c ? max : c);
//		min = (min < c ? min : c);
//		if (a<max && a>min)
//			tem = a;
//		if (b<max && b>min)
//			tem = b;
//		if (c<max && c>min)
//			tem = c;
//		arr[i] = min;
//		arr[i + 1] = tem;
//		arr[i + 2] = max;
//		i = i + 3;
//	}
//for (int j = 0; j < i-3; j=j+3)
//{
//	printf("%c %c %c\n", arr[j], arr[j + 1], arr[j + 2]);
//}
//printf("%c %c %c", arr[i-2], arr[i - 1], arr[i ]);
//	return 0;
//}
/*QB ���� Madoka������ȥ����һ����������ļ�����������أ�

����һ���� n ��ÿһ�β�������� n �����һλ���ֲ�Ϊ�㣬������1������������10����ɾ�����һλ���֣���

���ڸ�����ʼʱ���� n �Ͳ������� k ������� k �κ�Ľ����*/
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		if (n % 10 != 0)
//			n = n - 1;
//		else 
//			n = n / 10;
//	}
//	printf("%d", n);
//	return 0;
//}
/*��һ�� n �� m ��ֻ���� 0 �� 1 �ľ������ҳ�һ�������� 0 ����������Σ�����߳���*/
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int  arr[100][100];
	int a, flag = 1;
	int count = 1;
	int i = 0, j = 0;
	int count1 = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a);
			arr[i][j] = a;
		}
	}
	if (n != m)
	{
		for (int i = 0; i < n; i++)
		{
			count = 1;
			for (; j < m; j++)
			{
				if (arr[i][j] == 1 && arr[i][j + 1] == 1 && arr[i + 1][j] == 1 && arr[i + 1][j + 1] == 1 && arr[i - 1 + count][j - 1 + count] == 1)
					count++;
				j++;
				count1 = (count >= count1 ? count : count1);
				break;
			}
		}
	}

		/*if (m == n)
		{
			
			for (int i = 0; i < n; i++)
			{
			
				count = 1;
				for (j=0; j < m; j++)
				{
					if (arr[i][j] == 1 && arr[i][j + 1] == 1 && arr[i + 1][j] == 1 && arr[i + 1][j + 1] == 1 && arr[i - 1 + count][j - 1 + count] == 1)
						count++;
					
					
				}
					count1 = (count >= count1 ? count : count1);
			}
			
		}*/

		printf("%d", count1);
		return 0;
	}
