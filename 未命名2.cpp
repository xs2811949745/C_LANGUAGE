#include <stdio.h>
#include <math.h>
#include <string.h>
//int main()
//{
//    int m,n;
//    scanf("%d%d",&m,&n);
//    printf("%d",m/n);
//    printf("%d",m%n);
//
//    return 0;
//}


//int  n=1;int m= 2;
//switch (n)
//
//case 1:
//
//m++;
//
//case 2:
//
//n++; m++;case 3:
//
//switch (m)
//
//case 4:
//
//n+=3;n+=2;break ;
//case 5:
//
//n++;
//
//case 9:
//
//m++;
//
//default:
//
//break;]
//
//printf(" m=%d\n, n=%d\n", m, n) ;
//#include<stdio.h>
//int main()
//{
//int a;
//char c;
//scanf("%3d%3c",&a,&c);
//printf("%d,%c",a,c);
//}
//#include <stdio.h>
//#include <math.h>
//int factorial(int a);
//double Add_factorial(int a);
//int main()
//{
//	int b=0,d,e;
//	double a,c=0;
//	scanf("%lf",&a);
//	c=Add_factorial(b);
//	for(b=1;c<a;b++)
//	{
//		c=Add_factorial(b);
//	}
//	b-=2;
//	printf("m<=%d",b);
//	return 0;
//}
//double factorial(int a)
//{
//
//	int b;
//	double c=1,d;
//	for(b=1;b<=a;b++)       //·µ»Ø½×³Ëc
//	{
//		c=c*b;
//	}
//
//	return c;
//}
//
//int factorial(int a);
//double Add_factorial(double a)             //½×³ËÏà¼Ó
//{
//	double b,c=0,d;
//	for(b=1;b<=a;b++)
//	{
//
//		c+=factorial(b);
//	}
//	return c;
//}
//int main()
//{
//	int a=0,b=0,c=0;
//	scanf("%d"):"%d",&a,&c);
//	printf("%d",a+c);
//	return 0;
//}
//int main()
//{
//    int a=0, b, c, d,e=0,f=0;
//    int n = 0;
//    char arr[300] ;
//
//    while (scanf("%d", &n) != EOF)
//    {
//        for (b = 0; b < n; b++)
//        {
//            scanf("%d %d", &c, &d);
//            getchar();
//            e = e + c + 20 * d;
//        }
//        arr[f] = e;
//        e = 0;
//        f=f+1;
//		
//
//    }
//    int g = 0;
//    for (g = 0; g < f; g++)
//    {
//        printf("%d\n", arr[g]);
//    }
//
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,Y,N,sum = 0,x,j = 0,k = 0;
   int count[100] = {0};
    while(scanf("%d",&n) != EOF){
      x = n;
   for (i = 0; i< x;i ++)
   {
    scanf("%d %d",&Y,&N);
  sum = sum + Y + N*20;


       }

      count[j] = sum;
        j ++;
      sum = 0;
    //  printf("%d\n",count[j]);
    //  j++;


}
  for (k = 0;k<=j;k++)
  {
     printf("%d\n",count[k]);
  }
   system("pause");
    return 0;
}
