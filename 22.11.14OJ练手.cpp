#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*����ĳ�˵�18λ���֤�ţ������������ڡ�*/
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b, c, d, e, f;
//	int year[100];
//	int month[100];
//	int day[100];
//	int i = 0;
//	for ( i = 0; i < a; i++)
//	{
//		scanf("%6d%4d%2d%2d%4d", &b, &c, &d, &e, &f);
//		year[i] = c;
//		month[i] = d;
//		day[i] = e;
//	}
//	for (int j = 0; j < a - 1; j++)
//	{
//		printf("%04d-%02d-%02d\n", year[j], month[j], day[j]);
//	}
//	printf("%04d-%02d-%02d", year[i-1], month[i-1], day[i-1]);
//
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%3d", &a);
//	printf("%d", a);
//	return 0;
//}
/*��Ҷ�֪�����ֻ�����һ��11λ�������ִ���ͬʱ����Ϊѧ�����������������У԰�����������ɹ����㽫����ӵ��һ���̺š��������еĶ̺Ŷ����� 6+�ֻ��ŵĺ�5λ���������Ϊ13512345678���ֻ�����Ӧ�Ķ̺ž���645678��
���ڣ��������һ��11λ�����ֻ����룬�����ҳ���Ӧ�Ķ̺���*/
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int tel[200];
//	int tele;
//	int b;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%6d%5d",&b, &tele);
//		tel[i] = tele;
//	}
//	for (int j = 0; j < i - 1; j++)
//	{
//		printf("6%05d\n", tel[j]);
//	}
//	printf("6%05d", tel[i - 1]);
//	return 0;
//}
/*����һ��������n�����n!�����λ�ϵ����֡�*/
/*ע��double����������⡣*/
//int main()
//{
//	int n = 0;
//	long long a=1;
//	scanf("%d", &n);
//	for (int i = 1; i <=n; i++)
//	{
//		a *= i;
//
//	}
//	printf("%ld", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double s = 1;//sҪ�� double����Ϊ���Ҫ�м��������������� 
//	int a; //��������a 
//	scanf("%d", &a);
//	while (a != 1)//��ʼѭ������ 
//	{
//		s *= a;
//		while (s >= 10)//��s>=10��ʱ�� 
//		{
//			s /= 10;//�ܹ�Ӱ������ֻ�����λ���� 
//		}
//		a--;//ѭ�������ݼ� 
//	}
//	printf("%d", (int)s);//ǿ��ת���������double���������룬���Ա��int 
//}
