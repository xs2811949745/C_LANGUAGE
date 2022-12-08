#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include<stdio.h>
//int num[1000010], sum[1000010];
//void func(int x);//求每个数的约数
//int max_(int x, int y);//返回最大值
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
//        maxn = max_(x, maxn);//maxn记录最大数也就是最大的约数
//    }
//    for (int i = maxn; i >= 1 && ans <= n;)//i从maxn开始以满足每种项链的美丽值最大
//    {
//        if (num[i] >= ans)
//        {
//            sum[i]++;//sum记录对应约数(美丽值)的出现次数
//            if (sum[i] > res)
//                w = i, res = sum[i];//res记录次数的最大值，w记录对应的美丽值
//            ans++;//ans为你需要选择的宝石数，如果num[i]成功则组成的宝石数加一
//        }
//        else i--;//如果这个约数无法满足要求则遍历其他约数
//    }
//    printf("%d", w);
//    return 0;
//}
//void func(int x)//求每个数的约数
//{
//    for (int i = 1; i <= x / i; i++)
//        if (x % i == 0)
//        {
//            num[i]++;//标记每种约数的出现次数
//            if (x / i != i)num[x / i]++;
//        }
//}
//int max_(int x, int y)//返回最大值
//{
//    if(x > y)
//        return x;
//    else return y;
//}