#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C.user.h"
//int main()
//{/*
	/*int a = 0;
	int* p = &a;*/
	 /*char ch1[] = "hello";
	 char ch2[] = "world";*/
	 //const char* p2 = ch1;		
	//	����ָ��  ���޸�ָ���ַ �����޸�ָ���ַ����
	 //p2 = ch2;
	//*p = 10;
	/*printf("%d", *p);*/
	 /*char const* p = ch1;*/			
	 //ָ�볣�� ���޸�ָ���ַ���� �����޸�ָ���ַ
	/* *(p+2) = 'm';
	 printf("%s", ch1);*/

	/*int a = 10, b = 5;*/
	//ָ�볣��
	/*int* const p1 = &a;*///ָ�볣��		
	//ָ���ǳ�����ָ��ָ���ֵ����
		//��ô��Ϊһ�����ֲ���
		/** p1 = 9;*///�����ɹ�
  //	p = &b;��������

		/*const int* p2 = &a;*/ //����ָ��
		//ָ���ֵ�̶�����ַ���̶�
		//��ô��Ϊһ�����ֲ���
	//	* p2 = 9;    ��������
	//p2 = &b;//�����ɹ�
	//��ǰ�����������Ϊ�̶�ֵ��		 
//	const int* const p3 = &a;//ָ������ָ�볣��
	//char ch1[] = "hello";
	//char ch2[] = "world";
	//char* const p1 = ch1;	//	ָ�볣��
	//const char* p2 = ch2;		//	����ָ��
	//*(p1 + 2) = 'm';
	//p2 = ch1;
	//printf("%s ", ch1);
	//printf("%s", p2);
	//const char* arr[] = { "hello","world","bbb" };
#include <stdio.h>
#include <string.h>


//int main()
//	{
//		const char haystack[20] = "RUNOOB";
//		const char needle[10] = "NOOB";
//		char* ret;
//
//		ret = strstr(haystack, needle);
//
//		printf("���ַ����ǣ� %s\n", ret);
//
//		return 0;
//	}
//	return 0;
//int main()
	/*{/*
		 char haystack[20] = "RUNOOB";
		 char needle[10] = "NOOB";
		char* ret;

		ret = strstr(haystack, needle);

		printf("���ַ����ǣ� %s\n", ret);*/
		/*char arr1[] = {1,2,3,4,5,6};
		char102 arr2[] = { 1,2,3 };
		char* ret;
		ret = strstr(arr1, arr2);*/
		//int count = 0,a=0;
		/*int sz = strlen(ch);
		char* p1 = &ch[sz];
		char* p=strstr(ch,"abcd");
		p += 4;
		ch[0] = &ch[sz]-p;
		printf("%d", count);*/
		/*char* p =NULL;
		int a=0, b, count=0;
		for (int i = 0; i < strlen(ch); i++)
		{

			if (*p != NULL)
			{
				count++;
				a += 4;
			}
			if (*p =='\0')
			{
				break;
			}

		}
		printf("%d", count);*/

		//char ch[] = "11abcd111122abcd3322abcd3333322qqq";
		//int count = 0;
		//int a = 0;
		//char* p = strstr(ch, "abcd");
		//while (p != NULL)
		//{
		//	a++;
		//	p = strstr(ch, "abcd")+a;
		//}
		//	return 0;
		//}
//#include <stdio.h>
//#include <string.h>
//
//		int find_sub_string(const char* str1, const char* str2)
//		{
//
//			if (!strstr(str1, str2)) return 0;
//
//			int num = 0;
//			while (*str1)
//			{
//				if (strstr(str1, str2) != NULL)
//					num++;      //�ж�Ϊ���ַ�����������һ
//				else    break;
//				str1 = strstr(str1, str2) + 1;
//				/*strstr�������ַ�����ʼλ�ã�Ȼ��λ�ú���һλ�������ж�*/
//				for (*str1; *str1 != '\0'; str1++)
//				{
//					if (*str1 == *str2)
//						break;
//				}
//			}
//			return num;
//		}
//
//		
//int main()
//{
//	char str1[100];
//	char str2[100];
//	scanf("%s", &str1);
//	scanf("%s", &str2);
//	int sum=find_same_string_num(str1, str2);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	char ch1[] = { "12345abcd6789abc,./abcd" };
//	char ch2[] = { "abcd" };
//	char* p1 = ch1;
//	char* p2 = strstr(ch1,ch2) + 1;
//	return 0;
//}