#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include "C_test_user.h"


typedef struct students
{
	double id;
	char name[20];
	int year;
	int month;
	int day;
	int chinese, math, english;
	int add;
};
 students stu[10000];
 students* max = NULL;
 students* min = NULL;
 students tem;

 
int menu();

int scanf_students();

void printf_students(int sum);

void sort_students(int sum);
int main()
{
	int sum = 0; int n;
	int choice = menu();
	while (choice != 8)
	{
		switch (choice)
		{
		case 1:
			 n=scanf_students();
			sum += n;
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 2:
			printf_students(sum);
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 3:
			sort_students(sum);
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 4:
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 5:
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 6:
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 7:
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 8:
			printf("已退出");
			break;
		
		}
	}
		return 0;
}
int menu()
{
	printf("-----------菜单-----------\n");
	printf("1、输入n个学生的信息\n");
	printf("2、输入n个学生的信息\n");
	printf("3、输入n个学生的信息\n");
	printf("4、输入n个学生的信息\n");
	printf("5、输入n个学生的信息\n");
	printf("6、输入n个学生的信息\n");
	printf("7、输入n个学生的信息\n");
	printf("8、-------退出------\n");
	printf("--------------------------\n");
	printf("请选择菜单选项：\n");
	int choice;
	scanf("%d", &choice);

	return choice;

}
int scanf_students()
{
	int n;
	printf("请输入本次需要登记信息的人数：\n");
	scanf("%d", &n);
	if (n != 0)
	{
		for (int i = 0; i < n-1 ; i++)
		{
			printf("请输入第%d位学生姓名：\n", i+1);
			scanf("%s", &stu[i].name);
			printf("请输入该学生学号：\n");
			scanf("%lf", &stu[i].id);
			printf("请输入该学生出生年份：\n");
			scanf("%4d", &stu[i].year);
			printf("请输入该学生出生月份：\n");
			scanf("%2d", &stu[i].month);
			printf("请输入该学生出生于几号：\n");
			scanf("%2d", &stu[i].day);
			printf("请输入该学生语文成绩：\n");
			scanf("%d", &stu[i].chinese);
			printf("请输入该学生数学成绩：\n");
			scanf("%d", &stu[i].math);
			printf("请输入该学生英语成绩：\n");
			scanf("%d", &stu[i].english);
			printf("已记录完成，即将开始下一位学生信息记录\n");
			stu[i].add = stu[i].chinese + stu[i].english + stu[i].math;
		}
		printf("请输入第%d位学生姓名：\n", n);
		scanf("%s", &stu[n-1].name);
		printf("请输入该学生学号：\n");
		scanf("%lf", &stu[n-1].id);
		printf("请输入该学生出生年份：\n");
		scanf("%d", &stu[n-1].year);
		printf("请输入该学生出生月份：\n");
		scanf("%02d", &stu[n-1].month);
		printf("请输入该学生出生于几号：\n");
		scanf("%02d", &stu[n-1].day);
		printf("请输入该学生语文成绩：\n");
		scanf("%d", &stu[n-1].chinese);
		printf("请输入该学生数学成绩：\n");
		scanf("%d", &stu[n-1].math);
		printf("请输入该学生英语成绩：\n");
		scanf("%d", &stu[n-1].english);
		printf("已记录完成，即将返回菜单\n");
		stu[n-1].add = stu[n-1].chinese + stu[n-1].english + stu[n-1].math;
	}
	else {
		printf("无效输入，即将返回菜单\n");
	}
	
	return n;
}
void printf_students(int sum)
{
	printf("---------------------学生信息如下------------------------\n");
	if (sum > 0)
	{
		for (int i = 0; i < sum - 1; i++)
		{
			printf("---------------------%s同学的信息如下------------------------\n",stu[i].name);

			printf("第%d位学生姓名为： \n%s\n",i+1, stu[i].name);

			printf("该学生学号为：\n%.0lf\n", stu[i].id);

			printf(" % s学生出生于: \n%04d-%02d-%02d\n",stu[i].name, stu[i].year, stu[i].month, stu[i].day);

			printf("%s的语文成绩： \n%d分\n", stu[i].name, stu[i].chinese);

			printf("%s的数学成绩： \n%d分\n", stu[i].name, stu[i].math);

			printf("%s的英语成绩： \n%d分\n", stu[i].name, stu[i].english);


		}
		printf("---------------------%s同学的信息如下------------------------\n", stu[sum-1].name);
		printf("请输入第%d位学生姓名：\n %s\n",sum, stu[sum-1].name);

		printf("该学生学号为：\n%.0lf\n", stu[sum-1].id);

		printf("该学生出生于:\n%d-%02d-%02d\n", stu[sum-1].year, stu[sum-1].month, stu[sum-1].day);

		printf("%s的语文成绩：\n%d分\n", stu[sum-1].name, stu[sum-1].chinese);

		printf("%s的数学成绩：\n%d分\n", stu[sum-1].name, stu[sum-1].math);

		printf("%s的英语成绩：\n%d分\n", stu[sum-1].name, stu[sum-1].english);

		printf("全部信息已输出完成，即将返回菜单\n");
	printf("---------------------学生信息输出完成--------------------\n");
	}
	else
		printf("-------------------请先输入学生信息!---------------------\n");
}
void sort_students(int sum)
{
	max = stu;
	for (int i = 0; i < sum ; i++)
	{
		for (int j = 0; j < sum  - i-1; j++)
		{
			if ((max+j)->add <= (max+1+j)->add)
			{
				tem = *(max+j);
				*(max+j) = *(max+1+j);
				*(max+1+j) = tem;
				
			}
		}
	}
}