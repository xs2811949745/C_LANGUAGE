#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int main()
{
	double a, b, c,x1,x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (b * b - a * c * 4 > 0)
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		
		if (x2 >=0)
			printf("%d ", int(x2 + 0.5));
		if (x2 < 0)
			printf("%d ", int(x2 - 0.5));
		if (x1 >=0)
			printf("%d", int(x1 + 0.5));
		if (x1 < 0)
			printf("%d", int(x1 - 0.5));

	}
	else if (b * b - a * c * 4 == 0)
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		if (x1 >=0)
			printf("%d", int(x1 + 0.5));
		if (x1 < 0)
			printf("%d", int(x1 - 0.5));
	}

	else 
		printf("error");
	return 0;
}