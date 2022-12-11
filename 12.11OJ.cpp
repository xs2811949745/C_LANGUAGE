#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//int main()
//{
//	char a[5];
//	scanf("%s", a);
//	printf("|       _ ____   _____  _____  |\n");
//	printf("|      | |  _ \\ / ____|/ ____| |\n");
//	printf("|      | | |_) | |  __| |  __  |\n");
//	printf("|  _   | |  _ <| | |_ | | |_ | |\n");
//	printf("| | |__| | |_) | |__| | |__| | |\n");
//	printf("|  \\____/|____/ \\_____|\\_____| |\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n, m;char a[100][100];
//	scanf("%d%d", &n, &m);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%c", &a[i][j]);
//		}
//		getchar();
//		
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%c", a[i][j]);
//			printf("%c", a[i][j]);
//
//		
//		
//		}
//		printf("\n");
//		for (int j = 0; j < m ; j++)
//		{
//			printf("%c", a[i][j]);
//			printf("%c", a[i][j]);
//			
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int T, count_a;
//	scanf("%d", &T);
//	int t[1441][4], a[1441][1441];
//	for (int i = 0; i < T; i++)
//	{
//		int flag = 0;
//		scanf("%d%d%d%d", &t[i][3], &t[i][2], &t[i][1], &t[i][0]);
//		scanf("%d", &count_a);
//		for (int j = 0; j < count_a; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//		for (int k = 0; k < count_a; k++)
//		{
//			if ((t[i][3] <= a[i][k] && a[i][k] <= t[i][2]) || (t[i][1] <= a[i][k] && a[i][k] <= t[i][0]))
//			{
//				printf("Y\n");
//				flag = 1;
//				break;
//			}
//		}
//			if (flag == 0)
//				printf("N\n");
//	}
//	
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	getchar();
//	for (int i = 0; i < T; i++)
//	{
//	char s[200000];
//	scanf("%s", s);
//	for (int j = 0; j <=strlen(s); j++)
//	{
//		if ((s[j] >= 'a' && s[j] <= 'z') && (s[j + 1] >= 'A' && s[j + 1] <= 'Z'))
//		{
//			s[j] = s[j] - 32;
//		}
//		else if ((s[j] >= 'A' && s[j] <= 'Z') && (s[j + 1] >= 'A' && s[j + 1] <= 'Z'))
//		{
//			;
//		}
//		else if ((s[j] >= 'A' && s[j] <= 'Z') && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
//		{
//			s[j] = s[j] + 32;
//		}
//		
//	}
//	if (s[strlen(s)-1] >= 'a' && s[strlen(s)-1] <= 'z')
//		s[strlen(s)-1] = s[strlen(s)-1] - 32;
//	printf("%s\n",s);
//		
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int mgcd(int a, int b);
//
//int main()
//{
//	int T,x;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		scanf("%d", &x);
//		for (int j = 2; j < 1e15; j++)
//		{
//            int flag = mgcd(x + j, j);
//            if (flag == 1)
//            {
//                printf("%d %d\n", j, x + j);
//                break;
//            }
//		}
//	}
//	return 0;
//}
////返回值为1则互质
//int mgcd(int a, int b)
//{
//    int t;
//    if (a < b)
//    {
//        t = a; a = b; b = t;
//    }
//    while (a % b)
//    {
//        t = b;
//        b = a % b;
//        a = t;
//    }
//    return b;
//}
//#include <stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int a[100000],b[1000][2];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int j = 0; j < m; j++)
//	{
//		scanf("%d%d", &b[j][0], &b[j][1]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[j] == b[i][0])
//				a[j] = b[i][1];
//		}
//
//	}
//
//	printf("%d", a[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf(" %d", a[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int a[100000], b[1000][2];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int j = 0; j <m; j++)
//	{
//		scanf("%d%d", &b[j][0], &b[j][1]);
//	}
//	int tem_0, tem_1;
//	for (int i = 0; i < m - 1; i++)
//	{
//		for (int j = 0; j < m - 1 - i;j++)
//		{
//			if (b[j][1] >=b[j + 1][1])
//			{
//				tem_1 = b[j][1];
//				b[j][1] = b[j + 1][1];
//				b[j+1][1] = tem_1;
//				tem_0 = b[j][0];
//				b[j][0] = b[j + 1][0];
//				b[j+1][0] = tem_0;
//			}
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[j] == b[i][0])
//				a[j] = b[i][1];
//		}
//
//	}
//
//	printf("%d", a[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf(" %d", a[i]);
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int a[] = { 21,12,16,8,21 };
	int i = 0, j = 0, k = 0, s;
	for (s = 0; s < 5; s++) printf("给定数组:%d  ", a[s]);
	int m[] = { 21,12 }, n[] = { 16,8,21 }, b[5]={0};
	while ((i < 2) && (j < 3)) {
		if (m[i] > n[j]) {
			b[k] = n[j]; j++;
		}
		else {
			b[k] = m[i]; i++;
		}
		k++;
	}
	while (i <= 2) {
		b[k] = m[i]; i++; k++;
	}
	while (j <= 3) {
		b[k] = n[j]; j++; k++;
	}
	for (s = 0; s < 5; s++)printf("排序数组:%d ", b[s]);
}
