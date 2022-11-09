#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
///*int main()
//{
//	int x,y;
//	scanf("%d",&x);
//	y=2*x*x+x+8;
//	printf("%d",y);
//	return 0;
//}
//
//int main()
//{
//    int sum1,sum2;
//    scanf("%d%d",&sum1,&sum2);
//    printf("%d %d %d %d %d",sum1+sum2 ,sum1-sum2 ,sum1*sum2,sum1/sum2,sum1%sum2);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    printf("%d %d %d\n",a%10,a/10%10,a/100);
//    return 0;
//}
//int main()
//{
//	int a,b,c,a1,a2,a3,b1,b2,b3,c1,c2,c3;
//	scanf("%d%d%d",&a,&b,&c);
//
//	a1=pow(a,1);
//	a2=pow(a,2);
//	a3=pow(a,3);
//	b1=pow(b,1);
//	b2=pow(b,2);
//	b3=pow(b,3);
//	c1=pow(c,1);
//	c2=pow(c,2);
//	c3=pow(c,3);
// printf("%-9d%-9d%-9d\n",a1,a2,a3);
// printf("%-9d%-9d%-9d\n",b1,b2,b3);
// printf("%-9d%-9d%-9d",c1,c2,c3);
//	return 0;
//}
//int main()
//{
//	int a,b,c,d;//a首项，b末项，d公差，c和
//	scanf("%d%d%d",&a,&b,&d);
//	 c=(a+b)*((b-a)/d+1)/2;	//有(a-b)/d+1项
//	printf("%d",c);
//	return 0;
//}*/
////int main()
////{
////	int a;
////	float l,s;
////	#define PI 3.14159
////	scanf("%d",&a);
////	l=2*PI*a;
////	s=PI*pow(a,2);
////	printf("%.2f %.2f",l,s);
////	return 0;
////}#include <stdio.h>
////#include <math.h>
////int main()
////#define PI 3.14159
////{
////    double r,h,s;
////    scanf("%lf%lf",&r,&h);
////    s=PI*2*r*h+PI*pow(r,2)*2;
////    printf("%.2f",s);
////    return 0;
////}
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////    double A(x1,y1),B(x2,y2),a;
////    a=sqrt((pow(x1-x2),2)+pow((y1-y2),2));
////    printf("%.2f",a);
////    return 0;
////int main()
////{
////	double a;
////	if(a>=0)
////	{
////		printf("%.2f",a);
////	}
////	else
////	{
////		a
////		printf("%.2f",a)
////	}
////	return 0;
////}
////int main()        //求绝对值
////{
////	float a;
////	scanf("%f",&a);
////	if(a>0||a==0)
////	{
////		printf("%.2f",a);
////	}
////	else
////	{
////		a=-1*a;
////		printf("%.2f",a);
////	}
////	return 0;
////}
////int main()        //两点间距离
////{
////	float a,b,d,e,f,g,c;
////	scanf("%f %f %f %f",&d,&e,&f,&g);
////	a=d-f;b=e-g;
////	c=sqrt(a*a+b*b);
////	printf("%.2f",c);
////	return 0;
////
////}
////#include <stdio.h>
////#include <math.h>
////int main()    // 已知三边求三角形面积（海伦公式）
////{
////    float a,b,c,s,d;
////    scanf("%f%f%f",&a,&b,&c);
////    d=(a+b+c)/2;
////    s=sqrt(d*(d-a)*(d-b)*(d-c));
////    printf("%.2f",s);
////    return 0;
////}
////int main()    //一元二次方程求解
////{
////	double a,b,c,x1,x2,der,max,min;
////	scanf("%lf %lf %lf",&a,&b,&c);
////	der=b*b-4*a*c;
////	x1=(-b+sqrt(der))/(2*a);
////	x2=(-b-sqrt(der))/(2*a);
////	if(x1>x2)
////	{
////		max=x1;min=x2;
////	}
////	else{
////		max=x2;min=x1;
////	}
////	if(b*b-4*a*c>=0)
////	{
////		printf("%7.2f%7.2f",max,min);
////	}
////	else{
////		printf("error");
////	}
////	return 0;
////}
////int main()    //银行利率问题
////{
////	double i=0;
////	double w=0.0225;
////	double deposit,year,plus;
////	scanf("%lf%lf",&year,&deposit);
////
////	while(i<year)
////		{   i++;
////			deposit=deposit*w+deposit;
////		}
////
////	printf("%.6f",deposit);
////	return 0;
////
////}
//
////int main()
////{
////	int s,v,a,b,c,d,e;
////	s=a*b+b*c+c*a+(b-2*d)*e*4-b
////	v=a*
////	return 0;
//
////int main()        //判断奇偶数
////{
////	int a;
////	scanf("%d",&a);
////	if(a==0){
////		printf("even");
////	}
////	else if(a%2==1||a%2==-1){
////		printf("odd");
////	}
////	else if(a%2==0)
////	{
////		printf("even");
////	}
////	return 0;
////}
////int 	main()  //公园 门票
////{
////	#define price 50
////	int a;//买a张票
////	scanf("%d",&a);
////
////		if(a<30){printf("%d",a*price);
////		}
////	if(a>=30){
////		printf("%d",a*(price-2));
////	}
////
////	return 0
////}
////int main()    //两个数比较大小
////{
////	int a,b,min;
////	scanf("%d%d",&a,&b);
////	if(a>=b){
////		min=a;
////		printf("%d %d",b,min);
////
////	}
////	else
////	{
////		printf("%d %d",a,b);
////	}
////	return 0;
////}
//
//
////	int a=0,b=0,c=0i
////int main()        //判断数字大小
////{
////	int a=0,b=0,c=0,max=0,min=0,maj=0;
////	scanf("%d%d%d",&a,&b,&c);
////	if(a>b)
////	{
////		max=a;
////		maj=b;
////	}
////	else
////	{
////		max=b;
////		maj=a;
////}
////if(max>c)
////{
////	if(c>maj){
////		min=maj;
////		maj=c;
////	}
////	if(maj>c)
////	c=min;
////}
////else{
////	min=maj;
////	maj=max;
////	max=c;
////}
////
////printf("%d %d %d",max,maj,min);
////	return 0;
////}
////int main()
////{
////	char ch;
////	ch=getchar();
////	if(ch>='a'&&ch<='z')
////	{
////		ch-=32;
////		printf("%c",ch);
////	}
////	else
////	{
////		printf("%c",ch);
////	}
////	return 0;
////}
////int main()        //字母序数
////{
////	char ch;
////	ch=getchar();
////	if(ch>='a'&&ch<='z')
////	{
////		ch-=96;
////
////	}
////		 if(ch>='A'&&ch<='Z')
////{
////
////		ch=ch-64;
////
////}
////	return 0;
////}
////int main()        //判断ASCII大小
////{
////	char a,b,c,max;
////	scanf("%c %c %c",&a,&b,&c);
////	if(a>b)
////	{
////		max=a;
////	}
////	else {
////		max=b;
////	}
////	if(c>max)
////	{
////	max=c;
////	}
//// printf("%c",max);
////	return 0;
////}
////int main()
////{
////	char a;
////	a=getchar();
////	   if(a>='A'&&a<='Z')
////		{
////		printf("upper");
////}
////	else if(a>='a'&&a<='z')
////	{
////		printf("lower");
////	}
////	else if(a>='0'&&a<='9')
////	{
////	printf("digit");
////	}
////
////	else{
////		printf("other");
////	}
////
////	return 0;
////}
////int main()        //判断水仙花数
////{
////	int a=0,b=0,c=0,d=0;
////	scanf("%d",&d);
////	a=d/100;
////	b=d/10%10;
////	c=d%10;
////	if(a*a*a+b*b*b+c*c*c==d)
////	{
////		printf("yes");
////	}
////	else
////	{
////		printf("no");
////	}
////	return 0;
////
////}
////int main()    //判断闰年
////{
////	int a,b;
////	scanf("%d",&a);
////	if(a%400==0||a%4==0&&a%100!=0)
////	{
////		printf("yes");
////	}
////
////	else
////	{
////		printf("no");
////	}
////	return 0;
////}
////int main()        判断是否组成三角形
//                    /*学会使用abs定义int绝对值
//                    fabs定义float绝对值
////{*/
////	int a,b,c;
////	scanf("%d%d%d",&a,&b,&c);
////	if(abs(a-b)<c&&a+b>c||a+c>b&&abs(a-c)<b||c+b>a&&abs(c-b)<a)
////	{
////		printf("Yes");
////	}
////	else
////	{
////		printf("No");
////	}
////	return 0;
////}
//
////int main()  //定义是否直角三角形
////{
////	int a,b,c,max,maj,min;
////	scanf("%d%d%d",&a,&b,&c);
////	if(a>b)
////	{
////		max=a;
////		maj=b;
////	}
////	else{
////		max=b;
////		maj=a;
////	}
////	if(c>max)
////	{
////		min=maj;
////		maj=max;
////		max=c;
////
////	}
////	else if(c>maj)
////	{
////			min=maj;
////		maj=c;
////	}
////	if(min*min+maj*maj==max*max)
////	{
////		printf("yes");
////	}
////	else
////	{
////		printf("no");
////	}
////	return 0;
////}
////int main()        //判断是否直角三角形2
////{
////	int a,b,c;
////	scanf("%d%d%d",&a,&b,&c);
////	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
////	{
////		printf("yes");
////	}
////	else{+
////	printf("no");}
////	return 0;
////}
////int main()
////{
////	int a,b;
////	scanf()
////	return 0;
////}
//int main()
//{
//	char ch;
//	ch=getchar();
//	printf("%4c\n",ch);
//	printf("%3c%c%c\n",ch,ch,ch);
//	printf("%2c%c%c%c%c\n",ch,ch,ch,ch,ch);
//	printf("%3c%c%c\n",ch,ch,ch);
//	printf("%4c\n",ch);
//	return 0;
//}
//int main()    //员工工资
//{
//	#define c 1500.00	//基本工资1500
//	double a,b,d;//a为销售额，b为提成,d为薪水
//	scanf("%lf",&a);
//	d=c+b;
//	if(a<=10000)
//	{
//	b=a*0.05;
//	d=c+b;
//	printf("%.2lf",d);
//	
//	}
//	else if(a>10000&&a<=50000)
//	{
//		b=10000*0.05+(a-10000)*0.03;
//		d=c+b;
//		printf("%.2lf",d);
//	}
//	else if(a>50000)
//	{
//		b=10000*0.05+40000*0.03+(a-50000)*0.02;
//		d=c+b;
//		printf("%.2lf",d);
//	}
//	return 0;
//}
//int main()        //分数确定等级
//{
//	int a;
//	scanf("%d",&a);
//	if(a>=90&&a<=100)
//	{
//		printf("A");
//}
//	if(a>=80&&a<=89)
//	{
//		printf("B");
//	}
//	if(a>=70&&a<=79)
//	{
//		printf("C");
//	}
//	if(a>=60&&a<=69)
//	{
//		printf("D");
//	}
//	if(a<60)
//	{
//		printf("E");
//	}
//	
//	return 0;
//}
//int main()            //超市购物打折
//{
//	double a;//a为销售金额
//	scanf("%lf",&a);
//	if(a<500)
//	{
//		printf("%.2lf",a);
//	}
//	if(a>=500&&a<1000)
//	{
//		a*=0.95;
//		printf("%.2lf",a);
//	}
//	if(a>=1000&&a<3000)
//	{
//		a*=0.9;
//		printf("%.2lf",a);
//	}
//	if(a>=3000&&a<5000)
//	{
//		a*=0.85;
//		printf("%.2lf",a);
//	}
//	if(a>=5000)
//	{
//		a*=0.8;
//		printf("%.2lf",a);
//	}
//	return 0;
//}
//int main()
//{
//	int x,y,c;
//	
//	scanf("%d",&x);
//	if(x<-2)
//	{
//		y=7-2*x;
//		printf("%d",y);
//	}
//	if(x>=-2&&x<3)
//	{
//		y=5-abs(3*x+2);
//			printf("%d",y);
//	}
//	if(x>=3)
//	{
//		y=3*x+4;
//			printf("%d",y);
//	}
//	return 0;
//
//}
//int main()        //判断那一年哪一月有几天
//{
//	int a,b,c;
//	scanf("%d%d",&a,&b);//a年b月有c天
//	if(a%4==0&&a%100!=0||a%400==0)
//	{
//		switch (b){
//
//		case 1: printf("31");break;
//		case 3: printf("31");break;
//		case 5: printf("31");break;
//		case 7: printf("31");break;
//		case 8: printf("31");break;
//		case 10: printf("31");break;
//		case 12: printf("31");break;
//		case 2: printf("29");break;
//		case 4: printf("30");break;
//		case 6: printf("30");break;
//		case 9: printf("30");break;
//		case 11: printf("30");break;
//	}
//	}
//	else
//	{
//		switch(b){
//
//		case 1: printf("31");break;
//		case 3: printf("31");break;
//		case 5: printf("31");break;
//		case 7: printf("31");break;
//		case 8: printf("31");break;
//		case 10: printf("31");break;
//		case 12: printf("31");break;
//		case 2: printf("28");break;
//		case 4: printf("30");break;
//		case 6: printf("30");break;
//		case 9: printf("30");break;
//		case 11: printf("30");break;
//	}
//	}
//	
//	
//	return 0;
//}
//int main()         //四则运算（switch中的if嵌套语句）
//{
//	double s1,s2;
//	char op;
//	scanf("%lf",&s1);
//	getchar();
//	
//	op=getchar();
//	getchar();
//	scanf("%lf",&s2);
//	switch(op)
//	{
//		case '+':printf("%.2lf",s1+s2);break;
//		case '-':printf("%.2lf",s1-s2);break;
//		case '*':printf("%.2lf",s1*s2);break;
//		case '/':if(fabs(s2)<1e-10)
//		{
//			printf("Wrong input");
//			break;
//		}else{
//			printf("%.2lf",s1/s2);
//			break;
//		};
//
//	default:printf("Wrong input");break;
//}
//
//	return 0;
//}
//int main()        //输出绝对值最大的数，绝对值相同输出靠前的一个数
//{
//	int a,b,c,d;
//	scanf("%d%d%d",&a,&b,&c);
//	if(abs(a)>=abs(b))
//	{
//		d=a;
//
//	}
//	else{
//		d=b;
//	}
//	if(abs(d)>=abs(c))
//	{
//		;
//	}
//	else{
//		d=c;
//	}
//	printf("%d",d);
//	return 0;
//}
//int main()        //oj39
//{
//	int a,b,c,d=0;    //输入a个数字
//	scanf("%d",&a);
//	for(b=0;b<a;b++)
//	{   c=0;
//		scanf("%d",&c);
//		d+=c;
//	}
//	printf("%d",d);
//	return 0;
//}
//int main()        //1+1/3+1/5+..1/n
//{
//	int a=1,c;
//
//	float b=0.0;
//	scanf("%d",&c);
//	for(a=1;a<=2*c-1;a=a+2)
//	{
//	 b=b+(1/(a*1.0));
//	
//	}
//	printf("%.2f",b);
//	return 0;
//}
//int main() v          //1-2/3+3/5....
//{
//	double a=0,b=1,c=0,d=0;
//	scanf("%lf",&d);
//	for(a=1;a<=d;a=(fabs(a)+1))
//	{
//		if((int)a%2==0)
//		{
//			a*=-1.0;
//		}
//		else
//		{
//			a=a;
//		}
//		c+=(a/b);
//		b+=2;
//		
//	}
//	printf("%.3lf",c);
//	return 0;
//}
//int main()
//{
//	double a,b;
//	scanf("%lf%lf",&a,&b);
//	printf("%lf",a+b);
//	return 0;
//}
//int main()    //0xc0c0c0c0表示无穷小 0x3f3f3f3f表示无穷大
//{
//	int a,b,c,d,max=0xc0c0c0c0,max2;
//	scanf("%d",&a);  //输入a个数
//	for(b=0;b<a;b++)
//	{
//
//		scanf("%d",&c);
//		if(c>max)
//		{
//		max=c;
//		}
//		else{
//			max=max;
//		}
//	}
//		printf("%d",max);
//	return 0;
//	
//}
//int main()        求及格率
//{
//	float a=0,b=0,c=0;
//	float d=0;
//	scanf("%f",&a);  //输入a个数
//	
//	for(b=0;b<a;b++)
//	{
//		scanf("%f",&c);
//		if(c<60)
//		{
//			d++;
//		}
//		
//	}
//	printf("%.2f",d*1.0/a);
//	return 0;
//}
//int main()        输出负数正数0的个数
//{
//	int a=0,b=0,c=0,d=0,e=0,f=0;
//	scanf("%d",&a);
//	for(b=0;b<a;b++)
//	{
//		scanf("%d",&c);
//		if(c>0)
//		{
//			d++;
//		}
//		if(c<0)
//		{
//			e++;
//}
//		if(c==0)
//		{
//			f++;
//		}
//	}
//	printf("%d %d %d",e,f,d);
//	return 0;
//}
//int main()    //输出数字中奇数的乘积
//{
//	int a= 0,b =0,c=0,d=1;
//	scanf("%d",&a);  //输入a个整数
//	for(b=0;b<a;b++)
//	{
//		scanf("%d",&c);
//		if(c%2==1)
//		{
//			d*=c;
//		}
//		else{
//			;
//		}
//	}
//	printf("%d",d);
//	return 0;
//}
//int main()        //log表示ln
//{
//	int b,c;
//	double a,d;
//	
//	scanf("%d%d",&b,&c);
//	for(;b<=c;b++)
//	{
//		d=log(b);
//	printf("%4d%8.4lf\n",b,d);
//	};
//	return 0;
//}
//int main()
//{
//	int a,b,c=1,d,e;
//	scanf("%d",&a);
//	for(b=0;b<a;b++)
//	{
//		scanf("%d",&d);
//		for(;;)
//		{
//			c*=b;
//		}
//	}
//	return 0;
//}
//int main()        //阶乘表
//{
//	double a,b,c,d=1.0,e;
//	scanf("%lf",&a);//输入a个数 求n个数的阶乘
//	for(b=1.0;b<=a;b++)
//	{
//		printf("%-4.0lf",b);
//		d*=b;
//		printf("%-20.0lf\n",d);
//
//
//
//	}
//
//	return 0;
//}
//int main()            OJ49
//{
//	double a,b,c=0,d=0,e,f;
//    scanf("%lf%lf",&a,&b);
//    for(;a<=b;a++)
//    {
//    	if((int)a%2==0)
//    	{
//			c=c+a*a;
//
//		}
//		else if((int)a%2==1)
//		{
//			d=d+a*a*a;
//		}
//	}
//	printf("%.0lf %.0lf",c,d);
//	return 0;
//}
//int main()
//{
//	double a,b,c,d=1,e=0;
//	scanf("%lf",&a);   //输入a个字符的阶乘
//	for(b=1;b<=a;b++)
//	{
//		for(c=1;c<=b;c++)
//		{
//			d=1;
//			d*=c;
//		}
//			e+=d;
//	}
//	printf("%.0lf",e);
//	return 0;
//}
//int main()        //  ##  阶乘之和  ##
//{
//	int a,b=0,c=0,d=0,e=0,f=0,g=0;
//	scanf("%d",&a);
//
//	for(b=1;b<=a;b++)
//	{
//		c=0;
//		d=1;
//		for(c=1;c<=b;c++)
//		{
//			d*=c;
//		}
//			e+=d;
//	}
//		printf("%d",e);
//		return 0;
//}
//#include<stdio.h>
//int main(){
//	int i=0;
//	int sum=0;
//	int sum1=0;
//	int n=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int j=0;
//		sum=1;//重点就在于每次i计算完毕后要将sum的值再次换为1
//		for(j=1;j<=i;j++)
//		{
//		sum*=j;
//		}
//        sum1+=sum;
//	}
//	printf("%d\n",sum1);
//	return 0;
//}
//int main()        //平方根的和
//{
//	double a=0,b=0,c=0,d=0;
//	scanf("%lf%lf",&b,&a);   //从b开始前a项和
//	for(c=0;c<a;b=sqrt(b),c++)
//	{
//		d+=b;
//	}
//	printf("%.2lf",d);
//	return 0;
//}
//int main()
//{
//	double a=0,b=0,c=0,d=0,e=0,f,g,h;
//	scanf("%lf%lf",&a,&b);
//	f=b;      //a+aa+aaa n个
//	for(c=0;c<a;c++)
//	{
//		e+=b;
//		b=b*10+f;
//		
//	}
//	printf("%.0lf",e);
//	return 0;
//	
//}
//int main()            //三角形面积
//{
//	float a,b,c,d,e;
//	printf("三边之长：\n");
//	scanf("%f%f%f",&a,&b,&c);
//	d=(a+b+c)/2;
//	e=sqrt(d*(d-a)*(d-b)*(d-c));
//	printf("三角形面积为：%f",e);
//	return 0;
//}
//int main()        //x-x^3/3!+x^5/5!...oj53
//{
//	double a=1,b=10,c=1,d=1,e=0,f=0,x=0;
//	scanf("%lf",&x);
// 	for(a=1;a<=2*b-1;a++)
//	{
//
//		c*=a;
//
//		if(a>=d)
//		{
//			d+=2;
//		e+=pow(x,a)/c;
//			x*=-1;
//			continue;
//		}
//	}
//	printf("%.3lf",e);
//	return 0;
//}
//int main()
//{
//	double a,b,c,d,e,n,x=0;
//	scanf("%lf",&n);		//第n天还剩一个桃子
//	//n-1-- 3    n-2  --7   n-3--15
//	// 共x个桃子
//	x=pow(2,n)+2;
//	printf("%.0lf",x);
// 	return 0;
//
//}
//int main()        //阶乘
//{
//	double a=0,b=0,c=1,d=0,e=0,f=0;
//	scanf("%lf",&b);
//	for(a=1;a<=b;a++)
//	{
//		c*=a;
//	}
//	printf("%lf",c);
//	return 0;
//}
//int main()        //阶乘相加
//{
//	double a,b=1,c=1,d=0,e=1;
//	scanf("%lf",&b);
//	for(a=1;a<=b;a++)
//	{
//        c*=a;
//        d+=c;
//	}
//	printf("%lf",d);
//	return 0;
//}
//int main()        未学递归OJ54
//{
//	int a,b,c=0,d=1,e=0,f;
//
//	scanf("%d",&b);
//	for(a=1;a<=b;a++)
//	{
//
//		 d=d+a/3;
//
//	}
//		
//	printf("%d",d);
//	return 0;
//}
//int main()
//{       //本金为x
//	double a=0,x=0,c=0;
//	int b=0,d=0,e=0,f=0;
//	scanf("%lf",&a);	 //a 月 息
//	for(b=5;b>=1;b--)
//	{
//		c=1.0+12*a;
//		x=(x+1000.0)/c;
//
//	}
//	printf("%.2lf",x);
//	return 0;
//}
//int main()
//{
//	int a,b,c,d,e;
//	scanf("%d",&e);
//	b=Is_prime(e);
//	if(b==1)
//	{
//		printf("Yes");
//	}
//	if(b==0)
//	{
//		printf("No");
//}
//	return 0;
//}
//double Add_factorial(int a);
//int main()
//{
//	int a,c;
//	double b;
//	scanf("%d",&a);
//	c=Add_factorial(a);
//	printf("%d",c);
//}
//double Add_factorial(int a);
//int main()
//{
//	double b=0,c,d,e;
//	double a;
//	scanf("%lf",&a);
//
//	c=Add_factorial(a);
//	printf("%lf",c);
//	return 0;
//}
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
/*int main()
{
    double n;
    scanf("%lf",&n);
    int i;
    for(i=1;i<=n;i++){
        double sum = 0.0;
        double num1 = 1.0;
        for(int j = 21;j<=i;j++){
            num1 *= j;//计算阶乘
        }
        sum += num1;
        if(sum>=n){
            break;//判断是否大于n
        }
    }
    printf("m<=%d",i-1);
    return 0;
}
/*————————————————
版权声明：本文为CSDN博主「杀之舞者」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_22337509/article/details/112425117/**/
//int main()
//{
//	int a,b,c,d,max;
//	while(a>=0)             //OJ59
//	{
//		scanf("%d",&a);     //此时输入最后一个-1计入成绩
//		if(a>=max)
//		{
//			max=a;
//		}
//		else
//		{
//			;
//		}
//	}
//	printf("%d",max);
//	return 0;
//}
//int print(int x);                 //递归运用经典例题
//int main()
//{
//	int a,b;
//	scanf("%d",&a);
//	b=print(a);
//	return 0;
//}
//int print(int x)
//{
//	if(x>9)
//	{
//	print(x/10);}
//	printf("%d ",x%10);    //若此句在上方if语句下方则顺序输出
//							//若此句在if语句下方则逆序输出
//}
//int main()
//{
//	int a,b,c=1,d=0,max=0;
//	scanf("%d%d",&a,&b);
//	if(a>=b)
//	{
//		max=a;
//	}
//	else{
//		max=b;
//	}
//	for(;c<max;c++)
//	{                           //【插眼】是否可以把a的约数存在arer里在做比较
//		if(a%c=0&&b%c=0)
//		{
//			d=c;
//		}
//		else
//		{
//			d=a*b;
//		}
//
//	}
//	printf("%d",d);
//	return 0;
//}
//int main()            求最大公约时间受限.
//{
//	int a,b,c,d,max;
//	scanf("%d%d",&a,&b);	        //输入a,b的最大公约数
//	if(a>=b)
//	{
//		max=a;
//	}
//	else{
//		max=b;
//	}
//	for(c=1;c<max;c++)
//	{
//	if(a%c==0&&b%c==0)
//	{
//		d=c;
//	}
//
//}
//printf("%d",d);
//	return 0;
//}
//int main()
//{
//	int j=28,k,*p=&j;
//	char c1,c2='f',*q;      //c2=102
//	k=*p*2-3;
//	q=&c1;
//	*q='g';
//	printf("k=%d\nc1=\'%c\'\n",k,*q);
//	return 0
//}
//int main()            //求公约数 公倍数
//{                             【算法】a*b的最小公倍数=a*b/ a和b的最大公约数
//	int a,b,bcs,cs,ys,s;
//	double gbs;
//	
//	scanf("%d%d",&a,&b);
//	
//	if(a>=b)
//	{
//		bcs=a;
//		cs=b;
//	}
//	else
//	{
//		bcs=b;
//		cs=a;
//	}
//	s=bcs/cs;
//	ys=bcs%cs;
//	while(ys!=0)
//	{
//	bcs=cs;
//	cs=ys;
//
//	ys=bcs%cs;
//	}
//	gbs=1.0*a*b*1.0/cs*1.0;
//	printf("%d %.0lf",cs,gbs);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	char ch = 0;
//	char arr[]={0};
//	for (i=0; ch != '@'; i++)
//	{
//
//		ch = getchar();
//		if (ch =='@')
//		{
//			break;
//		}
//		arr[i] = ch;
//			if (ch >= 'A' && ch <='Z')
//			{
//				ch = ch + 32;
//		}
//
//			else if (ch == 'z')
//			{
//				ch = 'a';
//			}
//			else if (ch >= 'a' && ch <= 'y')
//			{
//				ch = ch + 1;
//			}
//			arr[i] = ch;
//		printf("%c",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//    
//    return 0;
//}
//int main()            【oj67十进制转化为九进制】
//{
//    int arr[] = { 0 };
//    int i = 0,d=0;
//    int a = 0,b=0,c=0,yushu=0;
//    scanf("%d", &a);
//        c = a % 9;
//    for (i=0; (c / 9 )<=9;)
//    {
//        yushu = c;
//        arr[0] = yushu;
//        printf("%d",arr[0]);
//        d = a / 9; 
//        c=d;
//        c = c % 9;
//    }
//    return 0;
//}
int qjz(int a,int z);
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0,z=0;
//    scanf("%d", &z);
//    scanf("%d", &a);
//    qjz(a,z);
//    return 0;
//}
//int qjz(int a,int z)
//{
//    int x = 0;
//        for (x = 0; x < z; x++)
//        {
//
//        }
//}
//int main()
//{
//    int a = 0;
//    double b;
//
//    scanf("%d", &a);
//    b = a * 1024 * 1024/4;
//    printf("%.0lf", b);
//    return 0;
//}
//int main()
//
//{
//    int a, b, c;
//
//    scanf("%d", &a);
//    if (a % 2 == 1)
//    {
//        printf("%%%%%%聚聚");
//    }
//    if (a % 2 == 0)
//    {
//        printf("聚聚NB");
//    }
//    return 0;
//}
//int main()
//{
//    int a, b, c, d, e, f, g=0;
//    scanf("%d:%d:%d\n", &a,&b,&c);
//    scanf("%d:%d:%d\n",&d,&e,&f);
//    scanf("%d",&g);
//	int i,j,k;
//	i=(f-c);
//	j=(e-b)*60;
//	k=(d-a)*3600;
//	int sum=(i+k+j)/g;
//    printf("%d",sum);
//    return 0;
//}
//int main()
//{
//    int a=0,e=0,f=0,g=0,h=0,i=0;
//    scanf("%d", &a);
//    getchar();
//    char b, c, d;
//    for (e = 0; e < a; e++)
//    {
//        b = getchar();
//        if (b =='A')
//        {
//            f++;
//        }
//        else if (b == 'D')
//        {
//            g--;
//        }
//        else if (b == 'W')
//        {
//            h++;
//        }
//        else if (b == 'S')
//        {
//            i--;
//        }
//
//    }
//    if (f + g == 0 && h + i == 0)
//    {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a == 514919 || a == 541919 || a == 514199 || a == 54919 || a == 51499 || a == 54199 || a == 5499)
//    {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//    return 0;
//}
//int main()
//{
//    int a=0, b=0, c=0, d=0, e=0, f=0,g=0;
//    scanf("%d", &a);
//    getchar();
//    scanf("%d", &b);
//    getchar();
//    scanf("%d", &c);
//    getchar();
//    scanf("%d", &d);
//    getchar();
//    scanf("%d", &e);
//    getchar(); 
//    scanf("%d", &f);
//    getchar(); 
//    scanf("%d", &g);
//    int h = 0, i = 0, j = 0;
//    h = (d - a) * 3600;
//    i = (e - b) * 60;
//    j = f - c;
//    int sum = h + i + j;
//    printf("%d", sum/ g);
//    return 0;
//}
//int main()
//{
//    int a=0, b=0, c=0, d=0,e=0,f=0;
//    int n = 0;
//     int    arr[100] = { 0 };
//    
//       while (scanf("%d", &n) != EOF)
//    {    
//        for (b = 0; b < n; b++)
//        {
//            scanf("%d %d", &c,&d);
//            
//            e = e + c + 20 * d;
//        }
//        arr[f] = e;
//        e = 0;
//        f++;
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
//#include<stdio.h>
//
//int main()
//{
//    int n, i, Y, N, sum = 0, x, j = 0, k = 0;
//    int count[100] = { 0 };
//    while (scanf("%d", &n) != EOF) {
//        x = n;
//        for (i = 0; i < x; i++)
//        {
//            scanf("%d %d", &Y, &N);
//            sum = sum + Y + N * 20;
//
//
//        }
//
//        j++;
//        count[j] = sum;
//        sum = 0;
//        //  printf("%d\n",count[j]);
//        //  j++;
//
//
//    }
//    for (k = 1; k <= j; k++)
//    {
//        printf("%d\n", count[k]);
//    }
//    
//    return 0;
//}
//int main()
//{
//    int a=0, b, c, d,M,k;
//    scanf("%d%d", &M, &k);
//    for (; M != 0; M--)
//    {
//        a++;
//        if (a % k == 0)
//        {
//            M++;
//        }
//    }
//    printf("%d", a);
//    return 0;
//}
//int main()
//{
//    int a, b, c=0, d, e, f,y=0,x=0;
//    scanf("%d", &a);        //a时开始走
//    while (scanf("%d", &b) !=3)
//    {
//        if (b == 3)
//        {
//            break;
//        }
//        scanf("%d", &c);   //c时改变方向
//
//        if (b == 1)
//        {
//            x =x+ (c-a) * (-10);
//        }
//        if (b == 2)
//        {
//            x =x+ (c-a) * 10;
//        }
//            y =y+ (c - a) * 10;
//            a = c;
//       
//        
//    }
//    printf("%d %d", x, y);
//    return 0;
//    
//}
//
// 
//int main()
//{
//    int a=0, b=0, c=0, d=0, e=0, f,y=0,x=0,turn=0;
//    scanf("%d", &a);        //第一个方向改变时间
//        y = a * 10;
//    for (b = 0; scanf("%d",&b)!=3; )
//
//    {
//        if (b == 3)
//        {
//            break;
//        }
//        scanf("%d", &c);
//        if (b == 1)
//        {
//            turn--;
//        }                        //turn=-2||2南
//        if (b == 2)             //turn=0北
//                                //turn=1东
//                                //turn =-1西
//        {
//            turn++;
//        }
//        if (turn %4== -2 || turn%4 == 2)
//        {
//            y =y- (c - a) * 10;
//        }
//        if (turn %4 == 0)
//        {
//            y =y+ (c - a) * 10;
//        }
//        if (turn%4 == 1||turn%4==-3)
//        {
//            x = x + (c - a) * 10;
//
//        }
//        if (turn %4== -1||turn%4==3)
//        {
//            x = x - (c - a) * 10;
//        }
//        a = c;
//        
//    }
//    printf("%d %d", x, y);
//    return 0;
//}
//void main()
//{
//    int a, b, c, d;
//    scanf("%d", &a);
//    for(b=0;.3
//        ;)
//    return 0;
//}


//void main()
//{   
//    int a, i,b=0,c=0,x=0;
//    scanf("%d", &a);
//    getchar();
//    int arr[1000] = {};
//    for (i = 0; i < a; i++)
//    {
//        ch = getchar();
//        arr[i] =ch-48;
//        getchar();
//        b =  b+arr[i]*2  + arr[i + 1];
//        c = b * 2 + arr[i + 1];
//        }
//   
//    
//   
//    printf("%d",c );
//    return 0;
//}
//int main1()
//{
//    int a, b;
//    scanf("%d", & a);
//    return 0;
//}
//int main()
//{
//    int a, b;;
//    scanf("%d", &a);
//    return 0;
//}
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    if (b == 0)
//    {
//        printf("1");
//    }
//    printf("%d", a / b);
//
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    char c;
//    scanf("%d%c%d", &a, &c, &b);
//    switch (c)
//    {
//    case'+':printf("%d\n", a + b); break;
//    case'-':printf("%d\n", a - b); break;
//    case'*':printf("%d\n", a * b); break;
//    case'/':
//        if (b == 0)
//        {
//            printf("-1");
//        }
//        else if (a % b != 0)
//        {
//            printf("%.1f", a * 1.0 / b * 1.0);
//        }
//        else {
//            printf("%d", a / b);
//        }
//        break;
//    default:printf("-1"); break;
//    }
//    return 0;
//}
//int main()
//{
//
//}
//int main()
//{
//    double a, b=0, c, d, e, f;
//    char ch;
//    double arr[99999] = {};
//    scanf("%lf", &a); //输入a个数
//    int i;
//    getchar();
//    for ( i = 0; i < a; i++)
//    {
//        
//        ch = getchar();
//        
//        if (ch >= '0' && ch <= '9')
//        {
//            arr[i] =(double) ch - 48*1.0;
//            getchar();
//        }
//    }
//    b = arr[0] * 2 + arr[1];
//    for (i = 2; i < a; i++)
//    {
//        b = 2 * b + arr[i];
//    }
//    if (a == 1 && arr[0] == 1)
//        b = 1;
//    printf("%.0lf", b);
//    return 0;
//}
#include<stdio.h>
#include<math.h>

//int main()        
//{
//    int n, a, s, i = 1, sum = 0;
//    scanf("%d\n", &n);
//    s = n;
//    while (scanf("%d", &a), i <= s)
//    {
//        n--;
//        i++;
//        sum += a * (int)pow(2, n);//2进制数转化为十进制
//    }
//    printf("%d", sum);
//    return 0;
//}
//
//int main()
//{
//
//}
//#include<stdio.h>
//char grade(int n);
//int main()
//{
//    int score;
//    scanf("%d", &score);
//    printf("%c", grade(score));
//    return 0;
//}
//char grade(int n)
//{
//    if (n >= 90)
//        printf("A");
//    else if (n >= 80)
//        printf("B");
//    else if (n >= 70)
//        printf("C");
//    else if (n >= 60)
//        printf("D");
//    else
//        printf("E");
//    return 0;
//}
//int main()
//{
//    char ch='0';
//    scanf("%c",&ch);
//    if (ch >= '0' && ch <= '9')
//    {
//        printf("1");
//    }
//    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//    {
//        printf("A");
//    }
//    else if(!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')&&!(ch >= '0' && ch <= '9')) {
//        printf("#");
//    }
//    return 0;
//}

//int main()
//{
//    /*char arr[] = "hello";
//    char arr1[] = { 'h','e','l','l','o' };
//   
//    char arr3[] = { "hello" };
//   const char* arr4[] = { "hello" };
//   int a;
//   printf("%d", &a);*/
//    /*int a;
//    scanf("%d", &a);
//    if (a > 1)
//    {
//        printf("1");
//    }
//    else if (a == 1)
//    {
//        printf("0");
//    }
//    else
//        
//        printf("2");
//}*/
//    /*char arr[] = { 110,111,112,0,123 };
//    printf("%s\n", arr)
//    return 0;
//  */
//}
#include <stdio.h>
#include <math.h>
//int main()
//{
//    float a, b, c,x1,x2,min,max;
//    scanf("%f%f%f", &a, &b, &c);
//    float d = b * b - 4 * a * c;
//    if (d < 0)
//    {
//        printf("error");
//    }
//    else if (d >=0)
//    {
//        x1 = (-b + sqrt(d)) / (2 * a);
//        x2 = (-b - sqrt(d)) / (2 * a);
//
//        if (x1 > x2)
//        {
//            min = x2;
//            max = x1;
//            printf("%.0f %.0f", min, max);
//        }
//        if (x1 < x2)
//        {
//            min = x1;
//            max = x2;
//            printf("%.0f %.0f", min, max);
//        }
//        if (x1 == x2)
//        {
//            
//            printf("%.0f", x1);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    char S[1000000] = {};
//    
//   char  T[1000000] = {};
//    int flag = 0;
//    for(int i=0;S[i]!='\0';i++)
//    {
//        for (int j = 0; T[j] != "\0"; j++)
//        {
//            if (S[i] = T[j])
//            {
//                flag = 1;
//                break;
//           }
//        }
//    }
//    if (flag == 1)
//    {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//    return 0;
//}
//int isprime(int a);
//int huiwen(int a);
//int main()                        【ZZUoj新生周赛】
//{
//    int a=0, b=0, c=1, d=0, e=0,l,r=0,count=0;
//    scanf("%d%d", &l, &r);
//  
//    int flag=0, g=0 ;
//    for (; l <= r; l++)
//    {
//        flag = isprime(l);
//        g = huiwen(l);
//        if (flag == 1 && g == 1)
//        {count++; }
//    }
//    printf("%d", count);
//    return 0;
//}
//int isprime(int l)
//{
//    int b=0, c=1;
//    for (b = 2; b <=sqrt(l); b++)
//    {
//        if (l % b == 0)
//        {
//            c = 0;
//            break;
//        }
//    }
//    return c;
//}
//int huiwen(int l)
//{
//    int b = 0, c = 1, d = 0, e, f, g = 0;
//    if (l <= 9)
//    {
//        switch (l)
//        {
//        case 2:
//        case 3:
//        case 5:
//        case 7:
//            g = 1;
//            break;
//        }
//    }
//        if (l > 9)
//        {
//            for (b = 0; l / c != 0; d++)
//            {
//
//                c = 10 * c;
//            }
//            e = d;
//            int i = 0;
//            int arr[100000] = { l };
//            for (int j = 0; j < d; j++)
//            {
//
//                arr[i] = (l / (c / 10)) % 10;
//                arr[d - 1] = l % (l / 10 * 10);
//                c = c / 10;
//                i++;
//                d--;
//            }
//            for (i = 0; i < e; i++)
//            {
//                if (arr[i] == arr[e - 1])
//                {
//                    g = 1;
//                }
//                if (arr[i] != arr[e - 1])
//                {
//                    g = 0;
//                    break;
//                }
//                e--;
//            }
//            
//        }
//
//    
//    return g;
//}
//int main()
//{
//    int a = 0,flag=0,b=0,x=0;
//    int arr[30] = {};
//    scanf("%d", &a);
//    getchar();
//    if (a == 1)
//    {
//        getchar();
//        flag = 2;
//    }
//    if (a == 2)
//    {
//       
//        getchar();
//        getchar();
//        getchar();
//            flag = 1;
//      
//    }
//    if(a>=3)
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &x);
//         arr[i] = x ;
//         
//        if (arr[i-1] == arr[i ] - 1)
//        {
//            flag = 1;
//        }
//        else {
//            flag = 2;
//        }
//    }
//    printf("%d", flag);
//    return 0;
//}
//int main()
//{
//    int a, b,max,min,sum=0;
//    scanf("%d%d", &a, &b);
//    if (a >= b)
//    {
//        max = a;
//        min = b;
//    }
//    else {
//        max = b;
//        min = a;
//    }
//    for (; min <= max; min++)
//    {
//        sum+=min;
//    }
//    printf("%d", sum);
//    return 0;
//
//}
//int main ()
//{
//    /*char* arr = "123fghj\0";*/
//
//    return 0;
//}
#include<stdio.h>

//int main()
//
//{
//
//    char c;
//
//    scanf("%c", &c);
//
//    if (c >= '0' && c <= '9')
//
//        printf("1");
//
//    else if (c >= 'a' && c <= 'z' || c >= 'A' && c<= 'Z')
//        printf("A");
//
//    else
//
//        printf("#");
//
//    return 0;
//}
//#include <stdlib.h>
//int rand(void);
//int main()
//{
//    
//    char arr[5];
//   
//    /*scanf("%4s", arr);
//    printf("%s", arr);*/
//   /* gets_s(arr,4);
//    printf("%s ", arr);
//    puts(arr);
//    scanf("%[^\n]", arr);
//    printf("%s ", arr);*/
//   /* scanf("[^\n]", arr);
//    puts(*arr);*/
//    /*puts("hello\n world");*/
//   /* fgets(arr,5,stdin);
//    puts(arr);*/
//
//    return 0;
//}
//void Resolve(int a);
//int main()
//{
//    int a, b, c, d, e;
//    scanf("%d", &a);        //参数为a
//    Resolve(a);
//    return 0;
//}
//int Isprime(int a);
//void Resolve(int a)
//{
//    int c;
//    int b = Isprime(a);
//
//    if (b == 1)
//        printf("%d", a);
//    if (b == 0)
//    {
//        for (int i = 2; i <=a; i++)
//        {
//
//            if (a % i == 0)
//            {
//                c = i;
//            }
//                Resolve(c);
//                
//        }
//    }
//   
//}
//int Isprime(int a)      //0不是1是
//{
//    int flag=1;
//    for (int i = 2; i <=sqrt(a); i++)
//    {
//        if (a % i == 0)
//            flag = 0;
//            break;
//    }
//    return flag;
//}
//int main()
//{
//    int a, b, c, d, e, f;           //分解a
//    scanf("%d", &a);
//    for (int i = 2; i < a; i++)
//    {
//
//
//    }
//    return 0;
//}
//void Rose(int a)
//{
//    for (int i = 2; i <sqrt(a);)
//    {
//        if (a % i == 0)
//        {
//            int b = a / i;
//        }
//        printf()
//        Rose(b);
//    }
//    return b; 
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main()
//{
//    int i, j, k, a;
//    scanf("%d", &a);
//    for (i = 2; i <= a; i++)
//    {
//        if (a % i == 0)
//        {
//            printf("%d ", i);
//            a = a / i;
//            i = 1;
//        }
//    }
//    return 0;
//}
//

//int main()
//
//{
//    int a;
//    scanf("%d", &a);
//    
//    int arr[2001] = { 0 };
//        int c = 2;
//    for (int i = 0; i <= sqrt(2000); i++)
//    {
//            
//        
//    }
//    
//    return 0;
//}
//int main()
//{
//    printf("\"I really love haut!\\n\";");
//    return 0;
//}
//int main()
//{
//    double yy1=0, sx1=0, yw1=0, lz1=0;
//    int a, b, c, d, e,x=0;
//    int* z=0;
//    int max = 0,max_sx[1000]={};
//    int yw[1001] = {};
//    int sx[1001] = {};
//    int yy[1001] = {};
//    int lz[1001] = {};
//    int he[1001] = {  };
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d%d%d%d", &b, &c, &d,&e);
//        
//        yw[i] = b;
//        sx[i] = c;
//        yy[i] = d;
//        lz[i] = e;
//        he[i] = yw[i] + sx[i] + yy[i] + lz[i];
//
//    }
//    max= sx[0];
//    for (int i = 0; i < a; i++)
//    {
//        if (max < sx[i + 1])
//        {
//            max = sx[i + 1];
//        }
//        
//    }
//    for (int i = 0; i < a; i++)
//    {
//        if (max == sx[i])
//        {
//            x = i;
//            break;
//        }
//    }
//    
//    max = yw[x] + sx[x] + yy[x] + lz[x];
//   
//    
//    for (int i = 0; i < a ; i++)
//    {
//        yy1 =yy1+ 1.0 * yy[i];
//        sx1 = sx1 + 1.0 * sx[i];
//        yw1 = yw1 + 1.0 * yw[i];
//        lz1 = lz1 + 1.0 * lz[i];
//
//    }
//    yy1 = yy1 / a ;
//    sx1 = sx1 / a ;
//    yw1 = yw1 / a ;
//    lz1 = lz1 / a ;
//    printf("%d\n", max);
//    printf("%.2lf %.2lf %.2lf %.2lf", yw1, sx1, yy1, lz1);
//    return 0;
//}
//int main()
//{
//    char ch[100000];
//    gets_s (ch, 100000);
//    int x = 0;
//    for (int i = 0; ch[i]!='\0'; i++)
//    {
//        x = ch[i] + x;
//    }
//    printf("%d", x);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch[100000];
//    scanf("%s", ch);
//    int x = 0;
//    for (int i = 0; ch[i] != '\0'; i++)
//    {
//        x = ch[i] + x;
//    }
//    printf("%d", x);
//    return 0;
//}
//int main()
//{
//    int a, b, c, d, z; int x[10000];;
//    int arr[1000] = {};
//    int count[1000] = {};
//        int shu[10] = {};
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        arr[i] = scanf("%d", &b);
//    }
//    for (int i = 0; i < a; i++)
//    {
//        
//        if (arr[i] == arr[i + 1])
//        {
//
//void j(int a[]);
//int main()
//{
//    int a[] = { 1,2,3,4,5,6,7,8,9 };
//    j(a);
//    printf("%d\n", sizeof(a+1));
//    return 0;
//}
//void j(int a[])
//{
//    int b = sizeof(a+2);
//    printf("%d\n",b);
//    for (int i = 0; i <sizeof(a); i++)
//    {
//        printf("%d\n", a[i]);
//   }
//
//}
//int main()
//{
//    int prime[2000] = {};
//    int i = 0,j=0,count=0;
//    int flag = 1;
//    for (i=2; i < 2000; i++)
//    {
//        flag = 1;
//        for ( j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//
//            {
//                flag = 0;
//                break;
//            }
//           
//        }
//        if (flag == 1)
//        {
//            count++;
//            prime[count] = j;
//        }
//    }
//    int x = 0;
//    scanf("%d", &x);
//    for (int k=1; x != 1;k++)
//    {
//        
//        while (x % prime[k] == 0)
//        {
//            printf("%d", prime[k]);
//            x = x / prime[k];
//            if (x == 1)
//                break;
//            printf(" ");
//
//            continue;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int high, up, down,sum=0,count=0;
//    scanf("%d%d%d", &high, &up, &down);
//    while (sum < high)
//    {
//        if (sum + up > high)
//            break;
//        sum =sum+ up - down;
//        count++;
//        
//    }
//    printf("%d", count);
//    return 0;
//}
//int main()
//{
//    double sum=0;
//    double i = 0, j = 0;
//    int a = 0;
//    scanf("%d", &a);
//    for (i = 1; sum <=a; i++)
//    {
//        sum = 1.0 / i + sum;
//    }
//    printf("%.0lf", i-1);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define N 100
//#define LEN 81
//void Sort(char str[][LEN], int n);
//int main()
//{
//	int i, n;
//	char str[N][LEN];
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		gets_s(str[i]);
//	}
//	Sort(str, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}
//void Sort(char str[][LEN], int n)
//{
//	int i, j;
//	char temp[LEN];
//	for (i = 0; i < n - 1; i++)
//		for (j = i + 1; j < n; j++)
//		{
//
//			if (strcmp(str[i], str[j]) > 0)
//			{
//				strcpy(temp, str[i]);
//				strcpy(str[i], str[j]);
//				strcpy(str[j], temp);
//			}
//		}
//}
//int mainOJ74()
//{
//    int a, b, c,flag=0;    
//    //a公鸡数，b母鸡数，c小鸡数
//    int x;
//    scanf("%d", &x);
//    for (a = 0; a <= x/ 5; a++)
//    {
//        b = (x - 7 * a) / 4;
//        c = x - a - b;
//        if (a >= 0 && b >= 0 && c >= 0&&(x-7*a)%4==0)
//       {
//            printf("%4d%4d%4d\n", a, b, c);
//            flag = 1;
//        }
//        
//    }if (flag == 0)
//    {
//        printf("No Answer");
//    }
//    return 0;
//}
//int mainOJ75()
//{
//    int cost,n;
//    scanf("%d%d", &n, &cost);
//    int  man, woman, child;
//    int flag = 1;
//    for (man = 0; man < cost / 3; man++)
//    {
//        woman = cost - 2 * man - n;
//        child = n - man - woman;
//        if (man >= 0 && woman >= 0 && child >= 0)
//        {
//            printf("%d %d %d\n", man, woman, child);
//            flag = 0;
//        }
//    }
//    if (flag == 1)
//        printf("No answer");
//    
//    return 0;
//}
//int mainOJ76()
//{
//    int x, y, z, n;
//    int flag = 0;
//    scanf("%d", &n);
//    for (x = 1;x<=8; x++)
//    {
//        for (y = 1;y<=8; y++)
//        {
//            for (z = 0;z<=8; z++)
//            {
//                int sum = 0;
//                sum = 100 * x + 110 * y + 12 * z;
//                if (sum == n)
//                {
//                    flag = 1;
//                    printf("%4d%4d%4d", x, y, z);
//                }
//
//            }
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//    }
//    if (flag == 0)
//    {
//        printf("No Answer");
//    }
//        return 0;
//}
//int mainOJ77()
//{
//    char str[100];
//    int k;
//    scanf("%d", &k);
//    
//    getchar();
//    if (k > 26)
//        k = k % 26;
//    fgets(str,100,stdin);
//    for (int i = 0;str[i-1] != '\n'; i++)
//    {
//        
//        if (str[i] >= 'a' && str[i] <= 'z' )
//        {
//            if (str[i] + k >122)
//            {
//                str[i] = str[i] + k - 26;
//                continue;
//            }
//            if ( str[i] + k <=122)
//            {
//                str[i] = str[i] + k ;
//                continue;
//            }
//
//        }
//        if (str[i] >= 'A' && str[i] <= 'Z')
//        {
//            if (str[i] + k > 90)
//            {
//                str[i] = str[i] + k - 26;
//                continue;
//            }
//            if (str[i] + k <= 90)
//            {
//                str[i] = str[i] + k ;
//                continue;
//            }
//        }
//    }
//    for (int j = 0; str[j+1] != '\0'; j++)
//    {
//        printf("%c", str[j]);
//    }
//    return 0;
//}

//int main()
//{
//    char arr[11];
//    scanf("%s", arr);
//    int b;
//    for (int i = 0; i < 10; i++)
//    {
//        b = arr[i];
//        arr[i] = b + 3;
//        printf("%c", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int arr[5][5];
//    int i = 0, j = 0;
//    int a = 0, b = 0;
//    for (int m = 0; m < 5; m++)
//    {
//        for (int n = 0; n < 5; n++)
//        {
//            scanf("%d", &arr[m][n]);
//    }
//}
//    int max = arr[0][0];
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            if (arr[i][j] >=max)
//            {
//                max = arr[i][j];
//                a = i; b = j;
//            }
//        }
//    }
//    printf("%d %d %d", max, a, b);
//    return 0;
//}
#include <stdio.h>

//int main()
//{
//
//    char c1, c2;
//    c1 = getchar();
//    getchar();
//    c2 = getchar();
//    if (c1 > c2)
//    {
//        printf("%c,%c", c2, c1);
//    }
//    else
//    {
//        printf("%c,%c", c1, c2);
//    }
//    return 0;
//}
//int main()
//{
//    char str1[100];
//    char str2[101];
//    fgets(str1, 100, stdin);
//    fgets(str2, 100, stdin);
//    if (strlen(str1) >= strlen(str2))
//    {
//        for (int i = 0; i <= strlen(str1); i++)
//        {
//            printf("%c", str1[i]);
//        }
//        printf("\n");
//        for (int j = 0; j <= strlen(str2); j++)
//        {
//            printf("%c", str2[j]);
//        }
//    }
//
//  
//        if (strlen(str1) <= strlen(str2))
//        {
//            for (int i = 0; i <= strlen(str1); i++)
//            {
//                printf("%c", str2[i]);
//            }
//            printf("\n");
//            for (int j = 0; j <= strlen(str1); j++)
//            {
//                printf("%c", str1[j]);
//            }
//        }
//        return 0;
//    }
//int main()
//{
//
//}
//int main()
//{
//    int a,fs=0,l=0,zs=0;
//    int arr[10000] = {};
//    scanf("%d", &a);
//    int x;
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &x);
//        if (x > 0)
//        {
//            zs++;
//        }
//        if (x < 0)
//        {
//            fs++;
//        }
//        if (x == 0)
//        {
//            l++;
//        }
//    }
//    printf("%d\n", fs);
//    printf("%d\n", l);
//    printf("%d", zs);
    //}
//int main()
//{
//    int arr[200][200] = {};
//    int m, n,x,sum=0;
//    int max=0;
//    scanf("%d%d", &n, &m);
//    
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            
//            scanf("%d", &x);
//            arr[i][j] = x;
//           
//        }
//    }
//    sum = arr[0][0] + arr[0][1] + arr[0][2] + arr[1][0] + arr[1][1] + arr[1][2] + arr[2][0] + arr[2][1] + arr[2][2];
//    if (n >= m)
//    {
//        for (int i = 0; i + 2 < n; i++)
//        {
//            for (int j = 0; j + 2 < m; j++)
//            {
//                sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
//                if (sum > max)
//                {
//                    max = sum;
//                }
//            }
//        }
//    }
//    if (m > n)
//    {
//        for (int i = 0; i + 2 < n; i++)
//        {
//            for (int j = 0; j + 2 < m; j++)
//            {
//                sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
//                if (sum > max)
//                {
//                    max = sum;
//                }
//            }
//        }
//    }
//    printf("%d", max);
//    return 0;
//}
//int main()
//{
//    char arr[1000][1000] = {};
//    int i, j; int flag = 0;
//    int a;
//    int m, n;
//    scanf("%d", &a);
//    for (i = 0; i < a; i++)
//    {
//
//        scanf("%s", arr[i]);
//
//    }
//    for (n = 0; n < a; n++)
//    {
//        for (m = 0;m<strlen(arr[n]); m++)
//        {
//            if (flag==1)
//            {
//            if (arr[n][m] >= 'a' && arr[n][m] <= 'z')
//            {
//                arr[n][m] = arr[n][m] - 32;
//            }
//}
//            flag = 0;
//            if (arr[n][0] >= 'a' && arr[n][0] <= 'z')
//            {
//                arr[n][0] = arr[n][0] - 32;
//            }
//            while (arr[n][m] == '_')
//            {
//                flag = 1;
//                
//                break;
//                
//            }
//            continue;
//            
//            
//        }
//    }
//    for (int k = 0; k < a-2; k++) {
//        printf("%s\n", arr[k]);
//    }
//    printf("%s\n", arr[a-2]);
//    printf("%s", arr[a-1]);
//    return 0;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    double speed, xi;
//    int count = 0;
//    int min_s, max_x;
//    int i;
//    int  v[100000] = {};
//    int  x[100000] = {};
//    for ( i = 0; i < n; i++)
//    {
//        scanf("%lf%lf", &speed, &xi);
//        v[i] = speed;
//        x[i] = xi;
//        
//    }
//    min_s = v[0];
//    max_x = x[0];
//    for (int j = 0; j < n; j++)
//    {
//        if (x[j] > max_x && v[j] <= min_s)
//        {
//            count++;
//            max_x = x[j];
//            min_s = v[j];
//        }
//   }
//    printf("%d", count);
//    return 0;
//}
/*#include<stdio.h>
#define N 100
int main()
{
    int i, n, sum = 0;
    int a[100] = {};
    int x;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &n);
        a[i] = n;
        if (n < 0)
        {
            sum += n;
        }
        a[i] = n;

    }
    printf("%d ", sum);
    for (int j = 0; j < x*//*
    */
//#include<stdio.h>
//#define N 10
//int main(void)
//{
//    char str[N];
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%c", &str[i]);
//    }
//
//    for (i = 0; i < 10; i++)
//    {
//        str[i] += 3;
//    }
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%c ", str[i]);
//    }
//}
#include<stdio.h>



//int main()
//
//{
//
//    int i, n, sum = 0;
//
//    int a[100] = {};
//
//    int x;
//
//    scanf("%d", &x);
//
//    for (i = 0; i < x; i++)
//
//    {
//
//        scanf("%d", &n);
//
//        a[i] = n;
//
//        if (n < 0)
//
//        {
//
//            sum += n;
//
//        }
//
//        a[i] = n;
//
//
//
//    }
//
//    printf("%d ", sum);
//
//    for (int j = 0; j < x; j++)
//
//    {
//
//        if (a[j] < 0)
//
//
//
//            printf("%d ", a[j]);
//
//    }
//
//    return 0;
//
//
//
//}
#include <stdio.h>

/*int main() {
    int a, b, n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}*/
//int main()
//{
//    int a, b;
//    while (scanf("%d%d", &a, &b) != EOF)
//    {
//        printf("%d", a + b);
//    }
//    return 0;
//}
//int main()
//{
//    int a, b;
//    for (;;)
//    {
//        scanf("%d%d", &a, & b);
//        if (a == 0 && b == 0)
//            break;
//        printf("%d", a + b);
//    }
//    return 0;
//}
//int main()
//{
//    int a, b,c,sum=0,d[1000]={};
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        sum = 0;
//        scanf("%d", &b);
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &c);
//            sum += c;
//        }
//        d[i] = sum;
//    }
//    for (int i = 0; i < a-1; i++)
//    {
//        printf("%d\n", d[i]);
//    }
//    printf("%d", d[a-1]);
//    return 0;
//}
//int main()
//{
//    int a, b, c, d, e, f=0;
//    int arr[100000] = {};
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &b);
//        for (int j = 1; j < b; j++)
//        {
//            if (j % 7 == 0 || j % 10 == 7 || j >= 70 && j <= 79)
//            {
//                arr[f] = j;
//                  f++;
//                
//            }
//            
//        }  
//    }
//    for (int i = 0; i <f-1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//   // int a = 0x11223344;
//   // char b = 0x11223344;
//   // int* pa = &a;
//   // char* pc = &b;
//   // printf("%p %p", pa, pc);
//   ///* char str[100] = {};
//   // scanf("%s", str);*/
//
//    /*int a[10] = { 0 };
//    int* p = a;
//    for (int i = 0; i < 10; i++)
//    {
//        *(p + i) = 1;
//    }*/
//    return 0;
//   // return 0;
//}