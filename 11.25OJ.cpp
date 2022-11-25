#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <assert.h>
#define N 10000
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[N], * p, c;
//	int k, num[26] = { 0 };
//	int i = 0;
//	FILE* fpRead = fopen("C:\\Users\\admin\\Documents\\Tencent Files\\2811949745\\FileRecv\\pt.txt", "r");
//	
//		fgets(s, 10000, fpRead);
//
//		for (int i = 0; i < strlen(s); i++)
//		{
//			fgets(s, 10000, fpRead)
//
//			_strlwr(s);
//			p = s;
//			while (*p != '\0')
//			{
//				if (*p >= 'a' && *p <= 'z')
//				{
//					k = *p - 'a';
//					num[k]++;
//				}
//				p++;
//			}
//
//		}
//			printf("统计结果:\n");
//		for (k = 0; k < 26; k++)
//			if (num[k] != 0)
//			{
//				c = 'a' + k;
//				printf("%c:%d\n", c, num[k]);
//			}
//		
//	#define N 10000
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[N], * p, c;
//	int k, num[26] = { 0 };
//	int i = 0;
//	FILE* fpRead = fopen("C:\\Users\\admin\\Documents\\Tencent Files\\2811949745\\FileRecv\\pt.txt", "r");
//
//	fgets(s, 10000, fpRead);
//
//	for (int i = 0; i < strlen(s); i++)
//	{
//		fgets(s, 10000, fpRead);
//
//		_strlwr(s);
//		p = s;
//		while (*p != '\0')
//		{
//			if (*p >= 'a' && *p <= 'z')
//			{
//				k = *p - 'a';
//				num[k]++;
//			}
//			p++;
//		}
//
//	}
//	printf("统计结果:\n");
//	for (k = 0; k < 26; k++)
//		if (num[k] != 0)
//		{
//			c = 'a' + k;
//			printf("%c:%d\n", c, num[k]);
//		}
//
//
//	return 0;
//}

//	return 0;
//}
//int main()
//{
//	int m, n;
//	scanf("%d%d", &n, &m);
//	int a=1, b=0;
//	int sum;
//	for (int i = 0; i < n; i++)
//	{
//		if (b < m)
//		{
//			b++;
//			
//		}
//		if (b == m)
//		{
//			if (a == m)
//			{
//
//			}
//			a++;
//			b = 0;
//		}
//		sum = a + b;
//	}
//	printf("%d", sum);
//	return 0;
//}
#include<stdio.h>
int main() {
    int n, m, s, i, sum = 0;
    int a[20];
    scanf("%d%d", &n, &m);
    s = n;
    for (i = 1; s != 0; i++) {
        a[i] = s % m;
        s = s / m;
        sum++;
    }
    for (i = sum; i > 0; i--) {
        printf("%d", a[i]);
    }
    return 0;
}

