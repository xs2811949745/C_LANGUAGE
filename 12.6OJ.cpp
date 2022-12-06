#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//int main()
//{
//	
//	char a, b;
//	scanf("%c", &a);
//	getchar();
//	scanf("%c", &b);
//	int min;
//	int flag = -1;
//	if (a >= '0' && a <= '9' && b >= '0' && b <= '9')
//	{
//		flag = 0;
//		if (a > b)
//			min = b;
//		else
//			min = a;
//	}
//	if (flag == 0)
//	{
//		printf("%c", min);
//	}
//	else
//		printf("%d", flag);
//	return 0;
//	
//
//}
//#include <stdio.h>
//int leap_year(int n);
//int main()
//{
//	int y, m, d, h, t, s;
//	int sum = 0;
//	scanf("%d%d%d%d%d%d", &y, &m, &d, &h, &t, &s);
//	int flag = leap_year(y);
//	sum += d-1;
//	if (m > 1)
//		sum += 31;
//	if (m > 2&&flag==0)
//		sum += 28;
//	if (m > 2 && flag == 1)
//		sum += 29;
//	if (m > 3)
//		sum += 31;
//	
//	if (m > 4)
//		sum += 30;
//	if (m >5)
//		sum += 31;
//	if (m >6)
//		sum += 30;
//	if (m >7)
//		sum += 31;
//	if (m >8)
//		sum += 31;
//	if (m > 9)
//		sum += 30;
//	if (m >10)
//		sum += 31;
//	if (m >= 11)
//		sum += 30;
//	sum = sum * 60 * 60 * 24 + h * 60 * 60 + t * 60 + s;
//	int arr[10]={0};
//	while (sum > 9)
//	{
//		int a = sum % 10;
//		sum /= 10;
//		arr[a]++;
//	}
//	arr[sum]++;
//	printf("%d", arr[0]);
//	for (int i = 1; i <=9; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//	return 0;
//}
//int leap_year(int n)
//{
//	int flag = 0;
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		flag = 1;
//	return flag;
//}
//#include <stdio.h>
//int gyz(int x, int y);
//int main()
//{
//	int w,flag=0;
//	scanf("%d", &w);
//	int a[100000],b[10]={0};
//	for (int i = 0; i < w; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	for (int i = w-1;i>0;i--)
//	{
//		
//		
//			int count = gyz(a[i], a[i - 1]);
//			b[count]++;
//			
//		
//	}
//
//	if (w != 1)
//	{
//		
//		
//		
//			int max = b[1], count = 0;
//			for (int i = 1; i <= 9; i++)
//			{
//				if (max <= b[i])
//				{
//					max = b[i];
//					count = i;
//				}
//			}
//
//			printf("%d", count);
//		
//	}
//	if (w == 1)
//	{
//		printf("%d", a[0]);
//	}
//	
//		return 0;
//}
//int gyz(int x, int y)
//{
//	int gys;
//	while (y != 0)
//	{
//		gys = x % y;
//		x = y;
//		y = gys;
//	}
//	return x;
//	
//}
//int sort(double a[], int n);
//int main()
//{
//	int n;
//	char b;
//	double a[30][1];
//	
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//
//		scanf("%lf", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		sort(a[i], n);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s", a[i]);
//	}
//	return 0;
//}
//int sort(double a[], int n) 
//{
//	int i, j, t;
//	for (i = 0; i < n - 1; i++) {
//		for (j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				//ΩªªªŒª÷√ 
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	
//	printf("\"a %% b = c\"");
//	return 0;
//}