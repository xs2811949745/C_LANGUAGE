#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
//int IsOdd(int n);
//int main()
//{
//	int n=1;
//	int sum = 0;
//	while ( n >0)
//	{
//		scanf("%d", &n);
//		if (IsOdd(n) == 1)
//			sum += n;
//
//		
//	}
//	printf("%d", sum);
//	return 0;
//}
//int IsOdd(int n)
//{
//	if (n % 2 == 0)
//		return 0;
//	if (n % 2 == 1 || n % 2 == -1)
//		return 1;
//}
//typedef struct students
//{
//	char id[13];
//	char name[20];
//	int yw, sx, yy;
//};
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	students stu[21];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s%s%d%d%d", &stu[i].id, &stu[i].name, &stu[i].sx, &stu[i].yw, &stu[i].yy);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if( stu[i].sx>=90|| stu[i].yw>=90 ||stu[i].yy>=90)
//			printf("%s %s %d %d %d\n", stu[i].id, stu[i].name, stu[i].sx, stu[i].yw, stu[i].yy);
//	}
//	return 0;
//}
//int main()
//{
//	int a[101],fs[101];
//	int n,count=0,sum=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] < 0)
//		{
//			sum += a[i];
//			fs[count] = a[i];
//			count++;
//		}
//	}
//	printf("%d\n", sum);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", fs[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	 
//	float n, sum=0;
//	scanf("%f", &n);
//	for (int i = 1; i <=n; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%.2f", sum);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[81],daxie[81];
//	int count = 0;
//	scanf("%s", str);
//	for (int i = 0; i < strlen(str)-1; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			daxie[count] = str[i];
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	for (int i = strlen(str) - 1; i >=0; i--)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void san(int a[], int n);
//void swap(int a[], int n);
//void print(int a[], int n);
//int main()
//{
//	int n,a[21];
//	scanf("%d", &n);
//	san(a, n);
//	swap(a, n);
//	print(a, n);
//	return 0;
//}
//void san(int a[],int n)
//{
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//
//}
//void swap(int a[], int n)
//{
//	int max = a[0],tem,count=0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max <= a[i])
//		{
//			max = a[i];
//			count = i;
//		}
//	}
//	tem = a[n-1];
//	a[n-1] = max;
//	a[count] = tem;
//}
//void print(int a[], int n)
//{
//	printf("%d", a[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf(" %d", a[i]);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	float x, y;
//	scanf("%f", &x);
//	if (x < 0)
//		y = -1.0 * x;
//	if (x >= 0 && x < 10)
//		y = -6.0 * x + 20;
//	if (x >= 10)
//		y =  2.0*x - 15;
//	printf("%f", y);
//	return 0;
//}
//int main()
//{
	/*int x = 6;
	printf("%d", x += x -= x * x);*/
	/*int k = -20,count=0;
	while (k == 0)
	{
		k++;
		count++;
	}
	printf("%d", count);*/
//	float x = 7.5, y = 2.5;
//	printf("%lf",(x + y) / 3 - (int)x % (int)y);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int prime( n);
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//		int count = 0;
//	for (; m < n; m++)
//	{
//			if (prime(m) == 1)
//			{
//				printf("%d ", m);
//				count++;
//				if (count == 10)
//				{
//					printf("\n");
//					count = 0;
//				}
//			}
//		
//
//	}
//
//	return 0;
//}
//int prime(double n)	//素数判断
//{
//
//	int flag = 1;	//素数返回值为1
//	for (int i = 2; i <= pow(n,1/2.0); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (n == 1)
//		flag = 0;	//非素数返回0
//	if (n == 2 || n == 3)
//	{
//		flag = 1;
//	}
//	return flag;
//}
//#include <stdio.h>
//int main()
//{
//	int n;
//	double fm=1, fz=2,tem;
//	double sum=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		sum += fz / fm;
//		tem = fm;
//		fm = fz;
//		fz = fz +tem;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//#include <stdio.h>
//void del(int* arr, int m);
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int m;
//	scanf("%d", &m);
//	del(a, m);
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//void del(int* arr, int m)
//{
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] == m)
//		{
//			count = i;
//			break;
//		}
//	}
//	for(; count < 10; count++)
//	{
//		arr[count] = arr[count + 1];
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int n,count=0,a[101],sum=0;
//	scanf("%d", &n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//			if (a[i] > 0)
//			{
//				count++;
//				sum += a[i];
//			}
//	}
//		printf("%d %d", count, sum);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int jdz(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int b = jdz(n);
//	printf("%d", b);
//	return 0;
//}
//int jdz(int n)
//{
//	return abs(n + 1);
//}
//int main()
//{
//	char str1[81], str2[81], str3[81];
//	char min[81];
//	if (str1 > str2)
//		min = str2;
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void cmpswa(char* s1, char* s2)
//{
//	char d[15];
//	strcpy(d, s2);
//	strcpy(s2, s1);
//	strcpy(s1, d);
//}
//int main()
//{
//	char a[81];
//	char b[81];
//	char c[81];
//	
//	scanf("%s%s%s", &a, &b, &c);
//	if (strcmp(a, b) > 0) {
//		cmpswa(a, b);
//	}
//	if (strcmp(a, c) > 0) {
//		cmpswa(a, c);
//	}
//	if (strcmp(b, c) > 0) {
//		cmpswa(b, c);
//	}
//	printf("%s",  c);
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>
//int max_min(int a[], int n, int* max, int* min)
//{
//	int* p;
//	*max = *min = *a;
//	for (p = a + 1; p < a + n; p++)
//	{
//		if (*p > *max)
//		{
//			*max = *p;			//最大值
//		}
//		else if (*p < *min)
//		{
//			*min = *p;			//最小值
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int a[11];
//	int max, min;
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);		//输入数组元素
//	}
//	max_min(a, n, &max, &min);		//调用max_min函数
//
//	printf("%d ", max);
//	printf("%d", min);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdio.h>
//#include <math.h>
//int isprime(int n);
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	if (m == 1)
//		m++;
//	int count = 0;
//	for (; m < n; m++)
//	{
//		if (isprime(m) == 1)
//		{
//			printf("%d ", m);
//			count++;
//			if (count == 10)
//			{
//				printf("\n");
//				count = 0;
//			}
//		}
//
//
//	}
//
//	return 0;
//}
//int isprime(int n)
//{
//	int i;
//	
//	for (i = 2; i <= n - 1; i++)
//	{ 
//		if (n % i == 0) return 0; 
//	}
//	return 1;
//}
//如果一个数是素数，则它只能被1和它本身整除
//取flag1为标志如果flag1=2，则该数是素数，同时给count+1，统计素数个数 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, N, i, j, flag1 = 0, count = 0;
//	scanf("%d %d", &n, &N);//默认N>n
//	if (N >= 3)
//	{
//		for (i = n; i <= N; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				if (i % j == 0)
//					flag1++;//如果i能被j整除，给flag1加1 
//			}
//			if (flag1 == 2)
//				count++;//如果N被整除了2次，给count加1
//			flag1 = 0;
//		}
//	}
//	else if (N = 2)
//	{
//		printf("1");//1到2之间只有2是素数 
//	}
//	else
//	{
//		printf("0");//其余情况下没有素数 
//	}
//	printf("%d", count);
//}
//#include <stdio.h>
//#include "math.h"
//int main(int argc, char* argv[]) {
//
//    int a, b, i, j;
//    int find = 0;
//    while (1)
//    {
//        printf("请输入两个数: ");
//        scanf("%d %d", &a, &b);
//        if (a > b || a < 2)
//        {
//            printf("\n输入时第一个数应该小于第二个数 并且 第一个数不小于2\n\n   按回车重新输入");
//            getchar();
//            getchar();
//            system("cls");
//        }
//        else
//        {
//            break;
//        }
//    }
//    for (i = a; i <= b; i++)
//    {
//        find = 1;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                find = 0;
//                continue;
//            }
//        }
//        if (find == 1)
//        {
//            printf("\n质数: %d", i);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//void main()
//{
//	int m, n, i, j, k;
//	scanf("%d %d", &m, &n);
//	int count = 1;
//	for (i = m; i <= n; i++)
//	{
//		if (i == 2) {
//			printf("%d ", i);
//			continue;
//		}
//		for (j = 2; j < i; j++)
//			if (i % j == 0) break;
//
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//			if (count == 10)
//			{
//				printf("\n");
//				count = 0;
//			}
//		}
//
//	}
//}
#include <stdio.h>

	int M;
	scanf("%d", &M);
int Transpose(int arry1[11][11], int arry2[11][11],int M)     
{
	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			arry2[j][i] = arry1[i][j];
	return 0;
}

int main()
{
	int arry1[11][11], arry2[11][11], i, j;
	
	for (i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &arry1[i][j]);
	Transpose(arry1, arry2,M);                      //转置
	
	for (i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%d\t", arry2[i][j]);
		printf("\n");
	}
	return 0;
}
#include <stdio.h>


//int isprime(int x)
//{
//    if (x <= 1) {
//        return 0;
//    }
//    for (int i = 2; i * i <= x; i++) {
//        if (x % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//#include <stdio.h>
//int main()
//{
//    int m, n;
//    
//    scanf("%d%d", &m, &n);
//
//    int count = 0;
//    for (int i = m; i <= n; i++) {
//        if (isprime(i)) {
//            printf("%d ", i);
//            count++;
//            if (count % 10 == 0) {
//                printf("\n");
//            }
//        }
//    }
//    printf("\n");
//
//    return 0;
//}
