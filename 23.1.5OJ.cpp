#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include "C.user.h" 
//int main()
//{
//	
//	return 0;
//}
//【OJ1126：布尔矩阵的奇偶性】
//#include <stdio.h>
//int BalanceMatrix(int(*a)[101], int n);
//int count_i = 0, count_j = 0;
//int main()
//{
//	int arr[101][101], n, tem;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int flag = BalanceMatrix(arr, n);
//	if (flag == 1)
//		printf("OK");
//	if (flag == 2)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			
//			tem = arr[count_i][i];
//			if(tem==0)
//			arr[count_i][i] = 1;
//			if (tem == 1)
//				arr[count_i][i] = 0;
//				
//			if (BalanceMatrix(arr, n) == 1)
//
//			{
//				count_j = i;
//				break;
//			}
//			arr[count_i][i] = tem;
//
//
//		}
//		printf("Change bit(%d,%d)", count_i, count_j);
//		
//	}
//	if (flag == -1)
//		printf("Corrupt");
//
//	return 0;
//}
//int BalanceMatrix(int (*a)[101], int n)
//{
//	int flag = 1, sum1 = 0, sum2 = 0, count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			sum1 += a[i][j];
//			sum2 += a[j][i];
//		}
//		if (sum2 % 2 == 0 && sum1 % 2 == 0)
//		{
//			;
//		}
//		else if (sum2 % 2 == 1)
//		{
//			count++;
//		}
//		if (sum1 % 2 == 1)
//		{
//			count++;
//			count_i = i;
//			
//		}
//		sum1 = 0;
//		sum2 = 0;
//	}
//	if (count == 1||count==2)
//		flag = 2;
//	if (count > 2)
//		flag = -1;
//
//	return flag;
//}
//【OJ1128: 课程平均分】
//#include <stdio.h>
//int main()
//{
//	double m, n, sum = 0; int count = 0;
//	scanf("%lf%lf", &m, &n);
//	double a[1001][11],score[1001];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%lf", &a[i][j]);
//		}
//	}
//	while (count < n)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			sum += a[i][count];
//
//		}
//		score[count] = sum/m;
//		sum = 0;
//		count++;
//	}
//	printf("%.2lf", score[0]);
//	for(int i=1;i<n;i++)
//		printf(" %.2lf", score[i]);
//
//		return 0;
//}
//#include <stdio.h>
//int IsLeap_year(int n);
//int main()
//{
//	int  year, month, day, sum = 0;
//	scanf("%d-%d-%d", &year, &month, &day);
//	
//	if(month>1)
//		sum += 31;
//	if (month > 2)
//	{
//		if (IsLeap_year(year) == 1)
//			sum += 29;
//		else
//			sum += 28;
//	}
//
//	if (month > 3)
//		sum += 31;
//
//	if (month > 4)
//		sum += 30;
//
//	if (month > 5)
//		sum += 31;
//
//	if (month > 6)
//		sum += 30;
//
//	if (month > 7)
//		sum += 31;
//
//	if (month > 8)
//		sum += 31;
//
//	if (month > 9)
//		sum += 30;
//
//	if (month > 10)
//		sum += 31;
//
//	if (month > 11)
//		sum += 30;
//	
//	sum += day;
//	printf("%d", sum);
//	return 0;
//}
//int IsLeap_year(int n)
//{
//	int flag = 0;
//	if (n % 4 == 0 && n % 100 != 0)
//		flag = 1;
//	if (n % 400 == 0)
//		flag = 1;
//	return flag;
//}
//【OJ1130: 杨辉三角】
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<n;i++)
	return 0;
}