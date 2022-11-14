#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*输入某人的18位身份证号，输出其出生日期。*/
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
/*大家都知道，手机号是一个11位长的数字串，同时，作为学生，还可以申请加入校园网，如果加入成功，你将另外拥有一个短号。假设所有的短号都是是 6+手机号的后5位，比如号码为13512345678的手机，对应的短号就是645678。
现在，如果给你一个11位长的手机号码，你能找出对应的短号吗？*/
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
/*输入一个正整数n。输出n!的最高位上的数字。*/
/*注意double类型溢出问题。*/
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
//	double s = 1;//s要用 double，因为结果要中间结果考虑四舍五入 
//	int a; //定义整型a 
//	scanf("%d", &a);
//	while (a != 1)//开始循环计算 
//	{
//		s *= a;
//		while (s >= 10)//当s>=10的时候 
//		{
//			s /= 10;//能够影响结果的只有最高位数字 
//		}
//		a--;//循环变量递减 
//	}
//	printf("%d", (int)s);//强制转换，如果是double会四舍五入，所以变成int 
//}
