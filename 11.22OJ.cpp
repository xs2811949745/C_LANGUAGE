#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//double funF(double x);
//double funG(double x);
//int main()
//{
//	double x;
//	scanf("%lf", &x);
//	double y1 = funG(x);
//	double y2 = funF(y1);
//	printf("%.2lf",y2);
//	return 0;
//}
//double funF(double x)
//{
//	double y2;
//	y2 = fabs(x - 3) + fabs(x + 1);
//	return y2;
//	//函数返回F(x)的值； 
//}
//double funG(double x)
//{
//	double y1=x* x - 3 * x;;
//	return y1;
//	//函数返回G(x)的值； 
//}
int jg(int x);
int main()
{
	int x;
	while (scanf("%d", &x) != EOF)
	{
		int i = x;
		int count = 0;

	while (x != 1)
	{
		 if (x % 2 == 1)
		{
			x = x * 3 + 1;
			count++;
		}
		else if (x % 2 == 0)
		{
			x = x / 2;
			count++;
		}
	}

		printf("%d\n", count);
	}
	return 0;
}