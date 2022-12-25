#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int eleven(int n,int m);
int main()
{
	int n,x,ws,a[1000];

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		for (int j = 0; log10(x)+1 >j; j++)
		{
			ws = j;
		}
		if (x >= 11)
		{
			int flag = eleven(x, ws);
			if (flag == 1)
				a[i] = 1;
			else
				a[i] = 0;
		}
		else
			a[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
int eleven(int n,int m)
{
	int flag = 0, sum1=0, sum2=0,count=0;
	
	for (; m>=0; m-=2)
	{
		sum1 += n % 10;
		n /= 10;
		sum2 += n % 10;
		n /= 10;
	}
	if (sum1 % 11 == sum2 % 11)
		flag = 1;
	return flag;
}
