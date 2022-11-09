#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	printf("%d",a);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{1,2,3,4},{0,0,0,0} };
//	int a = 0;
//	scanf("%d", &a);
//	for (; a < 9; a++)
//	{
//		printf("%d", a);
//}
//int main()
//{
//	char arr[]={}
//	return 0;g
//}
//
//int main()
//{
//	int i = 0;
//	
//	char ch = 0;
//	char arr[]={0};
//	for (i=0; ch != '@'; i++)
//	{
//		
//		ch = getchar();
//		if (ch =='@')
//		{
//			break;
//		}
//		arr[i] = ch;
//			if (ch >= 'A' && ch <'Z')
//			{
//				ch = ch + 33;
//				
//			}
//		
//			
//			 else if (ch >= 'a' && ch <= 'y')
//			{
//				ch = ch + 1;
//				
//			}
//			else if (ch == 'Z')
//			{
//				ch = 'a';
//			}
//			else if (ch == 'z')
//			{
//				ch = 'a';
//			}
//			arr[i] = ch;
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0,b=0;
//	
//	char ch='0';
//	for (a = 0; ch != '\n'; a++)
//	{
//		if (ch == '\n')
//		{
//			break;
//		}
//		ch = getchar();
//		
//		
//		if (ch >= '0' && ch <= '9')
//		{
//			b++;
//		}
//	}
//	
//	printf("%d", b);
//	
//	return 0;
//}
//int main()
//{
//	/*char arr1[] = { 1,2,3,4 };
//	int sz = sizeof(arr1) / sizeof(arr1[1]);
//	printf("%d", sz);*/
//
//	return 0;
//}
//void  bubble_sort(int arr[], int sz);
//int main()		//冒泡排序
//{
//	int arr[] = {11,9,7,5,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	 bubble_sort(arr,sz);
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int max = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = max;
//
//			}
//		}
//
//	}
//	
//}
//int main()
//{
//	int d = 0, b = 0, c = 0;
//
//	char a='0';
//	for (; a != '\n';)
//	{
//		a = getchar();
//		if (a == '\n')
//		{
//			break;
//		}
//		if (a >= '0' && a <= '9')
//		{
//			d++;
//		}
//		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
//		{
//			b++;
//		}
//		else if(!(a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')&& !(a >= '0' && a <= '9'))
//		{
//			c++;
//		}
//	}
//	printf("letter:%d\n", b);
//	printf("digit:%d\n", d);
//	printf("other:%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 0,n=0, b = 0, c = 0, d = 0;
//	scanf("%d", &a);
//	for (n = 0; a > n * 10 + 4;)
//	{
//		n++;
//	}
//		
//		 if (a >= 400)
//		{
//			c = 99;
//		}
//		 
//	
//	printf("%d", a - n - c );
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	int num;
//	int count = 0;//记录含有4的个数
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++)
//	{
//		if (i % 10 == 4 || (i / 10) % 10 == 4 || (i / 100) % 10 == 4)
//			count++;
//
//	}
//
//	printf("%d", num - count);
//
//}
///*————————————————
///*版权声明：本文为CSDN博主「@大愚@」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/qq_43728862/article/details/94583061*/
//int main()
//{
//
//	return 0;
//}
#include<stdio.h>
#include<math.h>

//int main()
//{
//	double a, b, c, s, x1, x2;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	s = sqrt(b * b - 4 * a * c);
//	 x1 = (-b + s) / (2 * a);
//	  x2 = (-b - s) / (2 * a);
//	printf("%7.2f %7.2f\n", x1,x2);
//	return 0;
//}
//int main()
//{
//	float a,b;
//	scanf("%f%f", &a, &b);
//	printf("%f", a + b);
//	return 0;
//}
//double fact(int a);
//int main()
//{
//	/*int arr[] = { 1,2,3,4,5, };
//	int sz = sizeof(arr) ;
//	printf("%d", sz);*/
//	/*double a, b, c, d;
//	scanf("%lf%lf", &a, &b);
//	printf("%.4f", a / b);*/
//	/*double a = 5 % 2;
//	printf("%lf", a);*/
//	
//	return 0;
//}
//double fact(int a)
//{
//	int i;
//	for ( i = 1; i < a; i++)
//	{
//		i*=i
//	}
//}
//int main()
//{
//	/*int arr[2][3] = { {1,2,3},{4,5,6} };*/
//
//	return 0;
//}
# include <stdio.h>
//int main(void)
//{
//    int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//    printf("%d\n", sizeof(a[0]));
//    return 0;
//}
//int main()
//{
//	/*int arr[][3] = { 1,2,3,4,5,6, };*/
//	/*int gcd(int a, int b)
//	{
//		int(a % b == 0)
//		{
//			return b;
//			else
//			return gcd(b, a % b);
//		}*/
//
//	}
//	return 0;
//}
//int common(int a, int b);
//int main()
//{
//	int a, b, c=0, d, e, f;
//	scanf("%d%d", &a, &b);
//	
//	printf("%d", c);
//	return 0;
//}
////int common(int a,int b)
////{
////		
////	if (a % 2 == 1)
//	{
//		a = (a-1) / 2;
//	}
//	else if(a%2==0) {
//		a = a / 2;
//	}
//	if (b % 2 == 1)
//	{
//		b = (b-1) / 2;
//	}
//	else if(b%2==0) {
//		b = b / 2;
//	}
//	if (a != b)
//	{
//		common(a, b);
//
//	}
//	else
//	
//		
//	
//	return a;
//}
#include <stdio.h>
//void main()
//{
//	float e;
//	int y, t;
//	for (t = 1, e = 1, y = 1; y <= 10; y++)
//	{
//		t = t * y;
//		e = e + 1.0 / t;
//	}
//	printf("%f", e);
//}
int main001()
{
	/*printf("%c\n", 'op');
	printf("%s\n", "qwertyuiopasdfghjklz");
	printf("%s\n", "qwertyuiopasdfghjklzxujikuguguiog");
	puts("");*/
	return 0;
}
//#include<stdio.h>
//#define N 100
//int main()
//{
//	int i, n, sum = 0;
//	int a[N] = { 0 };
//	for (i = 0; i < 100; i++)
//	{
//		scanf("%d", &n);
//		if (n < 0)
//		{
//			sum += n;
//		}
//		a[i] = n;
//		
//	}
//	printf("%d ", sum);
//	for (int j = 0; j < 100; j++)
//	{
//		if (a[j] < 0)
//
//			printf("%d ", a[j]);
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int i;
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	/*则下列语句的输出结果是()。*/
//	for (i = 0; i < 3; i++)
//		printf("%d ", a[i][2 - i]);
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	
//	
//	
//	for (int i = 9; i>=0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int a,i=0,sum=0,x;
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &x);
//		if (x < 0)
//			break;
//		sum += x;
//		i++;
//		
//	}
//	printf("%d", sum);
//
//		
//	return 0;
//}
//int main()
//{
//	char str1[100], str2[100], str3[100];
//	char str[300];
//	char max[101], min[101];
//	scanf("%s", str1);
//	scanf("%s", str2);
//	scanf("%s", str3);
//	if (strlen(str1) > strlen(str2))
//	{
//		for (int i = 0; i < 101; i++)
//		{
//			max[i] = str1[i];
//			min[i] = str2[i];
//		}
//	}
//	else {
//		for (int i = 0; i < 101; i++)
//		{
//			max[i] = str2[i];
//			min[i] = str1[i];
//		}
//	}
//	if (strlen(max) > strlen(str3)&& strlen(str3)< strlen(min))
//	{
//		for (int i = 0; i < 101; i++)
//		min[i] = str3[i];
//	}
//	else if (strlen(max) < strlen(str3))
//	{
//		for (int i = 0; i < 101; i++)
//		max[i] = str3[i];
//		
//	}
//	fputs(max, stdout);
//	fputs(min, stdout);
//	return 0;
//}
//int search(int a[10], int j, int i);
//int main()
//{
//	int n;
//	int j;
//	int x; int a[10];
//	int z=-1;
//	int b;
//	int c;
//	
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &c);
//		a[i] = c;
//	}
//	scanf("%d", &j);
//	for (int i = 0; i < n; i++)
//	{	
//		 b = search(a, j, i);
//		 if (b != -1)
//		 {
//			 x = i;
//			 z = b;
//		 }
//			
//		
//	}
//	if (z != -1)
//	{
//		printf("%d", x);
//
//	}
//	if (z == -1)
//	{
//		printf("Not found");
//	}
//	return 0;
//}
//int search(int a[10], int j, int i)
//{
//	int b=-1;
//	
//		if (a[i] == j)
//		{
//			b = i;
//			
//		}
//	
//	return b;
//}
//void del(int array[], int n, int m);
//int main()
//{
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int m, n;
//	int arr1[10];
//	int c;
//	n = sizeof(array) / sizeof(array[0]);
//	scanf("%d", &m);
//	
//		 del(array, n, m);
//		
//	
//	
//	return 0;
//}
//void del(int array[], int n, int m)
//{
//	int c, i=0;
//	int a[10];
//	for (i = 0; i < 10; i++)
//	{
//		if (array[i] != m)
//		{
//			a[i] = array[i];
//		}
//		if (array[i] == m)
//		{
//			continue;
//		}
//		printf("%d ", a[i]);
//	}
//		
//	
//}
//int main()
//{
	/*int a = 10;
	int* pa = &a;
	
	printf("%p\n", pa);*/
	
//	int a[10] = { 0 };
//	int* p = a;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + 4*i) = 1;
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int a,n, max = 0;
//	scanf("%d", &a);
//	for (int i = 0;pow(2,i)<=a; i++)
//	{
//		if (a % (int)pow(2, i) == 0)
//			max = i;
//	}
//	printf("%d", max);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, i=0, n=0, count=0;
//	scanf("%d%d", &a, &b);
//	for (i = a; i >= a && i <= b; i++)
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (i ==n)
//		{
//			count++;
//		}
//		
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int* pa = NULL;
//	///*int* pa = NULL;*/
//	//pa =&a;
//	//*pa = 20;
//	//printf("%p", *pa);
//	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &a[0];
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	return 0;
//}
//int main()
//{
//	int a;
//	a = 4*11 * 4514 + 4*114 * 514 + 1145 * 14*4;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int c_m = 0, c_t = 0, c_l = 0, c_f = 0;
//	char arr[10000] = {};
//	scanf("%s", arr);
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		if (arr[i] == 'm'|| arr[i]=='M')
//			c_m++;
//		if (arr[i] == 't'||arr[i] == 'T')
//			c_t++;
//			if (arr[i] == 'l' || arr[i] == 'L')
//				c_l++;
//				if (arr[i] == 'f' || arr[i] == 'F')
//					c_f++;
//
//	}
//	int minn=c_m;
//	int temp;
//	int min[4] = { c_m ,c_t,c_l,c_f };
//	for (int i = 0; i < 4; i++)
//	{
//		if (minn <= min[i])
//		{
//			temp = minn;
//			minn = min[i];
//			min[i] = temp;
//		}
//	}
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		for (; i < c_m; i++)
//		{
//			printf("%c", 'm');
//			break;
//		}
//		for (; i < c_t; i++)
//		{
//			printf("%c", 't');
//			break;
//		}
//		for (; i < c_l; i++)
//		{
//			printf("%c", 'l');
//			break;
//		}
//		for (; i < c_f; i++)
//		{
//			printf("%c", 'f');
//			break;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	char arr[10000] = {};
//	fgets(arr,10000,stdin);
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		if (arr[i] == ' ')
//		
//			printf(" ");
//
//			if (arr[i] == 'A')
//			{
//				printf("01");
//			}
//			if (arr[i] == 'B')
//			{
//				printf("1000");
//			}if (arr[i] == 'C')
//			{
//				printf("1010");
//			}if (arr[i] == 'D')
//			{
//				printf("100");
//			}if (arr[i] == 'E')
//			{
//				printf("0");
//			}if (arr[i] == 'F')
//			{
//				printf("0010");
//			}if (arr[i] == 'G')
//			{
//				printf("110");
//			}if (arr[i] == 'H')
//			{
//				printf("0000");
//			}if (arr[i] == 'I')
//			{
//				printf("00");
//			}if (arr[i] == 'J')
//			{
//				printf("0111");
//			}if (arr[i] == 'K')
//			{
//				printf("101");
//			}if (arr[i] == 'L')
//			{
//				printf("0100");
//			}if (arr[i] == 'M')
//			{
//				printf("11");
//			}if (arr[i] == 'N')
//			{
//				printf("10");
//			}if (arr[i] == 'O')
//			{
//				printf("111");
//			}if (arr[i] == 'P')
//			{
//				printf("0110");
//			}if (arr[i] == 'Q')
//			{
//				printf("1101");
//			}if (arr[i] == 'R')
//			{
//				printf("010");
//			}if (arr[i] == 'S')
//			{
//				printf("000");
//			}if (arr[i] == 'T')
//			{
//				printf("1");
//			}if (arr[i] == 'U')
//			{
//				printf("001");
//			}if (arr[i] == 'V')
//			{
//				printf("0001");
//			}if (arr[i] == 'W')
//			{
//				printf("011");
//			}if (arr[i] == 'X')
//			{
//				printf("1001");
//			}if (arr[i] == 'Y')
//			{
//				printf("1011");
//			}if (arr[i] == 'Z')
//			{
//				printf("1100");
//			}
//		
//
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c;
//	int arr[10000] = {};
//	double sum = 0;
//	int z = b;
//	for(int i=0;i<b;i++)
//	{
//		scanf("%d", &c);
//		arr[i] = c;
//	}
//	if (a < z)
//	{
//		int max = arr[0];
//		int temp;
//		for (int i = 1; i < b; i++)
//		{
//			for (int j = 0; j < b - i; j++)
//				if (arr[j] >= arr[j + 1])
//				{
//					temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//		}
//		
//		for (int i = 0; i < a; i++)
//		{
//			sum += arr[b - 1];
//			b--;
//		}
//		
//	}
//	if (a > z)
//	{
//		for (int i = 0; i < b; i++)
//		{
//			sum += arr[i];
//		}
//	}
//	printf("%.0lf", sum);
//	return 0;
//}
//int main()
//{
//	int m, n,a,b;
//	scanf("%d%d", &n, &m);
//	scanf("%d%d", &a, &b);
//	int s1 = sqrt((a - n / 2) * (a - n / 2) + b * b);
//	int s2 = sqrt((a - n) * (a - n) + (b - m / 2) * (b - m / 2));
//	int s3 = sqrt((a - n / 2) * (a - n / 2) + (b - m) * (b - m));
//	int s4 = sqrt(a * a + (b - m / 2) * (b - m / 2));
//	if (n >=m)
//	{
//		if (s4 <= s3 && s4 <= s2 && s4 <= s1)
//		{
//			printf("(%d, %d)", 0, m / 2);
//		}
//		if (s2 <= s1 && s2 <= s4 && s2 <=s3)
//		{
//			printf("(%d, %d)", n, m);
//
//		}
//		if (s3 <= s4 && s3 <= s2 && s3 <= s1)
//		{
//			printf("(%d, %d)", n / 2, m);
//		}
//		if (s1 <= s2 && s1 <= s3 && s1 <= s4)
//		{
//			printf("(%d, %d)", n / 2, 0);
//		}
//	}
//	if (m > n)
//	{
//		if (s4 <= s3 && s4 <= s2 && s4 <= s1)
//		{
//			printf("(%d, %d)", 0, n / 2);
//		}
//		if (s2 <= s1 && s2 <= s4 && s2 <= s3)
//		{
//			printf("(%d, %d)", m, n);
//
//		}
//		if (s3 <=s4 && s3 <=s2 && s3 <= s1)
//		{
//			printf("(%d, %d)", m / 2, n);
//		}
//		if (s1 <= s2 && s1 <= s3 && s1 <= s4)
//		{
//			printf("(%d, %d)", m / 2, 0);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float m, n, a, b,temp;
//	scanf("%f%f", &n, &m);
//	if (n > m)
//	{
//		n = n;
//		m = m;
//	}
//	if (n < m)
//	{
//		temp = n;
//		n = m;
//		m = temp;
//	}
//	scanf("%f%f", &a, &b);
//	float s1 = sqrt((a - n / 2.0) * (a - n / 2.0) + b * b);
//	float s2 = sqrt((a - n) * (a - n) + (b - m / 2.0) * (b - m / 2.0));
//	float s3 = sqrt((a - n / 2.0) * (a - n / 2.0) + (b - m) * (b - m));
//	float s4 = sqrt(a * a + (b - m / 2.0) * (b - m / 2.0));
//	
//		if (s4 < s3 && s4 < s2 && s4 < s1)
//		{
//			printf("(%.0f, %.0f)", 0, m / 2*1.0);
//		}
//		if (s2 < s1 && s2 <s4 && s2 < s3)
//		{
//			printf("(%.0f, %.0f)", n*1.0, m*1.0);
//
//		}
//		if (s3 < s4 && s3 < s2 && s3 < s1)
//		{
//			printf("(%.0f, %.0f)", n / 2.0, m);
//		}
//		if (s1 <s2 && s1 < s3 && s1 < s4)
//		{
//			printf("(%.0f, %.0f)", n / 2.0, 0);
//		}
//	
//	
//	return 0; 
//}
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//
//double caculateDistance(double a, double b, double c, double d)
//{
//	return (a - c) * (a - c) + (b - d) * (b - d);
//}

//int main()
//{
//	double n, m, a, b;
//	scanf("%lf%lf%lf%lf", &n, &m, &a, &b);
//
//	double x[4] = { n / 2, n, n / 2, 0 }, y[4] = { 0, m / 2, m, m / 2 };
//	double min = caculateDistance(a, b, x[0], y[0]);
//	int flag = 0;
//	for (int i = 1; i < 4; i++)
//	{
//		double temp = caculateDistance(a, b, x[i], y[i]);
//		if (min > temp)
//		{
//			min = temp;
//			flag = i;
//		}
//	}
//
//	printf("(%.0f, %.0f)", x[flag], y[flag]);
//
//	return 0;
//}
// typedef struct stu
//{
//	int age;
//	char name[12];
//	char tele[15];
//	char sex[7];
//
//}stu;
//int main()
//{
//	 stu s1 = {10,"zhangsan","132456798","ahgiah"};
//
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.tele);
//	printf("%s\n", s1.sex);
//	return 0;
//}
typedef struct stu
{
	int age;
		char name[12];
		char tele[15];
		char sex[7];
}stu;
void printf2(stu*p);
int main()
{
	stu s = { 100,"asgu","asghjk","asghj" };
	printf2(&s);
	return 0;
}
void printf2(stu* p)
{
	printf("%d\n", p->age);
	printf("%s\n", p->name);
	printf("%s\n", p->tele);
	printf("%s\n", p->sex);
}