#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
//void Hanoi(int n, char pos1, char pos2, char pos3);
//void move(char pos1,char pos2);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%.0lf\n", pow(2, n) - 1);
//	Hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
////pos1 ��ʼλ��
//// pos2 ��תλ��
//// pos3 Ŀ��λ��
//void move(int n,char pos1,char pos2)
//{
//	printf("%d form %c to %c\n",n,pos1,pos2 );
//}
//void Hanoi(int n,char pos1,char pos2,char pos3)
//{
//	int count = 0;
//
//	if (n == 1)
//	{
//		
//		move(1,pos1, pos3);//�ݹ����������ֱ�Ӵ���ʼλ����Ŀ��λ��
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(n,pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//
//}
//int fj(int n);
//int prime(int n);	//�����ж�
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while(prime(n)!=1)
//	{
//		n = fj(n);
//	}
//	printf("%d", n);
//	return 0;
//}
//int fj(int n)
//{
//	int i = 2;
//	while (i<=n)
//	{
//		if (prime(i) == 1 && n % i == 0)
//		{
//			printf("%d ", i);
//			return n / i;
//		}
//		else 
//		i++;
//		
//	}
//}
//int prime(int n)	//�����ж�
//{
//
//	int flag = 1;	//��������ֵΪ1
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (n == 1)
//		flag = 0;	//����������0
//	if (n == 2 || n == 3)
//	{
//		flag = 1;
//	}
//	return flag;
//}