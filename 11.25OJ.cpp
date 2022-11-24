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
#include<stdio.h>
#include<string.h>
int main()
{
	char s[N], * p, c;
	int k, num[26] = { 0 };
	int i = 0;
	FILE* fpRead = fopen("C:\\Users\\admin\\Documents\\Tencent Files\\2811949745\\FileRecv\\pt.txt", "r");

	fgets(s, 10000, fpRead);

	for (int i = 0; i < strlen(s); i++)
	{
		fgets(s, 10000, fpRead);

		_strlwr(s);
		p = s;
		while (*p != '\0')
		{
			if (*p >= 'a' && *p <= 'z')
			{
				k = *p - 'a';
				num[k]++;
			}
			p++;
		}

	}
	printf("统计结果:\n");
	for (k = 0; k < 26; k++)
		if (num[k] != 0)
		{
			c = 'a' + k;
			printf("%c:%d\n", c, num[k]);
		}


	return 0;
}

//	return 0;
//}
