#define _CRT_SECURE_NO_WARNINGS1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
////int main()
////{
////	
////	return 0;
////}
//1.该程序完成功能：用于判断a, b, c能否构成三角形，若能，输出"YES"， 否则，输出"NO"。当给a, b, c输入三角形的三条边长时，确定a, b, c能构成 三角形的条件是任何两个边的和大于第三边。
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}
//2.该程序完成功能：输入一个整数n，判断该数是否能同时被3和7整除，若能整除，输出"YES."，否则输出"NO"。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n % 3 == 0 && n % 7 == 0)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}
//3.该程序完成功能：用于判断year是否为闰年，若是，输出"YES"，否则输出"NO"。闰年判断条件为：year 是闰年，即 year 能被 4 整除但不能被 100 整除，或 year 能被 400 整除。
//#include <stdio.h>
//int main()
//{
//    int year;
//    scanf("%d", &year);
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}
//4.某城市出租车收费标准如下：起步里程是3公里，起步费是10元；超出起步里程后每公里1.5元。编写程序，输入行驶里程（公里），计算并输出乘客应支付的车费（元）。
//#include <stdio.h>
//int main()
//{
//    double n;
//    scanf("%lf", &n);
//    if (n <= 3)
//    {
//        printf("%d\n", 10);
//    }
//    else
//    {
//        printf("%.2f\n", 1.0 * (10 + (n - 3) * 1.5));
//    }
//    return 0;
//}
//5.某城市月用水量收费标准如下：每月使用吨数小于等于15吨的，每吨收费2.5元；每月使用吨数超过15吨的，采用分段计费：超过部分每吨3元。编写程序，输入使用吨数，计算并输出用户水费（元）。
//#include <stdio.h>
//int main()
//{
//    double n, x;
//    scanf("%lf", &n);
//    if (n <= 15)
//    {
//        x = n * 2.5;
//    }
//    else
//    {
//        x = 15 * 2.5 + (n - 15) * 3.0;
//    }
//    printf("%.2f\n", x);
//    return 0;
//}
//6.求解简单表达式。输入一个形式如："操作数  运算符   操作数"的四则运算表达式，输出运算结果，要求使用switch 语句（if语句）编写。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double s1, s2;
//    char op;
//    scanf("%lf %c %lf", &s1, &op, &s2);
//    switch (op)
//    {
//    case '+':printf("%.2f\n", s1 + s2); break;
//    case '-':printf("%.2f\n", s1 - s2); break;
//    case '*':printf("%.2f\n", s1 * s2); break;
//    case '/':
//        if (fabs(s2) < pow(10, -10))
//            printf("Wrong input!\n");
//        else
//            printf("%.2f", s1 / s2);
//        break;
//    default:printf("Wrong input!\n");
//    }
//    return 0;
//}
//7.输入一个字符，要求判断是否为小写英文字母，如果是，转换成大写英文字母并输出。
//#include<stdio.h>
//int main()
//{
//    char ch;
//    ch = getchar();
//    if (ch >= 'a' && ch <= 'z')
//        ch -= 32;
//    printf("%c\n", ch);
//    return 0;
//}
//8.输入三个整数，要求对他们排序，并输出排序结果。（要求采用分支结构实现排序）
//#include<stdio.h>
//int main()
//{
//    int a, b, c, t;
//    scanf("%d %d %d", &a, &b, &c);
//    if (b > a)
//    {
//        t = b;
//        b = a;
//        a = t;
//    }
//    if (c > a)
//    {
//        t = c;
//        c = a;
//        a = t;
//    }
//    if (c > b)
//    {
//        t = c;
//        c = b;
//        b = t;
//    }
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}
//9.输入三个整数，输出其中最小的数。
//#include<stdio.h>
//int main()
//{
//    int x, y, z, min;
//
//    scanf("%d %d %d", &x, &y, &z);
//    min = x;
//
//    if (y < max)
//    {
//        min = y;
//    }
//    if (z < min)
//    {
//        min = z;
//    }
//
//    printf("%d\n", min);
//    return 0;
//}
//10.从键盘输入一个正整数，求它的各位数字之和。例如，输入12534，输出和为15；输入99，输出和为18。
//#include<stdio.h>
//int main()
//{
//    int n, sum = 0, t;
//    scanf("%d", &n);
//    while (n != 0)
//    {
//        t = n % 10;
//        n = n / 10;
//        sum = sum + t;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//11.从键盘输入一个正整数，求它是几位的数。例如，输入12534，输出为5，输入99；输出为2。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n, l;
//    scanf("%d", &n);
//    l = (int)log10(n) + 1;
//    printf("%d\n", l);
//    return 0;
//}
//12.从键盘输入一个正整数n，再输入0~9中的任意一个数x，统计x在n中出现的次数。例如，输入n为12334，输入x为3，统计结果为x出现两次。
//#include<stdio.h>
//int main()
//{
//    int n, t, x, c = 0;
//    scanf("%d %d", &n, &x);
//    while (n != 0)
//    {
//        t = n % 10;
//        n = n / 10;
//        if (t == x)
//            c++;
//    }
//    printf("%d\n", c);
//    return 0;
//}
//13.编写程序，输入一个正整数n，输出2 / 1 + 3 / 2 + 5 / 3 + 8 / 5 + ? ? ? 的前n项之和，保留2位小数（该序列从第二项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子）。
//#include<stdio.h>
//int main()
//{
//    int i = 1, n, a = 2, b = 1, t;
//    double sum = 0.0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + a / b;
//        t = b;
//        b = a + t;
//        a = t;
//    }
//    printf("%.2f\n", sum);
//    return 0;
//}
//14.编写程序，输入一个正整数n，输出1 + 1 / 2 + 2 / 3 + 3 / 4 + 4 / 5 + ? ? ? 的前n项之和。
//#include<stdio.h>
//int main()
//{
//    int n;
//    double sum = 1.0, i;
//    scanf("%d", &n);
//    for (i = 2; i <= n; i++)
//    {
//        sum = sum + (i - 1) / i;
//    }
//    printf("%.2f\n", sum);
//    return 0;
//}
//15.韩信点兵：在点兵的时候，为了知道有多少兵，同时又能保证军事机密，便让士兵排队报数：按1至5报数，记下最末一个士兵报的数为1；再按从1至6报数，记下最末一个士兵报的数为5；再按从1至7报数，记下最末一个士兵报的数为4；最后按从1至11报数，最末一个士兵报的数为10；你知道韩信至少有多少兵？
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    while (i != 0)
//    {
//        i++;
//        if (i % 6 == 5 && i % 7 == 4 && i % 11 == 10 && i % 5 == 1)
//        {
//            printf("%d\n", i);
//            break;
//        }
//    }
//    return 0;
//}
//16.鸡兔同笼：笼子中有若干只鸡和若干只兔子，现在只知道笼子中总共有35个头和94只脚，请你编写一个程序计算并输出笼子中分别有多少只鸡和多少只兔。
//#include <stdio.h>
//int main()
//{
//    int x;
//    for (x = 0; x <= 35; x++)
//    {
//        if (x * 2 + (35 - x) * 4 == 94)
//            printf("%d %d\n", x, 35 - x);
//    }
//    return 0;
//}
//17.猴子吃桃问题：猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又吃了一个。第二天又将剩下的桃子吃掉一半，又多吃了一个。以后每天都吃前一天剩下的一半零一个。到第10天在想吃的时候就剩一个桃子了, 求第一天共摘下来多少个桃子？
//#include<stdio.h>
//int main()
//{
//    int m = 1, i;
//    for (i = 1; i < 10; i++)
//    {
//        m = 2 * (m + 1);
//    }
//    printf("%d", m);
//    return 0;
//}
//18.用一张一元票换1分2分和5分的硬币（至少各一枚），问有哪几种换法？各几枚？
//#include<stdio.h>
//int main()
//{
//    int i, j, z;
//    for (i = 1; i <= 93; i++)
//    {
//        for (j = 1; j <= 47; j++)
//        {
//            for (z = 1; z < 20; z++)
//            {
//                if (i + 2 * j + 5 * z == 100)
//                    printf("%d %d %d\n", i, j, z);
//            }
//        }
//    }
//
//    return 0;
//}
//19.用一张100元纸票换1元，2元和5元的纸票（至少各一张），问有哪几种换法？各几张？
//#include<stdio.h>
//int main()
//{
//    int i, j, z;
//    for (i = 1; i <= 93; i++)
//    {
//        for (j = 1; j <= 47; j++)
//        {
//            for (z = 1; z < 20; z++)
//            {
//                if (i + 2 * j + 5 * z == 100)
//                    printf("%d %d %d\n", i, j, z);
//            }
//        }
//    }
//
//    return 0;
//}
//20.一个球从100米高度自由落下，每次落地后反跳回原高度的一半，然后再落下再反弹。求它在第10次落地时，共经过多少米？第10次反弹多高？
//#include<stdio.h>
//int main(void)
//{
//    int n;
//    double sn = 100.0, hn = sn / 2;
//    for (n = 2; n < 11; n++)
//    {
//        sn = sn + 2 * hn;
//        hn = hn / 2;
//    }
//    printf("%.4f  %.4f\n", sn, hn);
//    return 0;
//}
//21.输入一个数，判定是否为"水仙花数"。（"水仙花数"是指各位数字的立方和等于其自身的数。
//#include<stdio.h>
//int main()
//{
//    int n, d0, d1, d2;
//    scanf("%d", &n);
//    d0 = n / 100;
//    d1 = (n % 100) / 10;
//    d2 = n % 10;
//    if ((d0 * d0 * d0) + (d1 * d1 * d1) + (d2 * d2 * d2) == n)
//    {
//        printf("yes\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}
//22.从键盘输入6个整数存到数组中，统计其中正数的个数、正数的和。
//#include<stdio.h>
//int main()
//{
//    int i, j = 0, a[6], sum = 0;
//    for (i = 0; i < 6; i++)
//    {
//        scanf("%d", &a[i]);
//        if (a[i] > 0)
//        {
//            j++;
//            sum = sum + i;
//        }
//    }
//    printf("%d %d\n", j, sum);
//    return 0;
//}
//23.从键盘输入6个整数存到数组中，输出其最小值和它所对应的的下标。
//#include<stdio.h>
//int main()
//{
//    int i, a[6], min, n, t;
//    scanf("%d", &a[0]);
//    min = a[0];
//    for (i = 1; i < 6; i++)
//    {
//        scanf("%d", &a[i]);
//        if (a[i] < min)
//        {
//            t = min;
//            min = a[i];
//            a[i] = t;
//            n = i;
//        }
//    }
//    printf("%d %d\n", min, n);
//    return 0;
//}
//24.从键盘输入6个学生的成绩到数组中，计算出平均成绩，并输出高于平均分的学生成绩。
//#include<stdio.h>
//int main()
//{
//    int i, a[6], sum = 0;
//    double x;
//    for (i = 0; i < 6; i++)
//    {
//        scanf("%d", &a[i]);
//        sum = sum + a[i];
//    }
//    x = sum / 6.0;
//    printf("%.2f ", x);
//    for (i = 0; i <= 6; i++)
//    {
//        if (a[i] > x)
//            printf("%d ", a[i]);
//    }
//    printf("\n");
//    return 0;
//}
//25.利用数组计算斐波那契数列的前10个数，即1, 1, 2, 3, 5, 8, ...，并按每行打印5个数的格式输出。
//#include<stdio.h>
//int main()
//{
//    int a[10], i, j = 0;
//    a[0] = a[1] = 1;
//    for (i = 2; i < 10; i++)
//    {
//        a[i] = a[i - 1] + a[i - 2];
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d", a[i]);
//        printf(" ");
//        j++;
//        if (j % 5 == 0)
//            printf("\n");
//    }
//    return 0;
//}
//26.从键盘输入6个整数存到数组a中，求出数组a中各相邻两个元素的和，并依次存放到数组b中然后输出。
//#include<stdio.h>
//int main()
//{
//    int a[6], i, b[6];
//    for (i = 0; i < 6; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        b[i] = a[i] + a[i + 1];
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", b[i]);
//    }
//    return 0;
//}
//27.将1, 2, 3, 4, 5, 6, 7, 8, 9存入数组，分别将每个数组元素扩大十倍，并按每行打印3个数的格式输出。
//#include<stdio.h>
//int main()
//{
//    int a[9], i, j = 0;
//    for (i = 0; i < 9; i++)
//    {
//        scanf("%d", &a[i]);
//        a[i] *= 10;
//    }
//    for (i = 0; i < 9; i++)
//    {
//        printf("%d", a[i]);
//        printf(" ");
//        j++;
//        if (j % 3 == 0)
//            printf("\n");
//    }
//    return 0;
//}
//28.将11, 20, 36, 48, 5, 6, 72, 48, 19存入数组，然后逆序存放，并输出。
//#include<stdio.h>
//int main()
//{
//    int a[9], i;
//    for (i = 0; i < 9; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (i = 8; i > 0; i--)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}
//29.程序功能：用户输入三个边长，求出三个边长组成的三角形的面积，要求使用main函数和用户自定义函数，其中，用户自定义函数接受main函数传递过来的三个参数，求面积并返回之。（面积公式area = 开方(s * (s - a) * (s - b) * (s - c)), 其中s = (a + b + c) / 2
//#include<stdio.h>
//#include<math.h>
//double area(double a, double b, double c);
//int main()
//{
//    double a, b, c, s;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    s = area(a, b, c);
//    printf("%.2f\n", s);
//    return 0;
//}
//double area(double a, double b, double c)
//{
//    double m, s;
//    m = (a + b + c) / 2;
//    s = sqrt(m * (m - a) * (m - b) * (m - c));
//    return s;
//}
//30.程序功能：用户输入两个整数，求出这两个数的立方和并输出，要求使用main函数和用户自定义函数，其中，用户自定义函数实现两个数的立方差并返回。
//#include<stdio.h>
//int x(int a, int b);
//int main()
//{
//    int a, b, s;
//    scanf("%d %d", &a, &b);
//    s = x(a, b);
//    printf("%d\n", s);
//    return 0;
//}
//int x(int a, int b)
//{
//    int s;
//    s = a * a * a + b * b * b;
//    return s;
//}
//31.程序功能：用户输入三个整数，求出这三个数的平均值并输出，要求使用main函数和用户自定义函数，其中，用户自定义函数实现求解三个数的平均值并返回。
//#include<stdio.h>
//int x(int a, int b, int c);
//int main()
//{
//    int a, b, c;
//    double s;
//    scanf("%d %d %d", &a, &b, &c);
//    s = x(a, b, c);
//    printf("%.2f\n", s);
//    return 0;
//}
//int x(int a, int b, int c)
//{
//    double s;
//    s = (a + b + c) / 3.0;
//    return s;
//}
//32.程序功能：计算分段函数f(x)的值并输出，当x > 0时，f(x) = 1 + x; 当x = 0时，f(x) = 2x + 4; 当x < 0时，f(x) = x * x;  要求使用main函数和用户自定义函数sign(x)实现该分段函数。
//#include<stdio.h>
//    double sign(double a);
//int main()
//{
//
//    double a;
//    scanf("%lf", &a);
//    printf("%.2f\n", sign(a));
//    return 0;
//}
//double sign(double a)
//{
//    double s;
//    if (a == 0)
//        s = 2 * a + 4;
//    else if (a > 0)
//        s = a + 1;
//    else
//        s = a * a;
//    return s;
//}
//33.程序功能：用户输入两个整数，求出这两个整数之间的偶数的和；要求使用main函数和用户自定义函数，其中，自定义函数的功能：接收main函数传递过来的参数，计算并返回给main函数。
//#include<stdio.h>
//int s(int a, int b);
//int main()
//{
//
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", s(a, b));
//    return 0;
//}
//int s(int a, int b)
//{
//    int sum = 0, i;
//    for (i = a; i <= b; i++)
//    {
//        if (i % 2 == 0)
//            sum = sum + i;
//    }
//    return sum;
//}34.程序功能：用户输入三个整数，求出这三个整数之间最大值并输出；要求使用main函数和用户自定义函数，其中，自定义函数的功能：接收main函数传递过来的参数，计算出最大值并返回给main函数。
//#include<stdio.h>
//int s(int a, int b);
//int main()
//{
//
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%d\n", s(s(a, b), c));
//    return 0;
//}
//int s(int a, int b)
//{
//    if (a > b)
//        return a;
//    else
//        return b;
//}
//35.程序功能：用户输入一个整数，求出这个整数中含有6的个数并输出，要求使用main函数和用户自定义函数，其中，自定义函数的功能：接收main函数传递过来的参数，统计出结果并返回给main函数。
//#include<stdio.h>
//int search_six(int num, int c);
//int main()
//{
//    int n, count = 0;
//    int c = 0;
//    scanf("%d", &n);
//    c = search_six(n, count);
//    printf("%d\n", c);
//    return 0;
//}
//int search_six(int num, int c)
//{
//    int i, temp;
//    for (i = 0;; i++)
//    {
//        temp = num % 10;
//        num = num / 10;
//        if (temp == 6)
//            c++;
//        if (num == 0)
//            break;
//    }
//    return c;
//}36.程序功能：用户输入长和宽两个数，求出长方形的面积，要求使用main函数和用户自定义函数，其中，用户自定义函数接受main函数传递过来的两个参数，求面积并返回之。
//#include <stdio.h>
//double s(double a, double b);
//int main()
//{
//    double a, b;
//    scanf("%lf %lf", &a, &b);
//    printf("%.2f\n", s(a, b));
//    return 0;
//}
//
//double s(double a, double b)
//{
//    double s;
//    s = a * b;
//    return s;
//}
//37.程序功能：计算个人所得税（工资在大于等于7000时，税为工资 * 10 % ，小于7000时，税为工资 * 5 % ）。编写一个程序，其功能为：在主函数中输入他的工资，用户自定义函数将求出实际可以得到的工资数并返回给主函数。
//#include <stdio.h>
//double s(double a);
//int main()
//{
//    double b;
//    scanf("%lf", &b);
//    printf("%.2f\n", s(b));
//    return 0;
//}
//
//double s(double b)
//{
//    double s;
//    if (b < 7000)
//        s = 0.95 * b;
//    else
//        s = 0.90 * b;
//    return s;
//}
//38.程序功能：用户输入一个整数n（这个数要求大于1），求出从1到n的总和，并输出结果；要求使用main函数和用户自定义函数，其中，自定义函数的功能：接收main函数传递过来的参数n，计算出结果并返回给main函数。
//#include <stdio.h>
//int sum(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", sum(n));
//    return 0;
//}
//
//int sum(int n)
//{
//    int s;
//    s = (n + 1) * n / 2;
//    return s;
//}
//39.程序功能：计算出租车费用（某城市很奇怪，打出租车15公里（包括）以下，按每公里2元计费，而大于15公里却按照每公里3元计费），小编写一个程序，其功能为：在主函数中输入打车公里数，用户自定义函数将求出应付给司机的租车费用，并返回给主函数。
//#include <stdio.h>
//double y(double n);
//int main()
//{
//    double n;
//    scanf("%lf", &n);
//    printf("%.2f\n", y(n));
//    return 0;
//}
//
//double y(double n)
//{
//    double s;
//    if (n > 15)
//        s = n * 3.0;
//    else
//        s = n * 2.0;
//    return s;
//}
//40.程序功能：用户输入一个整数x，求出x！（x的阶乘），并输出结果；要求使用main函数和用户自定义函数，其中，自定义函数的功能：接收main函数传递过来的参数x，计算出结果并返回给main函数。
//#include <stdio.h>
//int y(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", y(n));
//    return 0;
//}
//int y(int n)
//{
//    int i, s = 1;
//    for (i = 1; i <= n; i++)
//        s = s * i;
//    return s;
//}
//41.某小学生刚学会了华氏温度和摄氏温度的转换，他想写一个程序，主函数中接收华氏温度的输入，用户自定义函数实现求解对应的摄氏温度并返回给主函数。转换公式为：c = 5 / 9 * f - 5 / 9 * 32;
//#include <stdio.h>
//double change(double f);
//int main()
//{
//    double f, c;
//    scanf("%lf", &f);
//    c = change(f);
//    printf("%.2f\n", c);
//    return 0;
//}
//double change(double f)
//{
//    double s;
//    s = 5 * f / 9 - 5 * 32 / 9;
//    return s;
//}
//42.某国成绩是AB制（及格为A，不及格为B），编写一个程序，其功能为：在主函数中输入百分制的成绩，用户自定义函数change将百分制的成绩转换为A或者B，并返回给主函数。
//#include <stdio.h>
//double change(double f);
//int main()
//{
//    double f;
//    char c;
//    scanf("%lf", &f);
//    c = change(f);
//    printf("%c\n", c);
//    return 0;
//}
//double change(double f)
//{
//    char c;
//    if (f < 60)
//        c = 'B';
//    else
//        c = 'A';
//    return c;
//}
//43.小明去批发市场批发书包，商家说，如果10个以下，60元一个，10个以上（包括10个），可以优惠45元一个。编写一个程序：其功能为：在主函数中输入想购买书包的数量，用户自定函数count完成计算需要付款多少并返回给主函数。
//#include <stdio.h>
//int c(int f);
//int main()
//{
//    int f;
//    scanf("%d", &f);
//    printf("%d\n", c(f));
//    return 0;
//}
//int c(int f)
//{
//    int c;
//    if (f < 10)
//        c = 60 * f;
//    else
//        c = 45 * f;
//    return c;
//}
//44.程序功能：用户输入一个字符串，求出其中英文字母的个数并输出。
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    char ch;
//    while (ch = getchar(), ch != '\n')
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch <= 'Z' && ch >= 'A'))
//            i++;
//    }
//    printf("%d\n", i);
//    return 0;
//}
//45.程序功能：用户输入一个字符串，输出该串中的元音字母（A E I O U），没有则不输出。
//#include <stdio.h>
//int main()
//{
//    char ch;
//    while (ch = getchar(), ch != '\n')
//    {
//        if (ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U')
//            printf("%c ", ch);
//    }
//    printf("\n");
//    return 0;
//}
//46.程序功能：用户输入一个字符串，求出该字符串的长度。（不能使用系统定义的函数strlen）
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    char ch;
//    while (ch = getchar(), ch != '\n')
//    {
//        i++;
//    }
//    printf("%d\n", i);
//    return 0;
//}
//
//47.程序功能：用户输入一个字符串，求出该字符串中“X”字符的个数。
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    char ch;
//    while (ch = getchar(), ch != '\n')
//    {
//        if (ch == 'X')
//            i++;
//    }
//    printf("%d\n", i);
//    return 0;
//}
//48.程序功能：用户输入一个字符串，将该串中大写字母变为小写字母，小写字母不变，并输出结果。
//#include <stdio.h>
//int main()
//{
//    char ch;
//    while (ch = getchar(), ch != '\n')
//    {
//        if (ch >= 'A' && ch <= 'Z')
//        {
//            ch = ch + 32;
//            printf("%c", ch);
//        }
//        else
//            printf("%c", ch);
//
//    }
//    printf("\n");
//    return 0;
//}
//49.程序功能：用户输入一个字符串，输出该串中的元音字母的个数。（元音：A E I O U）
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    char ch;
//    while (ch = getchar(), ch != '\n')
//    {
//        if (ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//            i++;
//    }
//    printf("%d\n", i);
//    return 0;
//}
//
//50.程序功能：用户输入一个字符串，统计出该字符串中含有“O”或者“K”字符的个数。
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    char ch;
//    while (ch = getchar(), ch != '\n')
//    {
//        if (ch == 'O' || ch == 'k')
//            i++;
//    }
//    printf("%d\n", i);
//    return 0;
//}
//51.程序功能：定义结构类型来表示二维平面坐标中的一个点，编写程序，用户输入两个点，计算并输出这两个点连线中点的坐标。
//#include <stdio.h>
//typedef struct
//{
//    double x;
//    double y;
//}point;
//
//int main()
//{
//    point p[100];
//    int i;
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%lf %lf", &p[i].x, &p[i].y);
//    }
//    printf("(%.2f,%.2f)\n", (p[0].x + p[1].x) / 2, (p[0].y + p[1].y) / 2);
//    return 0;
//}
//52.程序功能：定义一个中国省份基本信息结构，包括省名、简称、面积（万平方公里）、人口(万人)等。编写程序，输入五个省份的信息，输出其 中面积最大的省份是哪一个？
//#include <stdio.h>
//typedef struct
//{
//    char name[5];
//    char jian;
//    int s;
//    int p;
//}point;
//
//int main()
//{
//    point p[10], t;
//    int i;
//    t.p = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%s %s %d %d", p[i].name, &p[i].jian, &p[i].s, &p[i].p);
//        if (p[i].s > t.s)
//            t = p[i];
//    }
//    printf("%s\n", t.name);
//    return 0;
//}
//53.程序功能：定义结构类型来表示二维平面坐标中的一个点，编写程序，用户输入2个点，判断并输出哪个点距离坐标原点最近。
//#include <stdio.h>
//typedef struct
//{
//    double x;
//    double y;
//}point;
//
//int main()
//{
//    point p[100];
//    int i;
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%lf %lf", &p[i].x, &p[i].y);
//        p[i].dist = (p[i].x) * (p[i].x) + (p[i].y) * (p[i].y);
//    }
//    if (p[1].dist < p[0].dist)
//        printf("(%.2f,%.2f)\n", p[1].x, p[1].y);
//    else
//        printf("(%.2f,%.2f)\n", p[0].x, p[0].y);
//    return 0;
//}
//54.程序功能：定义结构类型来表示二维平面坐标中的一个点，编写程序，用户输入2个点，计算并输出这两个点间的距离。
//#include<stdio.h>
//#include<math.h>
//typedef struct
//{
//    double x;
//    double y;
//}point;
//
//int main()
//{
//    point p[100];
//    int i;
//    double l;
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%lf %lf", &p[i].x, &p[i].y);
//    }
//    l = sqrt((p[0].x - p[1].x) * (p[0].x - p[1].x) + (p[0].y - p[1].y) * (p[0].y - p[1].y));
//    printf("%.2f\n", l);
//    return 0;
//}
//55.程序功能：定义一个中国省份基本信息结构，包括省名、简称、面积（万平方公里）、人口(万人)等。编写程序，输入3个省份的信息，输出其 中人口密度最小的省份是哪一个？
//#include <stdio.h>
//typedef struct
//{
//    char name[5];
//    char jian;
//    int s;
//    int p;
//}point;
//
//int main()
//{
//    point p[5], t;
//    int i;
//    t.p = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%s %s %d %d", p[i].name, &p[i].jian, &p[i].s, &p[i].p);
//        if (p[i].p / p[i].s < t.p / t.s)
//            t = p[i];
//    }
//    printf("%s\n", t.name);
//    return 0;
//}
//56.程序功能：定义一个学生基本信息结构，包括学号、姓名、出生日期、性别等，其中出生日期又是一个结构类型的数据，含年、月、日等信息。 编写程序，输入3位同学的信息，统计并输出男同学、女同学的学生数。
//#include <stdio.h>
//struct date
//{
//    int year;
//    int month;
//    int day;
//};
//typedef struct
//{
//    char id[10];
//    char name[16];
//    struct date birthday;
//    char sex;
//}point;
//
//int main()
//{
//    point p[3];
//    int i, a = 0, b = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%s %s %d %d %d %c", p[i].id, p[i].name, &p[i].birthday.year, &p[i].birthday.month, &p[i].birthday.day, &p[i].sex);
//        if (p[i].sex == 'M')
//            a++;
//        else
//            b++;
//    }
//    printf("%d %d\n", b, a);
//    return 0;
//}
//57.程序功能：定义一个学生基本信息结构，包括学号、姓名、出生日期、性别等，其中出生日期又是一个结构类型的数据，含年、月、日等信息。 编写程序，输入3位同学的信息，输出在2014年内过20周岁生日的学生信息。
//#include <stdio.h>
//struct date
//{
//    int year;
//    int month;
//    int day;
//};
//typedef struct
//{
//    char id[10];
//    char name[16];
//    struct date birthday;
//    char sex;
//}point;
//
//int main()
//{
//    point p[3];
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%s %s %d %d %d %c", p[i].id, p[i].name, &p[i].birthday.year, &p[i].birthday.month, &p[i].birthday.day, &p[i].sex);
//
//    }
//    for (i = 0; i < 3; i++)
//    {
//        if (p[i].birthday.year == 1994)
//            printf("%s %s %d %d %d %c\n", p[i].id, p[i].name, p[i].birthday.year, p[i].birthday.month, p[i].birthday.day, p[i].sex);
//    }
//    return 0;
//}
//58.在数组中查找指定元素。请编写函数search(int b[], int n, int x)，其功能是在一个大小为n的数组a中查找x，如果找到则返回所在数组的下标，否则返回 - 1。主函数根据返回值，分别输出位置信息或输出“找不到”。
//#include<stdio.h>
//int search(int list[], int n, int x);
//int main()
//{
//    int list[100], i, x, n;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &list[i]);
//    }
//    scanf("%d", &x);
//    i = search(list, n, x);
//    if (i >= 0)
//        printf("%d\n", i);
//    else
//        printf("Not found\n");
//    return 0;
//}
//int search(int list[], int n, int x)
//{
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        if (list[i] == x)
//            return i;
//    }
//    return -1;
//}
//59.在主函数中输入一个字符，再输入一个以回车结束的字符串（少于80个字符），调用函数search()查找该字符在字符串中所对应的最大下标（下标从0开始）；若没找到则输出“Not Found!”。函数原型：int search(char* s, char x)。
//#include<stdio.h>
//#include <string.h>
//int search(char* s, char x);
//int main()
//{
//    char s[100];
//    char m;
//    int n;
//    gets(s);
//    scanf("%c", &m);
//    n = search(s, m);
//    if (n >= 0)
//        printf("%d\n", n);
//    else
//        printf("Not Found!\n");
//    return 0;
//}
//int search(char* s, char x)
//{
//    int i;
//    for (i = strlen(s) - 1;; i--)
//    {
//        if (s[i] == x)
//            return i;
//    }
//    return -1;
//}
//60.定义包含学号(int)、姓名(name[10])、成绩(float)的学生结构类型(struct StudType)，学生基本信息可通过结构数组初始化的方法输入。编写函数int search(struct StudType stu[], int n, char* name)，实现通过学生姓名查询功能，在主函数调用并输出学生信息，若没找到输出"Not Found!"。
//#include<stdio.h>
//#include<string.h>
//struct StudType {
//    int num;
//    char name[10];
//    float wage;
//};
//int search(struct StudType stu[], int n, char* name);
//int main()
//{
//    int n, i, k;
//    char num2[100];
//
//
//    struct StudType stu[3] = {
//          {201101,"qw",80},{201102,"we",85},{201103,"er",90}
//    };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s", &num2);
//        k = search(stu, n, num2);
//        if (k == 3)
//
//        {
//            printf("Not Found\n");
//        }
//        else
//            printf("%d %s %.1f\n", stu[k].num, stu[k].name, stu[k].wage);
//    }
//    return 0;
//}
//int search(struct StudType stu[], int n, char* name)
//{
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        if (strcmp(stu[i].name, name) == 0)
//            return i;
//    }
//    return 3;
//}
//}61.定义包含工资号(int)、职工姓名(name[10])、工资(float)的职工结构类型(struct Employe)，职工基本信息可通过结构数组初始化的方法输入。编写函数int search(struct Employe emp[], int n, char* name)，实现通过职工姓名查询功能，在主函数调用并输出职工信息，若没找到输出"Not Found!"。
//#include<stdio.h>
//#include<string.h>
//struct Employe {
//    int num;
//    char name[10];
//    float wage;
//};
//int search(struct Employe emp[], int n, char* num);
//int main()
//{
//    int n, i, k;
//    char num2[10];
//    struct Employe emp[3] = {
//          {1,"qw",1000},{2,"we",2000},{3,"er",3000}
//    };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s", num2);
//        k = search(emp, n, num2);
//        if (k == -1)
//            printf("Not Found\n");
//        else
//            printf("%d %s %.1f\n", emp[k].num, emp[k].name, emp[k].wage);
//    }
//    return 0;
//}
//int search(struct Employe emp[], int n, char* name)
//{
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        if (strcmp(emp[i].name, name) == 0)
//            return i;
//
//    }
//    return -1;
//}
//62.编写函数void strmcpy(char* s, char* t, int m)，实现从字符串t中第m个字符开始的全部字符复制到字符串s中（不能使用系统函数strcpy）。在主函数调用该函数并输出字符串s。
//#include<stdio.h>
//void mcopy(char* s, char* t, int m);
//int main(void)
//{
//    char s[100], c[100];
//    int n;
//    gets(s);
//    scanf("%d", &n);
//    mcopy(s, c, n);
//    puts(c);
//    return 0;
//}
//void mcopy(char* s, char* t, int m)
//{
//    int j, h = 0;
//    for (j = m - 1;; j++)
//    {
//        if (s[j] == '\0')
//        {
//            t[h] = '\0';
//            break;
//        }
//        t[h] = s[j];
//        h++;
//    }
//}
//63.编写函数void strlink(char* s, char* t)，实现将字符串t连接至字符串s中（不能使用系统函数strcat）。在主函数中调用该函数并输出字符串s。
//#include <stdio.h>
//void strlink(char* s, char* t)
//{
//    int i = 0, j = 0;
//    while (s[i] != '\0')
//        i++;
//    while (t[j] != '\0')
//    {
//        s[i++] = t[j];
//        j++;
//    }
//}
//int main()
//{
//    char s1[80], s2[40];
//    gets(s1);
//    gets(s2);
//    strlink(s1, s2);
//    puts(s1);
//    return 0;
//}
//64.编写函数 void strcopy(char* s, char* t)，实现将字符串t复制至字符串s中（不能使用系统函数strcpy）。在主函数中调用该函数并输出字符串s。
//#include <stdio.h>
//void strcopy(char* s, char* t);
//int main()
//{
//    char s[100], c[100];
//    gets(s);
//    strcopy(s, c);
//    puts(c);
//    return 0;
//}
//void strcopy(char* s, char* t)
//{
//    int i = 0;
//    for (i = 0; s[i] != '\0'; i++)
//    {
//        t[i] = s[i];
//    }
//}
//65.编写函数 int strlength(char* s)，实现计算字符串s的长度（有效字符个数，不能使用系统函数strlen）。在主函数中调用该函数并输出字符串s的长度。
//#include <stdio.h>
//int strlength(char* s);
//int main()
//{
//    char s[100];
//    int n;
//    gets(s);
//    n = strlength(s);
//    printf("%d\n", n);
//    return 0;
//}
//int strlength(char* s)
//{
//    int i = 0;
//    while (s[i] != '\0')
//        i++;
//    return i;
//}
//66.编写函数 int isPalin(char* s)判断输入的字符串s是否为“回文”（所谓“回文”是指顺读和倒读都一样的字符串）。在主函数中调用该函数，若输入字符串为“回文”则输出“YES!”否则输出“NO!”。
//#include <stdio.h>
//#include <string.h>
//int isHuiwen(char* str);
//
//int main()
//{
//    char a[100];
//    int i;
//    gets(a);
//    i = isHuiwen(a);
//    if (i == 0)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}
//int isHuiwen(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    if (*left++ != *right--)
//        return 0;
//    else
//        return 1;
//}
//67.字符数组Marks保存有n（n < 20）个学生的成绩等级（A、B、C、D、E五个等级），编写函数int Count_number(char* m, int n, char grade)，统计指定成绩等级的学生人数。在主函数中输入成绩等级并调用该函数并输出统计结果（如统计成绩等级为B的学生人数）。
//#include <stdio.h>
//    int Count_number(char* m, int n, char grade);
//int main()
//{
//    char s[100];
//    char grade;
//    int i, n, m;
//    scanf("%d %c", &n, &grade);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%c", &s[i]);
//    }
//    m = Count_number(s, n, grade);
//    printf("%d\n", m);
//    return 0;
//}
//int Count_number(char* m, int n, char grade)
//{
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (m[i] == grade)
//        {
//            j++;
//        }
//    }
//    return j;
//}
//68.函数int isNarciss(int n)为判断水仙花数的函数（水仙花数是指各位数字的立方和等于其自身的数）。在主函数中输入两个正整数m和n（m≥100, n≤1000），调用该函数输出m到n之间的所有水仙花数。
//#include <stdio.h>
//int isNarciss(int n)
//int main()
//{
//    int a, b, i, f = 0, x;
//    scanf("%d %d", &a, &b);
//    for (i = a; i <= b; i++)
//    {
//        x = isNarciss(i)
//            if (x != 0)
//            {
//                printf("%d", x);
//                f++;
//            }
//    }
//    if (f == 0)
//    {
//        printf("No\n");
//    }
//    return 0;
//}
//int isNarciss(int n)
//{
//    int m = n, d1, d2, d3;
//    d1 = m / 100;
//    d2 = (m % 100) / 10;
//    d3 = m % 10;
//    if (m == d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3)
//        return m;
//    else
//        return 0;
//    return 0;
//}
//69.编写函数 void delchar(char* s, char c)删除字符串s中指定字符c。在主函数中调用该函数并输出删除指定字符后的字符串s。
//#include<stdio.h>
//void delechar(char* s, char c);
//int main(void)
//{
//    char a, s[100];
//    gets(s);
//    scanf("%c", &a);
//    delechar(s, a);
//    puts(s);
//    return 0;
//}
//void delechar(char* s, char c)
//{
//    int i = 0, j;
//    while (s[i] != '\0')
//    {
//        if (s[i] == c)
//        {
//            for (j = i; s[j] != ’\0’; j++)
//            {
//                s[j] = s[j + 1];
//            }
//        }
//        i++;
//    }
//}
//70.编写函数mov(int array[], int n, int m)，实现将含有n个元素的数组中的所有元素循环移动m个位置（m < n）（如原数组为{ 1, 2, 3, 4, 5 }，m = 3，移动后的数组为{ 4, 5, 1, 2, 3 }）。在主函数中调用该函数并输出调整后的数组。
//#include <stdio.h>
//    void mov(int a[], int n, int m);
//int main()
//{
//    int a[100], n, m, i;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    mov(a, n, m);
//    printf("\n");
//    return 0;
//}
//void mov(int a[], int n, int m)
//{
//    int i, b[100];
//    for (i = 0; i < n; i++)
//    {
//        if (i + m <= n)
//            b[i + m - 1] = a[i];
//        else
//            b[i + m - n - 1] = a[i];
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", b[i]);
//    }
//}