#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
//void print_arr(int(*a)[31], int n);
//int main()
//{
//	int n,a[31][31],count=0;
//	a[0][0] = 1;
//	scanf("%d", &n);
//
//	for (int i = 1; i < n; i++)
//	{
//		a[i][0] = 1;
//		for (int j = 1; j <i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//
//		}
//		a[i][i] = a[0][0];
//	}
//	print_arr(a, n);
//	return 0;
//}
//void print_arr(int (*a)[31], int n)
//{
//	printf("%d", a[0][0]);
//	
//	for (int i = 1; i < n; i++)
//	{
//		printf("\n");
//		printf("%d", a[i][0]);
//		for (int j = 1; j <=i; j++)
//			printf(" %d", a[i][j]);
//	}
//}
//#include <stdio.h>
//#include <string.h>
//void a(char a[])
//{
//	char a[201];
//	int count[26] = { 0 }, min = 0, ab = 0;
//	fgets(a, 201, stdin);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			count[a[i]-'A']++;
//			
//		}
//		if (a[i] >= 'a' && a[i] <= 'z')
//		{
//			count[a[i] - 'a']++;
//		}
//
//	}
//	min = count[0];
//	for (int i = 0; i < 26; i++)
//	{
//		if (min < count[i])
//		{
//			min = count[i];
//			ab = i;
//		}
//	}
//	printf("%c",ab + 'a');
//	/*return 0;*/
//}
void abc(char a[]);
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char a[1001];
		int count = 0;
		scanf("%s", &a);
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
				count++;
		}
		printf("%d\n", count);
		
	}
	
	return 0;
}
//void abc(char a[])
//{
//	//char a[201];
//	int count[26] = { 0 }, min = 0, ab = 0;
//	fgets(a, 201, stdin);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			count[a[i] - 'A']++;
//
//		}
//		if (a[i] >= 'a' && a[i] <= 'z')
//		{
//			count[a[i] - 'a']++;
//		}
//
//	}
//	min = count[0];
//	for (int i = 0; i < 26; i++)
//	{
//		if (min < count[i])
//		{
//			min = count[i];
//			ab = i;
//		}
//	}
//	printf("%d", ab);
//	/*return 0;*/
//}