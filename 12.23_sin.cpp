#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//const double PI = acos(-1);
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	printf("%.2lf %.2lf",sin(a*PI/180),cos(a*PI/180) );
//}

//int main()
//{
//	
//	return 0;
//}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%.1f\n", a * 20 % +b * 30 % +c * 50 %);
	return 0;
}
