#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include<stdio.h>
//int num[1000010], sum[1000010];
//void func(int x);//��ÿ������Լ��
//int max_(int x, int y);//�������ֵ
//
//int main()
//{
//    int n, maxn = 0, ans = 1, w = 0, res = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        int x;
//        scanf("%d", &x);
//        func(x);
//        maxn = max_(x, maxn);//maxn��¼�����Ҳ��������Լ��
//    }
//    for (int i = maxn; i >= 1 && ans <= n;)//i��maxn��ʼ������ÿ������������ֵ���
//    {
//        if (num[i] >= ans)
//        {
//            sum[i]++;//sum��¼��ӦԼ��(����ֵ)�ĳ��ִ���
//            if (sum[i] > res)
//                w = i, res = sum[i];//res��¼���������ֵ��w��¼��Ӧ������ֵ
//            ans++;//ansΪ����Ҫѡ��ı�ʯ�������num[i]�ɹ�����ɵı�ʯ����һ
//        }
//        else i--;//������Լ���޷�����Ҫ�����������Լ��
//    }
//    printf("%d", w);
//    return 0;
//}
//void func(int x)//��ÿ������Լ��
//{
//    for (int i = 1; i <= x / i; i++)
//        if (x % i == 0)
//        {
//            num[i]++;//���ÿ��Լ���ĳ��ִ���
//            if (x / i != i)num[x / i]++;
//        }
//}
//int max_(int x, int y)//�������ֵ
//{
//    if(x > y)
//        return x;
//    else return y;
//}