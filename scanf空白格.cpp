#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���*/
//ע�⣺scanf("%c",&ch)��ʽ���ַ�ʱ�������ַ�������Ч���룬��س������ո���ȣ�
//ԭ���ǵ�һ���������Ļس��ᱻ��һ��scanf����еĵ�һ��%c����a; 
//��scanf�ĸ�ʽ���ƴ��м���հ׷�������������0�������հ׷��������ո񡢻س����Ʊ������
//	int main()
//{
//	char a, b, c;
//	char max, min, tem;
//	int i = 0;
//	char arr[999];
//	while (scanf("%c%c%c\n", &a, &b, &c)!=EOF)
//	{
//		max = (a > b ? a : b);
//			min = (a < b ? a:b);
//		max = (max > c ? max : c);
//		min = (min < c ? min : c);
//		if (max == a && min == b||max==b&&min==a)
//			tem = c;
//		if (max == c && min == b||max==b&&min==c)
//			tem = a;
//		if (max == a && min == c||max==c&&min==a)
//			tem = b;
//		arr[i] = min;
//		arr[i + 1] = tem;
//		arr[i + 2] = max;
//		i = i + 3;
//	}
//	for (int j = 0; j < i-3; j=j+3)
//	{
//	printf("%c %c %c\n", arr[j], arr[j + 1], arr[j + 2]);
//
//	}
//	printf("%c %c %c", arr[i-3], arr[i - 2], arr[i-1]);
//	return 0;
// }