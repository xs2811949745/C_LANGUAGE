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
//1.�ó�����ɹ��ܣ������ж�a, b, c�ܷ񹹳������Σ����ܣ����"YES"�� �������"NO"������a, b, c���������ε������߳�ʱ��ȷ��a, b, c�ܹ��� �����ε��������κ������ߵĺʹ��ڵ����ߡ�
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
//2.�ó�����ɹ��ܣ�����һ������n���жϸ����Ƿ���ͬʱ��3��7�������������������"YES."���������"NO"��
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
//3.�ó�����ɹ��ܣ������ж�year�Ƿ�Ϊ���꣬���ǣ����"YES"���������"NO"�������ж�����Ϊ��year �����꣬�� year �ܱ� 4 ���������ܱ� 100 �������� year �ܱ� 400 ������
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
//4.ĳ���г��⳵�շѱ�׼���£��������3����𲽷���10Ԫ����������̺�ÿ����1.5Ԫ����д����������ʻ��̣���������㲢����˿�Ӧ֧���ĳ��ѣ�Ԫ����
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
//5.ĳ��������ˮ���շѱ�׼���£�ÿ��ʹ�ö���С�ڵ���15�ֵģ�ÿ���շ�2.5Ԫ��ÿ��ʹ�ö�������15�ֵģ����÷ֶμƷѣ���������ÿ��3Ԫ����д��������ʹ�ö��������㲢����û�ˮ�ѣ�Ԫ����
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
//6.���򵥱��ʽ������һ����ʽ�磺"������  �����   ������"������������ʽ�������������Ҫ��ʹ��switch ��䣨if��䣩��д��
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
//7.����һ���ַ���Ҫ���ж��Ƿ�ΪСдӢ����ĸ������ǣ�ת���ɴ�дӢ����ĸ�������
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
//8.��������������Ҫ����������򣬲��������������Ҫ����÷�֧�ṹʵ������
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
//9.�����������������������С������
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
//10.�Ӽ�������һ���������������ĸ�λ����֮�͡����磬����12534�������Ϊ15������99�������Ϊ18��
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
//11.�Ӽ�������һ���������������Ǽ�λ���������磬����12534�����Ϊ5������99�����Ϊ2��
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
//12.�Ӽ�������һ��������n��������0~9�е�����һ����x��ͳ��x��n�г��ֵĴ��������磬����nΪ12334������xΪ3��ͳ�ƽ��Ϊx�������Ρ�
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
//13.��д��������һ��������n�����2 / 1 + 3 / 2 + 5 / 3 + 8 / 5 + ? ? ? ��ǰn��֮�ͣ�����2λС���������дӵڶ�����ÿһ��ķ�����ǰһ��������ĸ�ĺͣ���ĸ��ǰһ��ķ��ӣ���
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
//14.��д��������һ��������n�����1 + 1 / 2 + 2 / 3 + 3 / 4 + 4 / 5 + ? ? ? ��ǰn��֮�͡�
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
//15.���ŵ�����ڵ����ʱ��Ϊ��֪���ж��ٱ���ͬʱ���ܱ�֤���»��ܣ�����ʿ���Ŷӱ�������1��5������������ĩһ��ʿ��������Ϊ1���ٰ���1��6������������ĩһ��ʿ��������Ϊ5���ٰ���1��7������������ĩһ��ʿ��������Ϊ4����󰴴�1��11��������ĩһ��ʿ��������Ϊ10����֪�����������ж��ٱ���
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
//16.����ͬ����������������ֻ��������ֻ���ӣ�����ֻ֪���������ܹ���35��ͷ��94ֻ�ţ������дһ��������㲢��������зֱ��ж���ֻ���Ͷ���ֻ�á�
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
//17.���ӳ������⣺���ӵ�һ��ժ��N�����ӣ���ʱ�ͳ���һ�룬������񫣬���ֳ���һ�����ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�춼��ǰһ��ʣ�µ�һ����һ��������10������Ե�ʱ���ʣһ��������, ���һ�칲ժ�������ٸ����ӣ�
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
//18.��һ��һԪƱ��1��2�ֺ�5�ֵ�Ӳ�ң����ٸ�һö���������ļ��ֻ���������ö��
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
//19.��һ��100ԪֽƱ��1Ԫ��2Ԫ��5Ԫ��ֽƱ�����ٸ�һ�ţ��������ļ��ֻ����������ţ�
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
//20.һ�����100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬Ȼ���������ٷ����������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
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
//21.����һ�������ж��Ƿ�Ϊ"ˮ�ɻ���"����"ˮ�ɻ���"��ָ��λ���ֵ������͵��������������
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
//22.�Ӽ�������6�������浽�����У�ͳ�����������ĸ����������ĺ͡�
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
//23.�Ӽ�������6�������浽�����У��������Сֵ��������Ӧ�ĵ��±ꡣ
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
//24.�Ӽ�������6��ѧ���ĳɼ��������У������ƽ���ɼ������������ƽ���ֵ�ѧ���ɼ���
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
//25.�����������쳲��������е�ǰ10��������1, 1, 2, 3, 5, 8, ...������ÿ�д�ӡ5�����ĸ�ʽ�����
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
//26.�Ӽ�������6�������浽����a�У��������a�и���������Ԫ�صĺͣ������δ�ŵ�����b��Ȼ�������
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
//27.��1, 2, 3, 4, 5, 6, 7, 8, 9�������飬�ֱ�ÿ������Ԫ������ʮ��������ÿ�д�ӡ3�����ĸ�ʽ�����
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
//28.��11, 20, 36, 48, 5, 6, 72, 48, 19�������飬Ȼ�������ţ��������
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
//29.�����ܣ��û����������߳�����������߳���ɵ������ε������Ҫ��ʹ��main�������û��Զ��庯�������У��û��Զ��庯������main�������ݹ��������������������������֮���������ʽarea = ����(s * (s - a) * (s - b) * (s - c)), ����s = (a + b + c) / 2
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
//30.�����ܣ��û���������������������������������Ͳ������Ҫ��ʹ��main�������û��Զ��庯�������У��û��Զ��庯��ʵ������������������ء�
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
//31.�����ܣ��û����������������������������ƽ��ֵ�������Ҫ��ʹ��main�������û��Զ��庯�������У��û��Զ��庯��ʵ�������������ƽ��ֵ�����ء�
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
//32.�����ܣ�����ֶκ���f(x)��ֵ���������x > 0ʱ��f(x) = 1 + x; ��x = 0ʱ��f(x) = 2x + 4; ��x < 0ʱ��f(x) = x * x;  Ҫ��ʹ��main�������û��Զ��庯��sign(x)ʵ�ָ÷ֶκ�����
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
//33.�����ܣ��û����������������������������֮���ż���ĺͣ�Ҫ��ʹ��main�������û��Զ��庯�������У��Զ��庯���Ĺ��ܣ�����main�������ݹ����Ĳ��������㲢���ظ�main������
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
//}34.�����ܣ��û����������������������������֮�����ֵ�������Ҫ��ʹ��main�������û��Զ��庯�������У��Զ��庯���Ĺ��ܣ�����main�������ݹ����Ĳ�������������ֵ�����ظ�main������
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
//35.�����ܣ��û�����һ�������������������к���6�ĸ����������Ҫ��ʹ��main�������û��Զ��庯�������У��Զ��庯���Ĺ��ܣ�����main�������ݹ����Ĳ�����ͳ�Ƴ���������ظ�main������
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
//}36.�����ܣ��û����볤�Ϳ�����������������ε������Ҫ��ʹ��main�������û��Զ��庯�������У��û��Զ��庯������main�������ݹ��������������������������֮��
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
//37.�����ܣ������������˰�������ڴ��ڵ���7000ʱ��˰Ϊ���� * 10 % ��С��7000ʱ��˰Ϊ���� * 5 % ������дһ�������书��Ϊ�������������������Ĺ��ʣ��û��Զ��庯�������ʵ�ʿ��Եõ��Ĺ����������ظ���������
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
//38.�����ܣ��û�����һ������n�������Ҫ�����1���������1��n���ܺͣ�����������Ҫ��ʹ��main�������û��Զ��庯�������У��Զ��庯���Ĺ��ܣ�����main�������ݹ����Ĳ���n���������������ظ�main������
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
//39.�����ܣ�������⳵���ã�ĳ���к���֣�����⳵15������������£���ÿ����2Ԫ�Ʒѣ�������15����ȴ����ÿ����3Ԫ�Ʒѣ���С��дһ�������书��Ϊ����������������򳵹��������û��Զ��庯�������Ӧ����˾�����⳵���ã������ظ���������
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
//40.�����ܣ��û�����һ������x�����x����x�Ľ׳ˣ�������������Ҫ��ʹ��main�������û��Զ��庯�������У��Զ��庯���Ĺ��ܣ�����main�������ݹ����Ĳ���x���������������ظ�main������
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
//41.ĳСѧ����ѧ���˻����¶Ⱥ������¶ȵ�ת��������дһ�������������н��ջ����¶ȵ����룬�û��Զ��庯��ʵ������Ӧ�������¶Ȳ����ظ���������ת����ʽΪ��c = 5 / 9 * f - 5 / 9 * 32;
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
//42.ĳ���ɼ���AB�ƣ�����ΪA��������ΪB������дһ�������书��Ϊ����������������ٷ��Ƶĳɼ����û��Զ��庯��change���ٷ��Ƶĳɼ�ת��ΪA����B�������ظ���������
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
//43.С��ȥ�����г�����������̼�˵�����10�����£�60Ԫһ����10�����ϣ�����10�����������Ż�45Ԫһ������дһ�������书��Ϊ�����������������빺��������������û��Զ�����count��ɼ�����Ҫ������ٲ����ظ���������
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
//44.�����ܣ��û�����һ���ַ������������Ӣ����ĸ�ĸ����������
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
//45.�����ܣ��û�����һ���ַ���������ô��е�Ԫ����ĸ��A E I O U����û���������
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
//46.�����ܣ��û�����һ���ַ�����������ַ����ĳ��ȡ�������ʹ��ϵͳ����ĺ���strlen��
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
//47.�����ܣ��û�����һ���ַ�����������ַ����С�X���ַ��ĸ�����
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
//48.�����ܣ��û�����һ���ַ��������ô��д�д��ĸ��ΪСд��ĸ��Сд��ĸ���䣬����������
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
//49.�����ܣ��û�����һ���ַ���������ô��е�Ԫ����ĸ�ĸ�������Ԫ����A E I O U��
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
//50.�����ܣ��û�����һ���ַ�����ͳ�Ƴ����ַ����к��С�O�����ߡ�K���ַ��ĸ�����
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
//51.�����ܣ�����ṹ��������ʾ��άƽ�������е�һ���㣬��д�����û����������㣬���㲢����������������е�����ꡣ
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
//52.�����ܣ�����һ���й�ʡ�ݻ�����Ϣ�ṹ������ʡ������ơ��������ƽ��������˿�(����)�ȡ���д�����������ʡ�ݵ���Ϣ������� ���������ʡ������һ����
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
//53.�����ܣ�����ṹ��������ʾ��άƽ�������е�һ���㣬��д�����û�����2���㣬�жϲ�����ĸ����������ԭ�������
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
//54.�����ܣ�����ṹ��������ʾ��άƽ�������е�һ���㣬��д�����û�����2���㣬���㲢������������ľ��롣
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
//55.�����ܣ�����һ���й�ʡ�ݻ�����Ϣ�ṹ������ʡ������ơ��������ƽ��������˿�(����)�ȡ���д��������3��ʡ�ݵ���Ϣ������� ���˿��ܶ���С��ʡ������һ����
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
//56.�����ܣ�����һ��ѧ��������Ϣ�ṹ������ѧ�š��������������ڡ��Ա�ȣ����г�����������һ���ṹ���͵����ݣ����ꡢ�¡��յ���Ϣ�� ��д��������3λͬѧ����Ϣ��ͳ�Ʋ������ͬѧ��Ůͬѧ��ѧ������
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
//57.�����ܣ�����һ��ѧ��������Ϣ�ṹ������ѧ�š��������������ڡ��Ա�ȣ����г�����������һ���ṹ���͵����ݣ����ꡢ�¡��յ���Ϣ�� ��д��������3λͬѧ����Ϣ�������2014���ڹ�20�������յ�ѧ����Ϣ��
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
//58.�������в���ָ��Ԫ�ء����д����search(int b[], int n, int x)���书������һ����СΪn������a�в���x������ҵ��򷵻�����������±꣬���򷵻� - 1�����������ݷ���ֵ���ֱ����λ����Ϣ��������Ҳ�������
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
//59.��������������һ���ַ���������һ���Իس��������ַ���������80���ַ��������ú���search()���Ҹ��ַ����ַ���������Ӧ������±꣨�±��0��ʼ������û�ҵ��������Not Found!��������ԭ�ͣ�int search(char* s, char x)��
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
//60.�������ѧ��(int)������(name[10])���ɼ�(float)��ѧ���ṹ����(struct StudType)��ѧ��������Ϣ��ͨ���ṹ�����ʼ���ķ������롣��д����int search(struct StudType stu[], int n, char* name)��ʵ��ͨ��ѧ��������ѯ���ܣ������������ò����ѧ����Ϣ����û�ҵ����"Not Found!"��
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
//}61.����������ʺ�(int)��ְ������(name[10])������(float)��ְ���ṹ����(struct Employe)��ְ��������Ϣ��ͨ���ṹ�����ʼ���ķ������롣��д����int search(struct Employe emp[], int n, char* name)��ʵ��ͨ��ְ��������ѯ���ܣ������������ò����ְ����Ϣ����û�ҵ����"Not Found!"��
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
//62.��д����void strmcpy(char* s, char* t, int m)��ʵ�ִ��ַ���t�е�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���s�У�����ʹ��ϵͳ����strcpy���������������øú���������ַ���s��
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
//63.��д����void strlink(char* s, char* t)��ʵ�ֽ��ַ���t�������ַ���s�У�����ʹ��ϵͳ����strcat�������������е��øú���������ַ���s��
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
//64.��д���� void strcopy(char* s, char* t)��ʵ�ֽ��ַ���t�������ַ���s�У�����ʹ��ϵͳ����strcpy�������������е��øú���������ַ���s��
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
//65.��д���� int strlength(char* s)��ʵ�ּ����ַ���s�ĳ��ȣ���Ч�ַ�����������ʹ��ϵͳ����strlen�������������е��øú���������ַ���s�ĳ��ȡ�
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
//66.��д���� int isPalin(char* s)�ж�������ַ���s�Ƿ�Ϊ�����ġ�����ν�����ġ���ָ˳���͵�����һ�����ַ����������������е��øú������������ַ���Ϊ�����ġ��������YES!�����������NO!����
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
//67.�ַ�����Marks������n��n < 20����ѧ���ĳɼ��ȼ���A��B��C��D��E����ȼ�������д����int Count_number(char* m, int n, char grade)��ͳ��ָ���ɼ��ȼ���ѧ����������������������ɼ��ȼ������øú��������ͳ�ƽ������ͳ�Ƴɼ��ȼ�ΪB��ѧ����������
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
//68.����int isNarciss(int n)Ϊ�ж�ˮ�ɻ����ĺ�����ˮ�ɻ�����ָ��λ���ֵ������͵����������������������������������������m��n��m��100, n��1000�������øú������m��n֮�������ˮ�ɻ�����
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
//69.��д���� void delchar(char* s, char c)ɾ���ַ���s��ָ���ַ�c�����������е��øú��������ɾ��ָ���ַ�����ַ���s��
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
//            for (j = i; s[j] != ��\0��; j++)
//            {
//                s[j] = s[j + 1];
//            }
//        }
//        i++;
//    }
//}
//70.��д����mov(int array[], int n, int m)��ʵ�ֽ�����n��Ԫ�ص������е�����Ԫ��ѭ���ƶ�m��λ�ã�m < n������ԭ����Ϊ{ 1, 2, 3, 4, 5 }��m = 3���ƶ��������Ϊ{ 4, 5, 1, 2, 3 }�������������е��øú������������������顣
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