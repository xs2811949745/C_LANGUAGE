#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*8.【循环专题】编写程序，实现分解质因子。将一个正整数n（2<=n<=2000）分解质因数，例如，输入90，输出2 3 3 5。输出要求：从小到大输出n的所有质因子，每两个数之间空一格。*/
//int main()
//{
//	int a, b,count=0;
//	scanf("%d", &a);
//	int yz[2000] = {};
//	int i;
//	for ( i = 2; i <=a; )
//	{
//			
//		if (a % i == 0)
//		{
//			yz[count] = i;
//			a = a / i;
//			count++;
//		i = 2;
//		continue;
//		}
//		i++;
//	}
//	for (int j = 0; j < count-1; j++)
//	{
//		printf("%d ", yz[j]);
//	}
//	printf("%d", yz[count-1]);
//	return 0;
//}
/*9.【函数专题】编写程序，输入两个正整数m和n（100<=m<=n<1000），统计并输出m和n之间的水仙花数。要求，自定义并调用函数int  flower（int  num）判断其是否为水仙花数。输出格式要求：从小到大排列在一行内输出，之间用一个空格隔开；当m和n之间无水仙花数，则输出为“No”。*/
#include <stdio.h>
//int flower(int sum);
//int main()
//{
//	int  n, m;
//	int b, count = 0;
//	int arr[100] = {};
//	scanf("%d%d", &m, &n);
//	for (; m < n; m++)
//	{
//		b = flower(m);
//		if (b == 1)
//		{
//			arr[count] = m;
//			count++;
//		}
//	}
//	if (arr[0] != '\0')
//	{
//		for (int i = 0; i < count - 1; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("%d", arr[count - 1]);
//	}
//	else {
//		printf("No");
//	}
//	return 0;
//}
//int flower(int sum)
//{
//	int flag = 0;
//	int a = sum / 100;
//	int b = sum / 10 % 10;
//	int c = sum % 100  % 10;
//	if (sum == a * a * a + b * b * b + c * c * c)
//	{
//		flag = 1;
//	}
//	
//		return flag;
//	
//}
/*10.【函数专题】编写程序，再次求素数。输入两个正整数m和n，输出m和n之间的所有素数（m<=n，且都在int范围内）。输出要求：输出占一行。输出m和n之间的所有素数，每个数后有一个空格。测试数据保证m到n之间一定有素数。
要求程序自定义定义一个prime()函数和一个main()函数，prime()函数判断一个整数n是否是素数，其余功能在main()函数中实现。*/
#include <stdio.h>
#include <math.h>
//int prime(int m);
//int main()
//{
//	int a, b;
//	int c=0;
//	int arr[100] = {};
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	for (; a < b; a++)
//	{
//		c = prime(a);
//		if (c == 1)
//		{
//			arr[count] = a;
//			count++;
//				
//		}
//	}
//	if (arr[0] != '\0')
//	{
//		for (int i = 0; i < count - 1; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("%d", arr[count - 1]);
//	}
//	return 0;
//}
//int prime(int m)
//{
//	int flag = 1;
//	if (m == 2 || m == 3)
//	{
//		flag=1;
//	}
//	for (int i = 2; i <=sqrt(m); i++)
//	{
//		if (m % i == 0)
//		{
//			flag = 0;
//		}
//	}
//	return flag;
//}
/*11.【函数专题】编写程序，实现元音统计。输入一串字符（长度不超过1000，以回车符结束），统计其中元音字母的个数。输出要求：输出一个整数，表示元音字母个数。输出单独占一行。
要求：使用自定义函数vowel（）仅用来判断是否为元音，其余功能均在main（）函数中实现。其中自定义函数为：

/*给的示例需要注意说明：’A’和’a’都是元音*/
#include <stdio.h>
#include <math.h>
#include <string.h>
//int vowle(char ch);
//int main()
//{
//	int flag;
//	int count = 0;
//	char str[1000] = {};
//	fgets(str, 1000, stdin);
//	for (int i = 0; i < strlen(str); i++)
//	{
//		flag = vowle(str[i]);
//		if (flag == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int vowle(char ch)
//{
//	int flag = 0;
//	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//	{
//		flag = 1;
//	}
//	return flag;
//}
#include <stdio.h>
#include <math.h>
#include <string.h>
//void outputstar(int n);
//int main()
//{
//	int m;
//	int i;
//	scanf("%d", &m);	
//	
//		outputstar(m);
//	
//	return 0;
//}
//void outputstar(int n)
//{
//	int b;
//	int j = 12;
//	for (int i = 1; i <=n; i++)
//	{
//		b = j;
//		for (; b > 0;b-- )
//		{
//			printf(" ");
//		}
//			for (int n = 0; n <2 * i - 1; n++)
//			{
//				printf("*  ");
//			}
//			printf("\n");
//			j = j - 3;
//}
//}