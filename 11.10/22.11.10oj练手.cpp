#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
 /*输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入结束，该行不做处理。 */
//OJ83
 //int main()
//{
//	float n, x = 0, l = 0, f = 0, z = 0;
//	int i = 0;
//	int count = 0;
//	float zhengshu[100] = {};
//	float fushu[100] = {};
//	float ling[100] = {};
//	scanf("%f", &n);
//	while (n != 0) {
//		
//		for ( i = 0;i<n;i++)
//		{
//			scanf("%f", &x);
//			if (x < 0)
//				f++;
//				if (x > 0)
//					z++;
//			if (x == 0)
//				l++;
//		}
//		zhengshu[count] = z;
//		fushu[count] = f;
//		ling[count] = l;
//		z = 0;
//		f = 0;
//		l = 0;
//		scanf("%f", &n);
//		count++;
//	}
//	for (int j = 0; j < count-1; j++)
//	{
//		printf("%.0f ", fushu[j]);
//		printf("%.0f ", ling[j]);
//		printf("%.0f", zhengshu[j]);
//		puts("");
//	}
//	printf("%.0f ", fushu[count-1]);
//	printf("%.0f ", ling[count-1]);
//	printf("%.0f", zhengshu[count-1]);
//	return 0;
//}
/*入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。*/
//OJ84
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x1, y1, x2, y2, d;//定义两点的四个坐标，以及距离d
//	while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF)//没有结束输入
//	{
//		d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));//利用两点间距离公式计算距离
//		printf("%.2lf\n", d);//输出两点间距离
//	}
//	return 0;//程序正常结束
//}
//OJ85
//给你n个整数，求他们中所有奇数的乘积
//int main()
//{
//	int  n, a, b, c, d, e, f ;
//	double sum=1;
//	int j = 0;
//	int arr[100000] = {};
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//     		scanf("%d", &a);
//			if (a % 2 == 1|| a % 2 == -1)
//			{
//				sum *= a;
//			}
//		}
//
//		arr[j] = sum;
//		j++;
//		sum = 1;
//	}
//	for (int i = 0; i < j - 1; i++)
//	{
//		printf("%d", arr[i]);
//		puts("");
//	}
//	printf("%d", arr[j-1]);
//	return 0;
//}
#include<stdio.h>
//OJ1000内完全数
//int main()
//{
//	int m, n, sum = 0;
//	for (m = 2; m <= 1000; m++)
//	{
//		for (n = 1; n < m; n++)
//		{
//			if (m % n == 0)
//				sum = sum + n;
//		}
//
//		if (sum == m)
//			printf("%d\n", m);
//		sum = 0;
//	}
//	return 0;
//}
