#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include "C_test_user.h"


typedef struct students
{
	char id[20];
	char name[20];
	int year;
	int month;
	int day;
	int chinese, math, english;
	int add;
};
#define N 10000
 students stu[N];
 students* max = NULL;
 students* min = NULL;
 students tem;

 
int menu();

int scanf_students();

void printf_students(int sum);

void sort_students(int sum);

void search_print_students(int sum);							//查询并输出学生相关信息			

int insert_students(int sum);

int del_students(int sum);

void modify(int sum);

int main()
{
	int sum = 0; int n;
	int choice = menu();
	while (choice != 8)
	{
		switch (choice)
		{
		case 1:
			n = scanf_students();			//输入学生信息
			sum += n;
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 2:
			printf_students(sum);			//打印学生信息
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 3:
			sort_students(sum);				//以总分形式对学生排序
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 4:
			search_print_students(sum);							//查询并输出学生相关信息			
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 5:
			sum += insert_students(sum);
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 6:
			sum -= del_students(sum);
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 7:
			modify(sum);
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 8:
			printf("已退出");
			break;
		default:
		printf("*********请输入1-8中的数字！*********\n");
		choice = menu();
		if (choice != 8)
			continue;
		else break;
			
		
		}
	}
		return 0;
}
int menu()
{
	printf("\n");

	printf("------------------------菜单------------------------\n");
	printf("*          1、输入n学生的信息                      *\n");
	printf("*          2、输出所有学生的信息                   *\n");
	printf("*          3、将学生信息按总分从大到小排序         *\n");
	printf("*          4、查询学生信息                         *\n");
	printf("*          5、插入学生的信息                       *\n");
	printf("*          6、删除一个学生的信息                   *\n");
	printf("*          7、修改学生的信息                       *\n");
	printf("*          8、退出                                 *\n");
	printf("----------------------------------------------------\n");
	printf("请选择菜单选项：\n");
	printf("\n");

	int choice;
	scanf("%d", &choice);

	return choice;

}
int scanf_students()
{
	printf("\n");

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
			scanf("%s", &stu[i].id);
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
		scanf("%s", &stu[n-1].id);
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
	printf("\n");

	
	return n;
}
void printf_students(int sum)
{
	printf("\n");

	if (sum > 0)
	{
	printf("---------------------学生信息如下------------------------\n");
		for (int i = 0; i < sum - 1; i++)
		{
			printf("---------------------%s同学的信息如下------------------------\n",stu[i].name);

			printf("第%d位学生姓名为： \n%s\n",i+1, stu[i].name);

			printf("该学生学号为：\n%s\n", stu[i].id);

			printf(" % s学生出生于: \n%04d-%02d-%02d\n",stu[i].name, stu[i].year, stu[i].month, stu[i].day);

			printf("%s的语文成绩： \n%d分\n", stu[i].name, stu[i].chinese);

			printf("%s的数学成绩： \n%d分\n", stu[i].name, stu[i].math);

			printf("%s的英语成绩： \n%d分\n", stu[i].name, stu[i].english);


		}
		printf("---------------------%s同学的信息如下------------------------\n", stu[sum-1].name);
		printf("请输入第%d位学生姓名：\n %s\n",sum, stu[sum-1].name);

		printf("该学生学号为：\n%s\n", stu[sum-1].id);

		printf("该学生出生于:\n%d-%02d-%02d\n", stu[sum-1].year, stu[sum-1].month, stu[sum-1].day);

		printf("%s的语文成绩：\n%d分\n", stu[sum-1].name, stu[sum-1].chinese);

		printf("%s的数学成绩：\n%d分\n", stu[sum-1].name, stu[sum-1].math);

-		printf("%s的英语成绩：\n%d分\n", stu[sum-1].name, stu[sum-1].english);

		printf("全部信息已输出完成，即将返回菜单\n");
	printf("---------------------学生信息输出完成--------------------\n");
	}
	else
		printf("-------------------请先输入学生信息!---------------------\n");
	printf("\n");

}
void sort_students(int sum)
{
	printf("\n");

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
	printf("@@@@@@@@@@@@@@已按总成绩从高到低排序完成！@@@@@@@@@@@@@@@\n");
	printf("\n");

}
void search_print_students(int sum)
{
	printf("\n");

	printf("-------------学生信息查询系统---------------\n");
	printf("-----------------1、姓名查询----------------\n");
	printf("-----------------2、学号查询----------------\n");
	printf("-----------------3、退出信息查询系统-----------\n");
	int flag = 0;
	int search_choice;
	char name1[20], id1[20];
	scanf("%d", &search_choice);
	switch (search_choice)
	{
	case 1:
		printf("请输入学生姓名：\n");
		scanf("%s", &name1);
		printf("\n");
		for (int i = 0; i < sum; i++)
		{
			if (strcmp(stu[i].name, name1) >= 0);
			{
				flag = 1;
				printf("---------------------%s同学的信息如下------------------------\n", stu[i].name);

			printf("第%d位学生姓名为： \n%s\n", i + 1, stu[i].name);

			printf("该学生学号为：\n%s\n", stu[i].id);

			printf(" % s学生出生于: \n%04d-%02d-%02d\n", stu[i].name, stu[i].year, stu[i].month, stu[i].day);

			printf("%s的语文成绩： \n%d分\n", stu[i].name, stu[i].chinese);

			printf("%s的数学成绩： \n%d分\n", stu[i].name, stu[i].math);

			printf("%s的英语成绩： \n%d分\n", stu[i].name, stu[i].english);
			
			printf("---------------------学生信息输出完成--------------------\n");

			}

		}
		break;
	case 2:
		printf("请输入学生学号：\n");
		scanf("%s", &id1);
		for (int i = 0; i < sum; i++)
		{
			if (strcmp(stu[i].id, id1) >= 0)
			{
				flag = 1;
				printf("---------------------%s同学的信息如下------------------------\n", stu[i].name);

				printf("第%d位学生姓名为： \n%s\n", i + 1, stu[i].name);

				printf("该学生学号为：\n%s\n", stu[i].id);

				printf(" % s学生出生于: \n%04d-%02d-%02d\n", stu[i].name, stu[i].year, stu[i].month, stu[i].day);

				printf("%s的语文成绩： \n%d分\n", stu[i].name, stu[i].chinese);

				printf("%s的数学成绩： \n%d分\n", stu[i].name, stu[i].math);

				printf("%s的英语成绩： \n%d分\n", stu[i].name, stu[i].english);

				printf("---------------------学生信息输出完成--------------------\n");

			}
		}
		break;
	case 3:return;
	default:printf("**************请在1-3之间输入！*****************\n");
		if (flag == 0)
		{
			printf("#################没有找到此学生，请检查是否录入该学生信息！############\n");
		}
	}
	printf("\n");

}
int insert_students(int sum)
{
	printf("\n");

	students* pa;
	int x;
	pa = &stu[sum - 1];
	printf("-----------请输入学生信息插入位置-----------\n");
	int site;
	scanf("%d", &site);
	printf("请输入需要插入学生信息的人数：\n");
	scanf("%d", &x);
	int count = 0;
	for (int i = 0; i <= x; i++)
	{
		*(pa + x - count) = *(pa - count);
		count++;
	}
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d位学生姓名：\n", i + 1);
		scanf("%s", &stu[site - 1].name);
		printf("请输入该学生学号：\n");
		scanf("%s", &stu[site - 1].id);
		printf("请输入该学生出生年份：\n");
		scanf("%4d", &stu[site - 1].year);
		printf("请输入该学生出生月份：\n");
		scanf("%2d", &stu[site - 1].month);
		printf("请输入该学生出生于几号：\n");
		scanf("%2d", &stu[site - 1].day);
		printf("请输入该学生语文成绩：\n");
		scanf("%d", &stu[site - 1].chinese);
		printf("请输入该学生数学成绩：\n");
		scanf("%d", &stu[site - 1].math);
		printf("请输入该学生英语成绩：\n");
		scanf("%d", &stu[site - 1].english);
		printf("已记录完成，即将开始下一位学生信息记录\n");
		site++;
	}
	printf("\n");

	return x;
}
int del_students(int sum)
{
	printf("\n");

	int flag = 1;
	int i;
	students* del;
	int count = sum;
	int count1 = 0;
	char del_name[20];
	printf("------------请输入要删除信息的同学姓名---------\n");
	scanf("%s", &del_name);
	for ( i = 0; i < sum; i++)
	{
		if (strcmp(stu[i].name, del_name) == 0)
		{
			break;
		}
	}
	del = &stu[i];
	for (; count - 1 > i; count--)
	{
		*(del + count1) = *(del + count1 + 1);
		count1++;
	}
	return flag;
	printf("\n");

}
void modify(int sum)
{
	printf("\n");

	int i;
	int flag = 0;
	printf("-----------------请输入修改学生的姓名---------------\n");
	char name1[20];
	scanf("%s", &name1);
	for (i = 0; i < sum; i++)
	{
		if (strcmp(stu[i].name, name1) == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("-----------------请选择修改学生信息项---------------\n");
		printf("---------------------1、姓名------------------------\n");
		printf("---------------------2、学号------------------------\n");
		printf("---------------------3、出生年份--------------------\n");
		printf("---------------------4、出生月份--------------------\n");
		printf("---------------------5、出生于几号------------------\n");
		printf("---------------------6、语文成绩--------------------\n");
		printf("---------------------7、数学成绩--------------------\n");
		printf("---------------------8、英语成绩--------------------\n");
		printf("---------------------9、退出修改系统----------------\n");

		int modify_choice;

		scanf("%d", &modify_choice);
		while (modify_choice != 9)
		{
			switch (modify_choice)
			{
			case 1:
				printf("***************请输入修改后的学生姓名：*********************\n");

				scanf("%s", &stu[i].name);
				break;
			case 2:
				printf("***************请输入修改后的学生学号：*********************\n");

				scanf("%s", &stu[i].id);
				break;

			case 3:
				printf("***************请输入修改后的出生年份：*********************\n");


				scanf("%d", &stu[i].year);
				break;

			case 4:
				printf("***************请输入修改后的出生月份：*********************\n");


				scanf("%d", &stu[i].month);
				break;

			case 5:
				printf("***************请输入修改后的出生天数：*********************\n");


				scanf("%d", &stu[i].day);
				break;

			case 6:
				printf("***************请输入修改后的语文成绩：*********************\n");


				scanf("%d", &stu[i].chinese);
				break;

			case 7:
				printf("***************请输入修改后的数学成绩：*********************\n");

				scanf("%d", &stu[i].math);
				break;

			case 8:
				printf("***************请输入修改后的英语成绩：*********************\n");

				scanf("%d", &stu[i].english);
				break;

			case 9:
				break;
			default:
				printf("请输入1-9中的数字");
				modify(sum);
			}
			printf("--------------------修改完成!--------------------\n");
			printf("\n");

			printf("**********************即将返回修改菜单***********************\n");
			printf("\n");
			printf("-----------------请选择修改学生信息项---------------\n");
			printf("---------------------1、姓名------------------------\n");
			printf("---------------------2、学号------------------------\n");
			printf("---------------------3、出生年份--------------------\n");
			printf("---------------------4、出生月份--------------------\n");
			printf("---------------------5、出生于几号------------------\n");
			printf("---------------------6、语文成绩--------------------\n");
			printf("---------------------7、数学成绩--------------------\n");
			printf("---------------------8、英语成绩--------------------\n");
			printf("---------------------9、退出修改系统----------------\n");
			scanf("%d", &modify_choice);

		}
	}
	else printf("!!!!!!!!!!!!!!!!!没有查找到此学生，请添加学生！!!!!!!!!!!!!!!\n");
	printf("\n");

}