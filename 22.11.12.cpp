#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*8.��ѭ��ר�⡿��д����ʵ�ַֽ������ӡ���һ��������n��2<=n<=2000���ֽ������������磬����90�����2 3 3 5�����Ҫ�󣺴�С�������n�����������ӣ�ÿ������֮���һ��*/
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
/*9.������ר�⡿��д������������������m��n��100<=m<=n<1000����ͳ�Ʋ����m��n֮���ˮ�ɻ�����Ҫ���Զ��岢���ú���int  flower��int  num���ж����Ƿ�Ϊˮ�ɻ����������ʽҪ�󣺴�С����������һ���������֮����һ���ո��������m��n֮����ˮ�ɻ����������Ϊ��No����*/
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
/*10.������ר�⡿��д�����ٴ�����������������������m��n�����m��n֮�������������m<=n���Ҷ���int��Χ�ڣ������Ҫ�����ռһ�С����m��n֮�������������ÿ��������һ���ո񡣲������ݱ�֤m��n֮��һ����������
Ҫ������Զ��嶨��һ��prime()������һ��main()������prime()�����ж�һ������n�Ƿ������������๦����main()������ʵ�֡�*/
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
/*11.������ר�⡿��д����ʵ��Ԫ��ͳ�ơ�����һ���ַ������Ȳ�����1000���Իس�����������ͳ������Ԫ����ĸ�ĸ��������Ҫ�����һ����������ʾԪ����ĸ�������������ռһ�С�
Ҫ��ʹ���Զ��庯��vowel�����������ж��Ƿ�ΪԪ�������๦�ܾ���main����������ʵ�֡������Զ��庯��Ϊ��

/*����ʾ����Ҫע��˵������A���͡�a������Ԫ��*/
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