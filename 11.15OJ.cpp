#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
/*��A^B�������λ����ʾ��������1<=A,B<=1000��
����
n������ʵ����ÿ��ʵ����������������A,B*/
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int x, n;
//	int  product = 1;
//	int arr[100] = {};
//	int i;
//	for ( i = 0; i < a; i++)
//	{
//		scanf("%d%d", &x, &n);
//		for (int j = 0; j < n; j++)
//		{
//			product *= x;
//			if (product > 10000)
//				product = product % 1000;
//			
//		}
//		if (product > 1000)
//			product %= 1000;
//
//		arr[i] = product;
//		product = 1;
//	}
//	for (int j = 0; j < i - 1; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//	printf("%d", arr[i-1]);
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e, f;
//	scanf("%d", &a);
//	int arr[100];
//	int i = 0;
//	while (a != 0)
//	{
//		f = a / 2;
//		c = pow(2, f);
//		if (a % 2 == 1)
//			c = c + 1;
//		arr[i] = c;
//		i++;
//		scanf("%d", &a);
//	}
//	for (int j = 0; j < i - 1; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//	printf("%d", arr[i - 1]);
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, a, b, c;
    while (scanf("%d", &n), n != 0)//n����0ʱ��ʾ�������
    {
        a = 1; b = 2;
        if (n == 1)
            printf("1\n");
        else if (n == 2)//ǰ����Ϊ������������⿼��
            printf("2\n");
        else
        {
            for (i = 3; i <= n; i++)//�ӵ����ʼ��ÿ��Ϊǰ����ĺ�
            {
                c = a + b;//ǰ����ĺ�
                a = b;//���¸���a��b��ֵ
                b = c;
            }
            printf("%d\n", c);
        }
    }
    return 0;
}

