#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。*/
//注意：scanf("%c",&ch)格式读字符时，所有字符都是有效输入，如回车符、空格符等，
//原因是第一行输入最后的回车会被下一个scanf语句中的第一个%c读给a; 
//在scanf的格式控制串中加入空白符的作用是跳过0个或多个空白符（包括空格、回车或制表符）。
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