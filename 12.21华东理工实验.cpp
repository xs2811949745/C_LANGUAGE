#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
//int f(int n, int m);
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int sum = f(n, m);
//	printf("%d", sum);
//	return 0;
//}
//int f(int n, int m)
//{
//	int sum = 0;
//	if (m == n || n == 0)
//	{
//		sum += 1;
//	}
//	else
//		sum += (m*f(n,m-1)  / (m - n));
//
//		return sum;
//}
//#include <stdlib.h>
//#include <stdio.h>
//int add(int x, int y);
//int sub(int x, int y);
//int mul(int x, int y);
//double div(double x, double y);
//int main()
//{
//	FILE* fp;
//	fp = fopen("result.txt", "w+");
//	int count = 0, count1 = 1;;
//	fprintf(fp, "第%d次计算练习及准确率如下：\n", count1);
//	printf("计算练习，电脑随机生成5道题目\n");
//	printf("十以内加、减、乘、除（四舍五入保留2位小数），请答题：\n");
//		char judge='Y';
//		while (judge == 'Y')
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				double result;
//				int a = rand() % 4;
//				if (a == 0)
//				{
//					int x = rand() % 21, y = rand() % 21;
//					printf("%d+%d=", x, y);
//					scanf("%lf", &result);
//						fprintf(fp, "%d+%d=%.0lf\n", x, y, result);
//					if (result == add(x, y))
//					{
//						count++;
//					}
//
//				}
//				if (a == 1)
//				{
//					int x = rand() % 21, y = rand() % 21;
//					printf("%d-%d=", x, y);
//					scanf("%lf", &result);
//						fprintf(fp, "%d-%d=%.0lf\n", x, y, result);
//					if (result == sub(x, y))
//					{
//						count++;
//
//					}
//				}
//				if (a == 2)
//				{
//					int x = rand() % 21, y = rand() % 21;
//					printf("%d*%d=", x, y);
//					scanf("%lf", &result);
//						fprintf(fp, "%d*%d=%.0lf\n", x, y, result);
//					if (result == mul(x, y))
//					{
//						count++;
//
//					}
//				}
//				if (a == 3)
//				{
//					double x = rand() % 21, y = rand() % 21;
//					while (y == 0)
//						y = rand() % 21;
//					printf("%.0lf/%.0lf=", x, y);
//					scanf("%lf", &result);
//						fprintf(fp, "%.0lf/%.0lf=%.0lf\n", x, y, result);
//					if (result == div(x, y))
//					{
//						count++;
//
//					}
//				}
//			}
//			printf("准确率为%d%%\n", count * 20);
//			fprintf(fp, "准确率为%d%%\n", count * 20);
//			printf("是否继续，如果是请输入Y，否则输入N\n");
//			getchar();
//			scanf("%c", &judge);
//			while (judge != 'Y' && judge != 'N')
//			{
//				printf("请输入Y或N!\n");
//				getchar();
//				scanf("%c", &judge);
//			}
//			count1++;
//		}
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//double div(double x, double y)
//{
//	return x / y;
//}
int main()
{
	int sum=0;
	int a[19],char b[11] = { 1,0,'X',9,8,7,6,5,4,3,2 };
	for (int i = 0; i < 18; i++)
	{
		scanf("%1d", a[i]);
		
		getchar();
	}
	sum += 7 * a[0] + 9 * a[1] + 10 * a[2] + 5 * (a[3] - 48) + 8 * (a[4] - 48) + 4 * (a[5] - 48) + 2 * (a[6] - 48) + (a[7] - 48) + 6 * (a[8] - 48) + 3 * (a[9] - 48) + 7 * (a[10] - 48) + 9 * (a[11] - 48) + 10 * (a[12] - 48) + 5 * (a[13] - 48) + 8 * (a[14] - 48) + 4 * (a[15] - 48) + 2 * (a[16] - 48);
	int end = sum % 11;
	if (a[17] == b[end])
	{
		if (a[10] == 0 && a[12] == 0)
			printf("出生年月为：%d%d%d%d年%d月%d日", a[6], a[7], a[8], a[9], a[11], a[13]);
		if (a[10] == 0 && a[12] != 0)
			printf("出生年月为：%d%d%d%d年%d月%d%d日", a[6], a[7], a[8], a[9], a[11],a[12], a[13]);
		if (a[10] != 0 && a[12] == 0)
			printf("出生年月为：%d%d%d%d年%d%d月%d日", a[6], a[7], a[8], a[9],a[10], a[11], a[12], a[13]);

	}
	return 0;
}
