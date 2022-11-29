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
			printf("���˳�");
			break;
		
		}
	}
		return 0;
}
int menu()
{
	printf("-----------�˵�-----------\n");
	printf("1������n��ѧ������Ϣ\n");
	printf("2������n��ѧ������Ϣ\n");
	printf("3������n��ѧ������Ϣ\n");
	printf("4������n��ѧ������Ϣ\n");
	printf("5������n��ѧ������Ϣ\n");
	printf("6������n��ѧ������Ϣ\n");
	printf("7������n��ѧ������Ϣ\n");
	printf("8��-------�˳�------\n");
	printf("--------------------------\n");
	printf("��ѡ��˵�ѡ�\n");
	int choice;
	scanf("%d", &choice);

	return choice;

}
int scanf_students()
{
	int n;
	printf("�����뱾����Ҫ�Ǽ���Ϣ��������\n");
	scanf("%d", &n);
	if (n != 0)
	{
		for (int i = 0; i < n-1 ; i++)
		{
			printf("�������%dλѧ��������\n", i+1);
			scanf("%s", &stu[i].name);
			printf("�������ѧ��ѧ�ţ�\n");
			scanf("%lf", &stu[i].id);
			printf("�������ѧ��������ݣ�\n");
			scanf("%4d", &stu[i].year);
			printf("�������ѧ�������·ݣ�\n");
			scanf("%2d", &stu[i].month);
			printf("�������ѧ�������ڼ��ţ�\n");
			scanf("%2d", &stu[i].day);
			printf("�������ѧ�����ĳɼ���\n");
			scanf("%d", &stu[i].chinese);
			printf("�������ѧ����ѧ�ɼ���\n");
			scanf("%d", &stu[i].math);
			printf("�������ѧ��Ӣ��ɼ���\n");
			scanf("%d", &stu[i].english);
			printf("�Ѽ�¼��ɣ�������ʼ��һλѧ����Ϣ��¼\n");
			stu[i].add = stu[i].chinese + stu[i].english + stu[i].math;
		}
		printf("�������%dλѧ��������\n", n);
		scanf("%s", &stu[n-1].name);
		printf("�������ѧ��ѧ�ţ�\n");
		scanf("%lf", &stu[n-1].id);
		printf("�������ѧ��������ݣ�\n");
		scanf("%d", &stu[n-1].year);
		printf("�������ѧ�������·ݣ�\n");
		scanf("%02d", &stu[n-1].month);
		printf("�������ѧ�������ڼ��ţ�\n");
		scanf("%02d", &stu[n-1].day);
		printf("�������ѧ�����ĳɼ���\n");
		scanf("%d", &stu[n-1].chinese);
		printf("�������ѧ����ѧ�ɼ���\n");
		scanf("%d", &stu[n-1].math);
		printf("�������ѧ��Ӣ��ɼ���\n");
		scanf("%d", &stu[n-1].english);
		printf("�Ѽ�¼��ɣ��������ز˵�\n");
		stu[n-1].add = stu[n-1].chinese + stu[n-1].english + stu[n-1].math;
	}
	else {
		printf("��Ч���룬�������ز˵�\n");
	}
	
	return n;
}
void printf_students(int sum)
{
	printf("---------------------ѧ����Ϣ����------------------------\n");
	if (sum > 0)
	{
		for (int i = 0; i < sum - 1; i++)
		{
			printf("---------------------%sͬѧ����Ϣ����------------------------\n",stu[i].name);

			printf("��%dλѧ������Ϊ�� \n%s\n",i+1, stu[i].name);

			printf("��ѧ��ѧ��Ϊ��\n%.0lf\n", stu[i].id);

			printf(" % sѧ��������: \n%04d-%02d-%02d\n",stu[i].name, stu[i].year, stu[i].month, stu[i].day);

			printf("%s�����ĳɼ��� \n%d��\n", stu[i].name, stu[i].chinese);

			printf("%s����ѧ�ɼ��� \n%d��\n", stu[i].name, stu[i].math);

			printf("%s��Ӣ��ɼ��� \n%d��\n", stu[i].name, stu[i].english);


		}
		printf("---------------------%sͬѧ����Ϣ����------------------------\n", stu[sum-1].name);
		printf("�������%dλѧ��������\n %s\n",sum, stu[sum-1].name);

		printf("��ѧ��ѧ��Ϊ��\n%.0lf\n", stu[sum-1].id);

		printf("��ѧ��������:\n%d-%02d-%02d\n", stu[sum-1].year, stu[sum-1].month, stu[sum-1].day);

		printf("%s�����ĳɼ���\n%d��\n", stu[sum-1].name, stu[sum-1].chinese);

		printf("%s����ѧ�ɼ���\n%d��\n", stu[sum-1].name, stu[sum-1].math);

		printf("%s��Ӣ��ɼ���\n%d��\n", stu[sum-1].name, stu[sum-1].english);

		printf("ȫ����Ϣ�������ɣ��������ز˵�\n");
	printf("---------------------ѧ����Ϣ������--------------------\n");
	}
	else
		printf("-------------------��������ѧ����Ϣ!---------------------\n");
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