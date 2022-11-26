#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*OJ100  求组合数*/
//long fact(long n);
//int main()
//{
//
//	int m, k;
//	scanf("%d%d", &m, &k);
//	long a = fact(m);
//	long b = fact(k);
//	long c = fact(m - k);
//	printf("%ld", a / (b * c));
//	return 0;
//}
//long fact(long n)
//
//{
//	long b = 1;
//	for (int a =1; a <=n; a++)
//	{
//		b *= a;
//	}
//	return b;
//	//函数返回值为n的阶乘。 
//}
#include <stdio.h>
#include <math.h>
int inverse(int n);
/*OJ101逆序数输出并和原数相加*/
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int b = inverse(n);
//	printf("%d", b + n);
//	return 0;
//}
//int inverse(int n)
//
//{
//	int b = log10(n);
//	int c = 10;
//	int d=0;
//	for (int i = b; i >=0; i--)
//	{
//		d = d*10+n % 10;
//		n /= 10;
//	}
//	return d;
//	//计算并返回n的逆序数字 
//}
#include <stdio.h>
//double CancelFee(double price);
//int main()
//{
//	double price;
//	scanf("%lf",&price);
//	double a = CancelFee(price);
//	int c = price * 0.05;
//	printf("%.1lf",a+c);
//	return 0;
//}
//double CancelFee(double price)
//{
//	double b = price * 0.05;
//	double a = (int)b;
//	double c = b - a;
//	if (c < 0.25)
//	return 0;
//	if (c >= 0.25 && c < 0.75)
//		return 0.5;
//	if (c >= 0.75)
//		return 1;
//
//}
// /*oj103
//#include <stdio.h> 
//int main()
//{
//	int n, xf, cj, jd,zxf=0,zjd=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &xf, &cj);
//		if (cj < 60)
//			cj = 50;
//		
//		zxf += xf;
//		jd = (cj - 50) / 10;
//		zjd += xf * jd;
//	}
//	printf("%.1f", (float)zjd / zxf);
//	return 0;
//}
// /*OJ105
//#include <stdio.h>
//int Facsum(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = Facsum(n);
//	printf("%d", sum);
//	return 0;
//}
//int Facsum(int n)
//{
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//			sum += i;
//
//	}
//	return sum;
//}/*OJ105
#include <stdio.h>
int facsum(int n);
int main()
{
	int n, m;
	int arr[10000];
	scanf("%d%d", &m, &n);
	int flag = 0;
	for (; m < n; m++)
	{
		int sum = facsum(m);
		arr[m] = sum;

	}
	for (int j=0; j <n;j++ )
	{
		for (int i = 0; i < m; i++)
		{
			if (arr[j] == i && arr[i] == j && arr[j] != j)
			{
				printf("%d %d\n", j, arr[j]);
				flag = 1;
				j = arr[j];
			}
			
		}
	}
	if (flag == 0)
		printf("No answer");
	return 0;
}
int facsum(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}