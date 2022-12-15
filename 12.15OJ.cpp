#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//int len(char* sp);
//int main()
//{
//	char a[105];
//	fgets(a, 105, stdin);
//	int count=len(a);
//	printf("%d", count);
//	return 0;
//}
//int len(char* sp)
//{
//	int count=0;
//	while (*sp != '\0')
//	{
//		if (*sp == ' '||*sp=='\n')
//		{
//			;
//		}
//			
//		else {
//			count++;
//		}
//			sp++;
//	}
//	return count;
//	//实现sp所指串的长度，不计空格。 
//}
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//void ringShift(int* a, int n, int k);
//void printarr(int a[], int n);
//int main()
//{
//	int n,k; int* a=NULL;
//	scanf("%d", &n);
//	 a= (int*)malloc(n * sizeof(int));
//	
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &k);
//	ringShift(a, n, k);
//	printarr(a, n);
//	free(a);
//	return 0;
//}
//void ringShift(int a[], int n, int k)
//{
//
//	int count = 0, *b=NULL,count1=0;
//	b = (int*)malloc(k * sizeof(int));
//	while (count + k != n - 1)
//	{
//		count++;
//	}
//	for (int i = k - 1; i >=0; i--)
//	{
//		b[i] = a[n-1 - count1];
//		count1++;
//	}
//	count1 = 0;
//	for (int i = 0; i <=count; i++)
//	{
//		if (i <= count)
//		{
//			
//			a[n-1-count1] = a[n-k-1-count1];
//			count1++;
//		}
//	}
//	for (int i = 0; i < k; i++)
//	{
//		a[i] = b[i];
//	}
//	free(b);
//	//循环移动后的数值仍然存入数组a中 
//}
//void printarr(int a[],int n)
//{
//	printf("%d", a[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf(" %d", a[i]);
//	}
//}
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int i, j, k;
	for (k = 0;  k<=c; k++)
	{
		if (k == 60)
		{
			k = 0;
			c -= 60;
			b++;
		}
	}
	for (j = 0; j <=b; j++)
	{
		if (j == 60)
		{
			j = 0;
			b -= 60;
			a++;
		}
	}
	for ( i = 0; i <=a; i++)
	{
		if (i == 24)
		{
			a -= 24;
			i = 0;
		}
	}
	printf("%02d:%02d:%02d", a, b, c);
	return 0;
}