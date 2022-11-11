#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*1.输入一个数，判断奇偶性。
要求：输入一个整数，判断该数是奇数还是偶数。如果该数是奇数就输出“odd”，偶数就输出“even”（输出不含双引号）*/
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("even");
//	if (a % 2 == 1 || a % 2 == -1)
//		printf("odd");
//	return 0;
//}
// 2.编写程序，实现闰年判断。
//要求：输入为一个整数，表示一个年份。输出：如果是闰年，输出"Yes"，否则输出"No"。输出单独占一行。
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
/*3.【分支专题】编写程序，使用分支结构判定三角形。给你三个正整数，判断用这三个整数做边长是否能构成一个三角形。
要求：输入为三个正整数，中间有一个空格隔开；输出：如果能构成三角形，输出"Yes"，否则输出"No"。（提示：在一个三角形中，任意两边之和大于第三边。）*/
#include <stdio.h>
//int main()
//{
//	int a, b, c, temp1,temp2;
//	int max, min,maj;
//	scanf("%d%d%d", &a, &b, &c);
//	 max=a;  maj=b;
//	if (a >= b)
//	{
//		a = max; b = maj;
//	}
//	if (a < b)
//	{
//		temp1 = a;
//		max = b;
//		maj = temp1;
//	}
//	if (c >= max)
//	{
//		temp2 = max;
//		max = c;
//		min = maj;
//		maj = temp2;
//	}
//	if (c < max && c < maj)
//	{
//		min = c;
//	}if (c < max && c > maj)
//	{
//		temp1 = maj;
//		maj = c;
//		min = temp1;
//	}
//	if (maj + min > max)
//	{
//		printf("Yes");
//	}
//	 if(maj + min <= max)
//	{
//		printf("No");
//	}
//	
//	return 0;
//}
/*4.【分支专题】编写程序，使用分支结构判断员工薪水。某公司规定，销售人员工资由基本工资和销售提成两部分组成，其中基本工资是1500元/月，销售提成规则如下：
销售额小于等于10000元时，按照5%提成；
销售额大于10000元但小于等于50000元时，超出10000部分按照3%提成；
销售额大于50000元时，超出50000部分按照2%提成。
编写程序，根据销售额计算员工收入。
要求：输入一个整数表示销售额。输出员工的薪水，保留2位小数。*/
//#include <stdio.h>
//int main()
//{
//	float a, b, c, d, e;
//	scanf("%f", &a);		//销售额
//	if (a <= 10000)
//	{
//		b = a * 0.05;
//	}
//	if (a > 10000 && a <= 50000)
//	{
//		b = 10000 * 0.05 + (a - 10000) * 0.03;
//
//	}
//	if (a > 50000)
//	{
//		b = 10000 * 0.05 + 40000 * 0.03 + (b - 50000) * 0.02;
//	}
//	printf("%.2f", 1500 + b);
//	return 0;
//}
/*下面的程序实现了：从键盘输入n，然后计算并输出1+2+3+……+n的和*/
//int main()
//{
//	int  i , n , sum ;
//	scanf ( "%d" , &n ) ;
//	sum = 0;
//	for ( i = 1 ; i<=n ; i++ )
//			sum = sum + i ;
//	printf ( "%d\n" , sum ) ;
//	return 0;
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	float a, b=1, c, d,sum=0;
//	scanf("%f", &a);
//	for (int i = 0; i < a; i++)
//	{
//		sum += 1 / b;
//		b++;
//	}
//	printf("%.2f", sum);
//	return 0;
//}
/*编程实现：从键盘输入n，然后计算并输出1-1/3+1/5-1/7+1/9……前n项的和。要求结果保留2位小数。 要求：练习使用单步调试，并截取调试界面。*/
//#include <stdio.h>
//int main()
//{
//	float n, sum=0, a=1;
//	scanf("%f", &n);
//	for (int i = 0; i < n; i++)
//	{
//		sum += 1 / a;
//		if (a > 0)
//			a = -(a + 2);
//		else if (a < 0)
//			a = -a + 2;
//		
//	}
//	printf("%.2f", sum);
//	return 0;
//}
/*编写程序，输入一个正整数n，输出1-2/3+3/5-4/7+5/9-6/11+...的前n项和，保留3位小数。 要求：练习使用单步调试，并截取调试界面。*/
#include <stdio.h>
//int main()
//{
//	float a, b=1, c=1, d, e, f, sum=0;
//	scanf("%f", &a);
//	for (int i = 0; i < a; i++)
//	{
//		sum += c / b;
//		if (b > 0)
//			b = -(b + 2);
//		else if (b < 0)
//			b = -b + 2;
//		c++;
//	}
//	printf("%.3f", sum);
//	return 0;
//}
/*6.编写程序，实现素数判定。
输入一个正整数n(n<=1000)，判断n是否是素数，若n是素数，输出”Yes”，否则输出”No”。 */
//#include <stdio.h>
//int main()
//{
//	int a,flag=1;
//	scanf("%d", &a);
//	for (int i = 2; i <=sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			printf("No");
//			flag = 0;
//			break;
//		}
//	}
//	
//	 if(flag==1)
//	printf("Yes");
//	return 0;
//}
/*7.【循环专题】输入两个正整数m和n，编写程序计算其最大公约数和最小公倍数。*/
#include<stdio.h>

//int main() {
//	int a, b;
//	int tem;
//	scanf("%d%d", &a, &b);
//	int m = a * b;
//	while (b != 0)
//	{
//		tem = a % b;
//		a = b;
//		b = tem;		
//	}
//	m = m / a;
//	
//	printf("%d %d", a,m);
//	return 0;
//}
#include<stdio.h>
int main()
{

	return 0;
}