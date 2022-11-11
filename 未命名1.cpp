#include "user.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>        //
#include <stdlib.h>         //system
/*{
	int a,b,c;
scanf("%d%d",&a,&b);

		if(a>b)

	{
	c=a;
	a=b;
	b=c;}
	printf("%d %d",a,b);
	return 0;
}*/
//
//{
//	int a,b,c,d;
//	scanf("%d",&a);
//	b=a/100;c=a/10%10;
//	d=a%10;
//	if(a==pow(b,3)+pow(c,3)+pow(d,3))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}                       /*水仙花函数
//	return
/*int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=(a>b)?a:b;
	printf("%d",c);
	return 0;
}*//*
int main()//三角形判定
{
	int a,b,c,d,e;
	scanf("%d%d%d",&a,&b,&c);
	d=(a>b)?a:b;
	e=(d>c)?d:c;
	if(2*e<a+b+c){
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b)
	
	{
	printf("yes");}
	else
	{
	printf("no");}
	return 0;
}*/
/*int main ()
{
	char ch;
	ch=getchar();
	if(ch>='A'&&ch <='Z'){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}
int main()//转换为大写
{
	char ch;
	ch=getchar();
	if(ch>='a'&&ch<='z')
	{
        printf("%c",ch-32);
}
else
{
	printf("%c",ch);
}
	return 0;
}
int main()//输出ASCII码值
{
	char ch;
	ch =getchar();
	printf("%d",ch);
	return 0;
}
int main()
{
char ch;
	ch=getchar();
	if(ch>='a'&&ch<='z')
	{
        printf("%c",ch-32);
}
else
{
	printf("%c",ch);
}

	return 0;
}
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<0)
	{
		y=0;
	}
	else if(x>=0&&x<=15)
	{
		y=4*x/3;
	}
	else if(x>15)
	{
		y=2.5*x-10.5;
}
printf("%d",y);
	return 0;
}*/
#include<stdio.h>

/*int main(){
 int grade;
 
 scanf("%d",&grade);
 printf("您的分数为\n");
 if (grade>=90)
 {
  printf("A");}
else if (grade>=80)
{

  printf("B");}
else if (grade>=70)
{

     printf("C");}
else if (grade>=60)
{

     printf("D");}
else if  (grade<60)
 {
 printf("E");
}
 printf("请继续努力");
  return 0;}
//
//void main()
//{
//char a,b,c,d;
//scanf("%c,%c,%d,%d",&a,&b,&c,&d);
//printf("%c, %c, %c, %c ",a,b,c,d);
//}
//void main()
//{
//int x=0,y=0;
//if(x=y) printf("*****\n");
//else printf("#####\n");
//}

//void main()
//{
//float x,y,z;
//scanf("%f,%f",&x,&y);
//z=x/y;
//while(1)
//{ if(fabs(z)>1.0)
//{
//x=y;
//y=x;
//z=x/y;
//}
//else break;
//}
//printf("%f",y);
//}
//int main()
//{
//	int a,b;
//	scanf("a=%d,b=%d",&a,&b);
//	printf("%d%d",a,b);
//	return 0;
//int main()
//{
//float x,y,a;
//for(y=1.5;y>-1.5;y-=0.1)
//{
//for(x=-1.5;x<1.5;x+=0.05)
//{
//a=x*x+y*y-1;
//putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');
//}
//system("color 04");
//putchar('\n');
//}
//scanf("%f");
//int main()
//{
//float x,y,a;
//for(y=1.5;y>-1.5;y-=0.1)
//{
//for(x=-1.5;x<1.5;x+=0.05)
//{
//a=x*x+y*y-1;
//putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');
//}
//system("color 04");
//putchar('\n');
//}
//scanf("%f");
//}

/*
{
int a = 2, b = -1, c = 2;
if(a < b)
if(b < 0)
c = 0;
else c++;
printf("%d\n",c);
return 0;
}*/
/*int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		a=b;}
		else
		{
		printf("%d",a);
}
	return 0;
}*/
/*int main()
{
	int a=1,b=0;
	while(a>999)
	{
		a=a++;
		printf("%d",a);
	}
	
	return 0;
}*/

/*int main()
{
	char ch;
	int index ;
	ch =getchar();
	if(ch>='A'&&ch<='Z')
	{
		ch+=32;
	}
	index=ch-'a'+1;
	printf("%d",index);
	return 0;
}*/
/*int main()     //判断字符类型
{
	char ch;
	ch= getchar();
	if(ch>='a'&&ch<'z'||ch>='A'&&ch<='Z')//ch在字母范围内
	{
		printf("字母");
	}
	else if(ch>='0'&&ch<='9')//ch不在字母范围内
	{
		printf("数字");
	}
	else if(ch==' '||ch=='\n')
	{
		printf("间隔");
	}
	else {
		printf("其他");
	}
	return 0;}*/
 /*int  main()//判断每个月多少天

{
	int a,b;//b代表年，a代表月
//	enum a
//	{
//		a=1,
//		a=2,
//		a=3,
//		a=4,
//		a=5,
//		a=6,
//		a=7,
//		a=8,
//		a=9,
//		a=10,
//		a=11,
//		a=12
//	};
	scanf("%d%d",&a,&b);

	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	{
		printf("%d年%d月有31天",b,a);
	}
	else if(a==4||a==6||a==9||a==112)
	{
		printf("%d年%d月有30天",b,a);
	}
	if(b%4==0&&b%100==0&&b%400==0&&a==2)
	{
		printf("%d年%d月有29天",b,a);
	}
	else if(a==2)
	{
		printf("%d年%d月有28天",b,a);
	}
	return 0;
}*/
//int main()
//{
//	char ch;
//	float a,b;
//	scanf("%d%c%d",&a,&ch,&b);
//	if(ch=='+')
//	{
//		printf("%d",a+b);
//	}
//	else if(ch=='*')
//	{
//		printf("%d",a*b);
//	}
//	else
//	{
//		printf(".");
//	}
//	return 0;
//}.
/*int main()   //switch语句初学
{
	int a,b;
	char ch;
	scanf("%d%c%d",&a,&ch,&b);
	switch(ch)
	{
  	case('+'):printf("%d",a+b);
  	break;
  	case('-'):printf("%d",a-b);
	break;
	case('*'):printf("%d",a*b);
	break;
	case('/'):printf("%d",a/b);
	break;
	default:printf("666"); break;
	}
	return 0;
}*/

//#include <stdio.h>//鸡兔同笼问题
//int main()
//{
//    int m,n,a;//有a个头b个脚c只兔子d只鸡
//    scanf("%d%d",&m,&n);
//	a=(4*m-n)/2;
//	printf("%d %d",a,m-a);
//
//    return 0;
//}
/*int main()//美元与人民币换算

{
	double rmb,my;
	scanf("%lf",&rmb);
	my=6.5573*rmb;
	printf("%.2f",my);
	return 0;
}*/
/*int main()//三科平均分

{
	float m,e,c;//三科成绩
	scanf("%f%f%f",&m,&e,&c);
	float d;//平均分
	d=(m+e+c)/3;
	printf("%.2f",d);
	return 0;
}*/
//#include<stdio.h>
//int main()
//{
//int a = 2, b = -1, c = 2;
//if(a < b)
//if(b < 0)
//c = 0;
//else c++;
//printf("%d\n",c);
//return 0;
//}
#include<stdio.h>
//int main()
//{
//int x=1,y=0,a=0,b=0;
//switch(x)
//{
//case 1:switch(y)
//{
//case 0:a++;break;
//case 1:b++;break;
//}
//case 2:a++;b++;break;
//}
//printf("a=%d,b=%d",a,b);
//}
//#include <stdio.h>
//int main()
//{
//int k=2;
//switch(k)
//{
//case 1:printf("%d\n",k++); break;
//case 2:printf("%d ",k++);
//case 3:printf("%d\n",k++); break;
//case 4:printf("%d\n",k++);
//default:printf("Full!\n");
//}
//}
//int main()
//{
//
//int n=1;int m= 2;switch (n)
//{
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
//{
//
//case 4:
//
//n+=3;n+=2;break ;case 5:
//
//n++;
//}
//case 9:
//
//m++;
//
//default:
//
//break;}
//
//printf(" m=%d\n, n=%d\n", m, n) ;
//}
//int main()
//{
//
//	int a,b;
//	char op;
//	scanf("%d%c%d",&a,&op,&b);
//
//	switch(op)
//	{
//		case '+':printf("%d",a+b);
//		break;
//		case '-':printf("%d",a-b);
//		break;
//		case '*':printf("%d",a*b);
//		break;
//		case '/':printf("%d",a/b);
//		break;
//
//		default:printf("Wrongput");
//		break;
//}
//	return 0;
//}
//int main()
//{
//	int i;
//	float w;
//	scanf("%d%f",&i,&w);
//	switch(i)
//	{
//		case 1:if (i<=100000) w=w*1.1; printf("%f",w);
//		break;
//		case 2:if(i>=100000&&i<=200000) w=(w-100000)*1.1;printf("%f",w);
//		break;
//
//	}
//
//	return 0;
//}bonus = 0;

//int main ()
//   {
//   	double i, bonus;
//   	scanf("%lf%lf",&i,&bonus);
//	 int j = (int)(i/100000);
//
//
//
//    switch (j) {
//	2
//
//
//         case 0:
//
//             bonus = i/10;
//
//             break;
//
//         case 1:
//
//             bonus = 10000+(i-100000)*7.5/100;
//
//             break;
//
//         case 2:
//
//         case 3:
//
//             bonus = 17500+(i-200000)/20;
//
//             break;
//
//         case 4:
//
//         case 5:
//
//             bonus = 27500+(i-400000)*3/100;
//
//             break;
//
//         case 6:
//
//         case 7:
//
//         case 8:
//
//         case 9:
//
//             bonus = 33500+(i-600000)*1.5/100;
//
//             break;
//
//         default:
//
//             bonus = 33500+400000*1.5/100+(i-1000000)/100;
//
//             break;
//}
//   return 0double m, y;
//7
// int x;
//8
// scanf("%lf", &m);
//9
// if (m < 0)
//10
//  printf("不能为负值，请重新输?");
//11
// else
//12
// {
//13
//  x = m / 100000;
//14
//  switch (x)
//15
//  {
//16
//  case 0:y = m * 0.1;
//17
//   break;
//18
//  case 1:y = (100000 * 0.1) + (m - 100000)*0.075;
//19
//   break;
//20
//  case 2:y = (100000 * 0.1) + (100000 * 0.075) + (m - 200000)*0.05;
//21
//   break;
//22
//  case 3:y = (100000 * 0.1) + (100000 * 0.075) + (m - 200000)*0.05;
//23
//   break;
//24
//  case 4:y = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (m - 400000)*0.03;
//25
//   break;
//26
//  case 5:y = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (m - 400000)*0.03;
//27
//   break;
//28
//  case 6:y = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (200000 * 0.03) + (m - 600000)*0.015;
//29
//   break;
//30
//  case 7:y = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (200000 * 0.03) + (m - 600000)*0.015;
//31
//   break;
//32
//  case 8:y = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (200000 * 0.03) + (m - 600000)*0.015;
//33
//   break;
//34
//  case 9:y = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (200000 * 0.03) + (m - 600000)*0.015;
//35
//   break;
//36
//  default:y = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (200000 * 0.03) + (400000 * 0.015) + (m - 1000000)*0.01;
//37

//int main()        //输出100内的奇数
//{
//	int a=0,b;
//
//	while(a<100)
//	{a++;
//	b=a%2;
//
//		if(b==0)
//	
//		printf("%d ",a);}
//
//	return 0;
//	}
//	
	
	


//#include<stdio.h>
//int main()
//{
// int i,number,sum;
// sum=0;
// i=1;
// printf("请输入10个整数:\n");
// while(i<=10)
// {
// scanf("%d",&number);
// sum+=number;
// i=i+1;
// }
// printf("%d\n",sum);
// return 0;
//int main()
//{
//	int a=0;
//	while(a<=10)
//	{
//		a++;
//		if(a==5)
//		continue;
//		printf("%d",a);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	char c;
//	scanf("%3d%3c",&a,&c);
//	printf("%d,%c",a,c);
//
//}
//#include <stdio.h>
//int main()
//{int age=0;
//	char sex=0,a;
//	printf("请输入年龄: \n");
//	scanf("%2d",&age);
//	printf("请输入性别: \n");
//	scanf("  %c%c",&sex,&a);
//	printf("\n------------------------------\n");
//	printf("\n年龄: %4d\t 性别为: %4c\n",age,sex);
//	return 0;
////}
//int main()
//{
//	int a,b,c,d,e;
//	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//    printf("%d",a*10000+b*1000+c*100+d*10+e);
//	
//}
//int main()
//{
//	int a=0;
//	while(a<10)
//	{
//		a++;
//			printf("%d ",a);
//	}
//	return 0;
//}
//int  main()
//{
//	int a,b;
//	char ch;
//	printf("请输入密码");
//    scanf("%d",&a);
//   while(ch=getchar()!='\n')      解决两个输入和读取回车问题
//   {
//
//   }
//    printf("请确认");
//	ch=getchar();
//	
//	return 0;
//	
//}
//int main()
//{
//	
//	return 0;
//	
//}
//#include<stdio.h>
//main()
//{ int x;
//  int y;
//  int z;
//  int t;
//  printf("x=");
//  scanf("%d",&x);
//  printf("y=");
//  scanf("%d",&y);
//  printf("z=");
//  scanf("%d",&z);
//  t=x+y+z;
//	(float)t;
//  printf("%.2f",t);
//  return 0;
//}
//int main()
//{
//	char arr1[]="Wu Qiuyue is shadan";
//	char arr2[]= "1111111111111111111";
//	int right=strlen(arr1)-1;
//	int left=0;
//	while(left<=right)
//	{
//		arr2[right]=arr1[right];
//		arr2[left]=arr1[left];
//		printf("%s\n",arr2);
//		Sleep(300);
//		system("cls");
//		left++;
//		right--;
//	}
//printf("Wu Qiuyue is shadan");
//	return 0;
//
//}
//int main()
//{
//	char arr1[]= "Wu Di loves Li Xiang";
//	char arr2[]= "66666666666666666666";
//	int right=strlen(arr1)-1;
//	int left=0;
//	while(left<=right)
//	{
//		arr2[right]=arr1[right];
//		arr2[left]=arr1[left];
//		printf("%s\n",arr2);
//		Sleep(300);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("Wu Di loves Li Xiang");
//	return 0;
//
//}

// int swap(int x,int y)
//{
//	int tmp=0;
//	tmp=x;
//	x=y;
//	y=tmp;
//	return x,y;
//}
//int main ()
//{
//	int x=1,y=2;
//
//	swap(x,y);
//	printf("%d%d",swap (x,y));
//
//	return 0;
//
//}
//#include <stdio.h>
//int main(void)
//{
//	printf("========================\n");
//	printf("         Welcome!       \n");
//	printf("========================\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("我正在实验中心6313机房上机。");
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//int x,m;
//scanf("%d",&x);
//m = 2*x*x+x+8;
//printf("%d",m);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//double d,r;
//scanf("%lf",&d);
//r = 6.5573*d;
//printf("%.2f",r);
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main (){
//
//double a,b,c,area,s;
//scanf("%lf%lf%lf", &a, &b, &c);
//s = (a + b + c) / 2;
//area = sqrt(s * (s - a) * (s - b) *(s - c));
//printf("%.2f\n", area );
//return 0;
//}
//int main()
//{   int x;
//	void Su(int b);
//	scanf("%d",&x);
//	Su(x);
//	return 0;
//}
//void Su(int b)
//{
//	int a,c,d,e;
//	for(e=3;e<sqrt(b);e++)
//	{
//		if(b%e==0)
//		{
//			printf("no");1
//		}
//		else {
//			printf("yes");}
//		}
//
//
//	}
//void IsPrime(int x)
//{
//    int ret=1;      //ret含义与之前的变量IsPrime相同
//    if(x==1||(x!=2&&x%2==0))
//        ret=0;
//    for(int i=3;i<sqrt(x);i+=2)       //循环到sqrt(x)
//    {
//        if(x%i==0)
//        {
//            ret=0;
//            break;
//        }
//    }
//    if(ret==1){
//    	printf("no");
//	}
//	else{
//	printf("yes");}
//}
////使用sqrt()函数需要包含头文件<math.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	IsPrime(a);
//
//	return 0;
//}
//int main()                oj54
//{
//	double a,b,c=1,d,e;       //第a天只剩一个桃子
//	scanf("%lf",&a);
//	for(b=0;b<a-1;b++)
//	{
//		c=(c+1)*2;
//	}	printf("%.0lf",c);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main ()
//
//{
//
//        int i,n,item,n1=1,n2=1;
//
//        scanf("%d",&n);
//
//        if(n==1||n==2)
//
//        item=1;
//
//        for(i=3;i<=n;i++)
//
//        {
//
//                item=n1+n2;
//
//                n2=n1;
//
//                n1=item;
//
//        }
//
//        printf("%d",item);
//
//}
/*
————————————————
版权声明：本文为CSDN博主「今天你学习了吗?」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_48452776/article/details/122567216.*/

//int main()
//{
//	int x,y,sum;
//	scanf("%d%d",&x,&y);
//
//	sum = Add(x,y);
//	printf("%d",sum);
//	return 0;
//}
//int main()
//{
//	int a,b,c,d;
//	scanf("%d",&a);
//	
// 	b=Leap_year(a);
//	if(b==1)
//	{
//		printf("是");
//	}
//	else if(b==0){
//		printf("否");
//	}
//	return 0;
//}
//int main()
//{
//	int a,b,c,d,e;
//	scanf("%d",&a);
//	b=Is_prime(a);
//	if(b==1)
//	{
//		printf("yes");
//	}
//	else{
//		printf("no");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//void inverse(int n);
//int main()
//{
// int n = 5;
//
// inverse(n);
// return 0;
//}
//void inverse(int n)
//{
//// ? ?if(n >1)
//// ? {
//// ? ? ? ?(1) 读入一个整数，存入num;
//// ? ? ? ?(2) ?将后面的n-1个数逆序输出: inverse(n-1);
//// ? ? ? ?(3) ?输出num；
//// ? }
//// if( n == 1) ?直接输出num；
// int d;
//if ( n == 1)
// {
// scanf("%d",&d);//这里每一次都会新定义一个d，但是地址不一样，所以也就不存在所谓的重新写值。
// printf("%d ",d);
// }
// else
//{
//	scanf("%d",&d);
// inverse(n-1);
// printf("%d ",d);
// }
//}
//int main()        递归初学stackoverflow
//{
//	printf("6");
//	main();
//	return 0;
//}
//void print(int a);           // 递归顺序输出
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}
//void print(int a)
//{
//	
//	if(a>9)
//	{
//		
//		print(a/10);
//	}
//	printf("%d ",a%10);
//}

//int arr_strlen();
//int main()
//{
//	int a
//	char arr[]="123456"
//	a=arr_strlen(arr);
//	printf("%d",a);
//	return 0;
//}
//int arr_strlen(char a)
//{
//	int b;
//	b=sizeof(arr)/sizeof(0);
//	arr_strlen(char a);
//}
//int arr_strlen(char a);
//int main()
//{
//	
//char arr;
//arr=getchar();
//int b=arr_strlen(*arr);
//	return 0;
//}
//int arr_strlen(char a)
//{
//
//	int c;
//	if(&a!='\0')
//	{
//		c++;
//		arr_strlen(a++);
//	}
//	return c;
//}
//int arr_strlen(char *a);
//int main()
//{
//	char arr[]="1234567";
//	int a=arr_strlen(arr);
//	printf("%d",a);
//	return 0;
//}
//int arr_strlen(char *a)
//{
//	if(*a!='\0')
//	return 1+arr_strlen(a+1);
//	else
//	return 0;
//}
//int fac(int a);       //递归实现阶乘
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	int ret = fac(a);
//	printf("%d",ret);
//	return 0;
//}
//int fac(int a)
//{
//	if(a<=1)
//	return 1;
//	else
//	return a*fac(a-1);
//
//}
//double fib(double a)          //输出斐波那契数列
//
//{
//	if(a<=2)
//	return 1;
//	else
//	return fib(a-1)+fib(a-2);
//}
//int main()
//{
//	double n;
//	scanf("%lf",&n);        //输入第n个斐波那契
//	double b = fib(n);
//	printf("%.0lf",b);
//	return 0;
//}
//int main()
//{
//	
//	return 0;
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d%d",&a,&b);
//	for(c=1;c<a;c++)
//	{
//		cnt++;
//	}
//	printf("%d",cnt);
//	return 0;
//}
int main()
//#define a 10     [define可以在main()之外 const必须在main()内
{//const int a=10;

//	int a;
// char arr[]={1,2,3,4,5,6};
// int sz=sizeof(arr)/sizeof(arr[0]);
// for(a=0  ;a<sz;a++)
// {
// 	printf("%d\n",sz);
// 	printf("arr[%d]=%p",a,&arr[a]);
//	}
//char arr[][4]={{1,2,3},{4,5,6,7.8},{4,5,6,7.8}};


    char arr[1];
    gets(arr);
	return 0;
}
