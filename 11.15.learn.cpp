#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//typedef struct stu
//{
//	char name[21];
//	int age;
//	char sex;
//	int score[3];
//	char addr[51];
// };
//int main()
//{
//	printf("%d\n", sizeof(stu));
//	return 0;
//}
//void remove_space(char arr[100],int sz);
//int main()
//{
//	char str[100];
//	fgets(str, 100,stdin);
//	int sz = strlen(str);
//	remove_space(str,sz);
//	fputs(str,stdout);
//	return 0;
//}
//void remove_space(char arr[100],int sz)
//{
//	int i = 0;
//	char* before=&arr[0], * behind=&arr[0];
//	while (i<sz)
//	{
//		if (*behind == ' ')
//		{
//			*behind++;
//			
//		}
//		
//		else if (*behind!= ' ')
//		{
//			*before = *behind;
//			*before++;
//			*behind++;
//			
//		}
//		i++;
//	}
//	*before = 0;
//		
//
//}