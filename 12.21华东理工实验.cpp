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
//	int  count1 = 1;
//	fprintf(fp, "��%d�μ�����ϰ��׼ȷ�����£�\n", count1);
//	printf("������ϰ�������������5����Ŀ\n");
//	printf("ʮ���ڼӡ������ˡ������������뱣��2λС����������⣺\n");
//		char judge='Y';
//		while (judge == 'Y')
//		{
//			int count = 0;
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
//			printf("׼ȷ��Ϊ%d%%\n", count *20);
//			fprintf(fp, "׼ȷ��Ϊ%d%%\n", count * 20);
//			printf("�Ƿ�����������������Y����������N\n");
//			getchar();
//			scanf("%c", &judge);
//			while (judge != 'Y' && judge != 'N')
//			{
//				printf("������Y��N!\n");
//				getchar();
//				scanf("%c", &judge);
//			}
//			count1++;
//			
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
//#include <stdio.h>
//int main()
//{
//	int sum = 0; int a, b, c, d, e, f, h, i, j, k, l, m, n, o, p, q, r; char g;
//	char str[11] = { 1,0,'x',9,8,7,6,5,4,3,2 };
//	char judge='Y';
//	while (judge == 'Y')
//	{
//		scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%c", &a, &b, &c, &d, &e, &f,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q,&r,&g);
//		getchar();
//		sum += (7 * a + 9 * b + 10 * c+ 5 * d + 8 * e + 4 * f + 2 *h + i + 6 * j + 3 * k + 7 * l + 9 * m + 10 * n + 5 * o + 8 * p  + 4 * q + 2 * r);
//		int end = sum % 11;
//		int y =h*1000+i*100+j*10+k , mo =l*10+m , ri =n*10+o ;
//		if (str[end] == g-48)
//			printf("correct,��������Ϊ��%d��%d��%d��\n", y, mo, ri);
//		else
//			printf("wrong\n");
//		printf("������������Y����������N\n");
//		scanf("%c", &judge);
//		getchar();
//		while (judge != 'Y' && judge != 'N')
//		{
//			printf("������Y��N!\n");
//			scanf("%c", &judge);
//			getchar();
//		}
//	}
//		return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void sorted(char(*a)[15], int n);
//void print(char(*a)[15], int n);
//void search(char (*a)[15], int n);
//int main()
//{
//	FILE* fp;
//	fp = fopen( "city.txt", "r");
//	char a[10][15];
//	for (int i = 0; i < 10; i++)
//	{
//		fscanf(fp,"%s", &a[i]);
//	}
//	sorted(a, 10);
//	print(a, 10);
//	char judge;
//	printf("�Ƿ���Ҫ���ҳ��У���Ҫ������Y������Ҫ������N\n");
//	scanf("%c", &judge);
//	if (judge == 'Y')
//		search(a, 10);
//	return 0;
//}
//void sorted(char(* a)[15], int n)
//{
//	char tem[15];
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9 - i; j++)
//		{
//			if (strcmp(a[j], a[j + 1]) >= 0)
//			{
//				strcpy(tem, a[j]);
//				strcpy(a[j], a[j + 1]);
//				strcpy(a[j + 1], tem);
//			}
//		}
//	}
//}
//void print(char (*a)[15], int n)
//{
//	printf("%s", a[0]);
//
//	for (int i = 1; i < n; i++)
//	{
//		printf("\n%s", a[i]);
//	}
//	printf("\n");
//}
//void search(char (*a)[15], int n)
//{
//	int flag = 0;
//	char str[15];
//	printf("��������Ҫ���ҵĳ���Ӣ�ģ�����ĸ��д��\n");
//	scanf("%s", str);
//	for (int i = 0; i < 10; i++)
//	{
//		if (strcmp(str, a[i]) == 0)
//		{
//			printf("�鵽������У�");
//			flag = 1;
//
//		}
//	}
//	if (flag == 0)
//		printf("û���ҵ�������У�\n");
//}
//int main()
//{
//	int n = 2;
//	while (n--);
//
//	printf("%d", n);
//}
//#define a 3.5
//#define s(x) a*x*x
//const double PI = acos(-1);
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	printf("%.2lf %.2lf",sin(a*PI/180),cos(a*PI/180) );
//}