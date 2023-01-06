#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <stdio.h>
//double fac(void);
//int main()
//{
//	printf("1+1/1!+1/2!+...+1/10!=");
//	double e = fac();
//	printf("%.7lf", e+1);
//	return 0;
//}
//double fac(void)
//{
//	double e=0,fact=1;
//	for (int i = 1; i <= 10; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			fact *= j;
//		}
//		e += 1 / fact;
//		fact = 1;
//	}
//	return e;
//}
//#include <stdio.h>
//int main()
//{
//	int a[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int n,b[11],count=0;
//	scanf("%d", &n);
//	n %= 11;
//	for (int i = n ; i <11; i++)
//	{
//		
//		b[count] = a[i];
//		count++;
//	}
//	for (int i = 0 ; i <n; i++)
//	{
//		b[count] = a[i];
//		count++;
//	}
//	printf("%d", b[0]);
//	for (int i = 1; i <11; i++)
//		printf(" %d", b[i]);
//	return 0;
//
//}
//#include <stdio.h>
//int digit(int n, int k);
//int main()
//{
//	int x = 52761;
//	printf("%d\n", digit(x, 4));
//	return 0;
//}
//int digit(int n, int k)
//{
//	while (n && k > 1)
//	{
//		n /= 10; k--;
//	}
//	return n % 10;
//}
//#include <stdio.h>
//int main()
//{
//	int n=1, * p = &n;
//	printf("%d", *&n);
//	return 0;
//}
//#include <stdio.h> 
//void move(int a[],int n);
//int main()
//{
//	int a[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int n;
//	scanf("%d", &n);
//	n %= 11;
//	move(a, n);
//	printf("%d", a[0]);
//	for (int i = 1; i < 11; i++)
//		printf(" %d", a[i]);
//	return 0;
//}
//void move(int a[], int n)
//{
//	int tem1, tem2, tem3;
//	for (int i = 0; i < n; i++)
//	{
//		tem1 = a[0];
//		for (int j = 0; j < 10; j++)
//		{
//			a[j] = a[j + 1];
//		}
//		a[10] = tem1;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2,c = 3, d = 4,m = 2,n = 2;
//	(m = a > b) && (n = c > b);
//	printf("%d", n);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[30] = "he is a a student";
//	strcpy(a + 8, "teacher");
//	printf("%s", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int* p, max;
//	for (p = a; p < a + 10; p++)
//		scanf("%d", p);
//	for (p=a,max=*p;p<a+10;p++)
//		if (*p>max)
//			max = *p;
//	printf("%d", max);
//	return 0;
//}
//#include <stdio.h>
//double aver(int a[], int n, int* p1, int* p2);
//int main()
//{
//	double aver(int a[], int n, int* p1, int* p2);
//	int c1, c2, x[] = { 0,12,33,-9,-5,27,80,0,54,-63 };
//	double av;
//	av = aver(x, 10, &c1, &c2);
//	printf("%d %d %f", c1, c2, av);
//}
//double aver(int a[], int n, int* p1, int* p2)
//{
//	int i;
//	double sum = 0;
//	*p1 = *p2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum + a[i];
//		if (a[i] > 0)
//			(*p1)++;
//		else
//			(*p2)++;
//	}
//	return sum / n;
//}
//#include <stdio.h>
//int main()
//{
//	char ms, gender;
//	int age;
//	printf("\t纤细信息：");
//		printf("\n\t婚姻情况（y/n)");
//	fflush(stdin);
//	scanf("%c", &ms);
//	fflush();
//	printf("\n\t性别情况（y/n)");
//	scanf("%c", &gender);
//	printf("\n\t年龄情况（y/n)");
//	scanf("%d", &age);
//	if(ms=='y')
//		printf("\n\t可以");
//	else if(gender=='M'||(age>=30))
//		printf("\n\t可以");
//	else
//	printf("\n\t不可以");
//	return 0;
//}