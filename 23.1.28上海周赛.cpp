#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
//typedef struct friends
//{
//	char name[100000][15];
//	char answer[100000][20];
//
//};
//int main()
//{
//	int n;
//	friends fri;
//	scanf("%d", &n);
//	int count = 0,flag=0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s%s", fri.name[i], fri.answer[i]);
//		if (strcmp(fri.answer[i], "No") == 0)
//			count++;
//	}
//	for (int i = n; i >0; i--)
//	{
//		if (strcmp(fri.answer[i], "No") == 0)
//		{
//			
//
//
//			for (int j = 0; j < n; j++)
//			{
//				if (strcmp(fri.name[i], fri.answer[j]) == 0)
//				{
//					count--;
//					break;
//				}
//
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//int fab(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ret = fab(n);
//    printf("%d", ret);
//}
//int fab(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    else
//        return fab(n - 1) + fab(n - 2);
//}

//char* solve(char* str) 
//{
//    // write code here
//    scanf("%s", *str);
//    char* p = str + strlen(str);
//    while (p != str)
//    {
//        printf("%c", *p);
//        p--;
//    }
//    return 0;
//}
int main()
{
    char str[1000];
    scanf("%s", &str);
    char str1[1000]=solve(str)
}
char* solve(char* str) {
    // write code here
    char str1[1000];
    char* p = str + strlen(str);
    for (int i = 0; i < strlen(str); i++)
    {
        str1[i] = *p;
        p--;
    }
    printf("%s", str1);
    return str1;
}