#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*1.����һ�������ж���ż�ԡ�
Ҫ������һ���������жϸ�������������ż������������������������odd����ż���������even�����������˫���ţ�*/
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
// 2.��д����ʵ�������жϡ�
//Ҫ������Ϊһ����������ʾһ����ݡ��������������꣬���"Yes"���������"No"���������ռһ�С�
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
/*3.����֧ר�⡿��д����ʹ�÷�֧�ṹ�ж������Ρ������������������ж����������������߳��Ƿ��ܹ���һ�������Ρ�
Ҫ������Ϊ�������������м���һ���ո���������������ܹ��������Σ����"Yes"���������"No"������ʾ����һ���������У���������֮�ʹ��ڵ����ߡ���*/
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
/*4.����֧ר�⡿��д����ʹ�÷�֧�ṹ�ж�Ա��нˮ��ĳ��˾�涨��������Ա�����ɻ������ʺ����������������ɣ����л���������1500Ԫ/�£�������ɹ������£�
���۶�С�ڵ���10000Ԫʱ������5%��ɣ�
���۶����10000Ԫ��С�ڵ���50000Ԫʱ������10000���ְ���3%��ɣ�
���۶����50000Ԫʱ������50000���ְ���2%��ɡ�
��д���򣬸������۶����Ա�����롣
Ҫ������һ��������ʾ���۶���Ա����нˮ������2λС����*/
//#include <stdio.h>
//int main()
//{
//	float a, b, c, d, e;
//	scanf("%f", &a);		//���۶�
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
/*����ĳ���ʵ���ˣ��Ӽ�������n��Ȼ����㲢���1+2+3+����+n�ĺ�*/
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
/*���ʵ�֣��Ӽ�������n��Ȼ����㲢���1-1/3+1/5-1/7+1/9����ǰn��ĺ͡�Ҫ��������2λС���� Ҫ����ϰʹ�õ������ԣ�����ȡ���Խ��档*/
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
/*��д��������һ��������n�����1-2/3+3/5-4/7+5/9-6/11+...��ǰn��ͣ�����3λС���� Ҫ����ϰʹ�õ������ԣ�����ȡ���Խ��档*/
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
/*6.��д����ʵ�������ж���
����һ��������n(n<=1000)���ж�n�Ƿ�����������n�������������Yes�������������No���� */
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
/*7.��ѭ��ר�⡿��������������m��n����д������������Լ������С��������*/
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