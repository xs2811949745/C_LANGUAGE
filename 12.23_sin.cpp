#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//const double PI = acos(-1);
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	printf("%.2lf %.2lf",sin(a*PI/180),cos(a*PI/180) );
//}

//int main()
//{
//	
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%.1f\n", a * 20 % +b * 30 % +c * 50% );
//	return 0;
//}

//int main()
//{
//    int x = 0, y = 0, a = 0, b = 50 - a;
//    b = 10 * x + 1 * y;
//    scanf("%d", &a);
//    if (b < 10)
//    {
//        printf("%d\n", x);
//        printf("%d\n", y);
//    }
//    else
//    {
//        if (x > y)
//        {
//            printf("%d\n", x);
//            printf("%d\n", y);
//        }
//    }
//    return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int a,b,count_10=0,count_1=0;
//	scanf("%d", &a);
//	b = 50 - a;
//	while (b >=10)
//	{
//		count_10++;
//		b -= 10;
//	}
//	while (b >=1)
//	{
//		count_1++;
//		b -= 1;
//	}
//	printf("%d\n%d", count_10, count_1);
//	return 0;
//}
//#include <math.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//#include <time.h>
//
//void SetColor(int Mode)
//{
//	int color = rand() % 16;
//	if (color == 0) color = 0x04;
//	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	if (Mode == 0)
//	{
//
//		//SetConsoleTextAttribute(hCon, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); //白底
//		SetConsoleTextAttribute(hCon, FOREGROUND_GREEN);//源码+企鹅群：535756959
//	}
//	else
//	{
//		SetConsoleTextAttribute(hCon, color);
//	}
//
//}
//
//#define PI 3.14159265359
//
//float sx, sy;
//
//float sdCircle(float px, float py, float r) {
//	float dx = px - sx, dy = py - sy;
//	return sqrtf(dx * dx + dy * dy) - r;
//
//}
//
//float opUnion(float d1, float d2) {
//	return d1 < d2 ? d1 : d2;
//
//}
////源码+企鹅群：535756959
//#define T px + scale * r * cosf(theta), py + scale * r * sin(theta)
//
//float f(float px, float py, float theta, float scale, int n) {
//	float d = 0.0f;
//	for (float r = 0.0f; r < 0.8f; r += 0.02f)
//		d = opUnion(d, sdCircle(T, 0.05f * scale * (0.95f - r)));
//
//	if (n > 0)
//		for (int t = -1; t <= 1; t += 2) {
//			float tt = theta + t * 1.8f;
//			float ss = scale * 0.9f;
//			for (float r = 0.2f; r < 0.8f; r += 0.1f) {
//				d = opUnion(d, f(T, tt, ss * 0.5f, n - 1));
//				ss *= 0.8f;
//
//			}
//
//		}
//
//	return d;
//
//}
//
//int main(int argc, char* argv[]) {
//	srand((int)time(NULL));
//	int n = argc > 1 ? atoi(argv[1]) : 3;
//
//	int SetCnt = 0;
//	int CntTotal = 0;
//	float fReverseCnt = 0;
//	int ColorIndex = 0;
//
//	for (sy = 0.8f; sy > 0.0f; sy -= 0.02f, putchar('\n'))
//	{
//
//		ColorIndex++;//源码+企鹅群：535756959
//
//		SetCnt = 0; //每行进行清零
//
//		for (sx = -0.35f; sx < 0.35f; sx += 0.01f)
//		{
//			if (f(0, 0, PI * 0.5f, 1.0f, n) < 0)
//			{
//
//				if (ColorIndex % 5 == 0)
//				{
//					SetColor(1);
//				}
//				else
//				{
//					if (SetCnt < 3)
//					{
//						SetCnt++;
//						SetColor(1);
//
//						fReverseCnt = sx + 0.01f;
//					}
//					else if (sx >= fabs(fReverseCnt))
//					{
//						SetColor(1);
//					}
//					else
//					{
//						SetColor(0);
//					}
//
//				}
//				putchar('*');
//			}
//			else
//			{
//				putchar(' ');
//			}
//		}
//	}
//	return 0;
//
//}