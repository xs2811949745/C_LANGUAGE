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

void search_print_students(int sum);							//��ѯ�����ѧ�������Ϣ			

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
			n = scanf_students();			//����ѧ����Ϣ
			sum += n;
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 2:
			printf_students(sum);			//��ӡѧ����Ϣ
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 3:
			sort_students(sum);				//���ܷ���ʽ��ѧ������
			choice = menu();
			if (choice != 8)
				continue;
			else break;
		case 4:
			search_print_students(sum);							//��ѯ�����ѧ�������Ϣ			
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
			printf("���˳�");
			break;
		default:
		printf("*********������1-8�е����֣�*********\n");
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

	printf("------------------------�˵�------------------------\n");
	printf("*          1������nѧ������Ϣ                      *\n");
	printf("*          2���������ѧ������Ϣ                   *\n");
	printf("*          3����ѧ����Ϣ���ִܷӴ�С����         *\n");
	printf("*          4����ѯѧ����Ϣ                         *\n");
	printf("*          5������ѧ������Ϣ                       *\n");
	printf("*          6��ɾ��һ��ѧ������Ϣ                   *\n");
	printf("*          7���޸�ѧ������Ϣ                       *\n");
	printf("*          8���˳�                                 *\n");
	printf("----------------------------------------------------\n");
	printf("��ѡ��˵�ѡ�\n");
	printf("\n");

	int choice;
	scanf("%d", &choice);

	return choice;

}
int scanf_students()
{
	printf("\n");

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
			scanf("%s", &stu[i].id);
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
		scanf("%s", &stu[n-1].id);
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
	printf("\n");

	
	return n;
}
void printf_students(int sum)
{
	printf("\n");

	if (sum > 0)
	{
	printf("---------------------ѧ����Ϣ����------------------------\n");
		for (int i = 0; i < sum - 1; i++)
		{
			printf("---------------------%sͬѧ����Ϣ����------------------------\n",stu[i].name);

			printf("��%dλѧ������Ϊ�� \n%s\n",i+1, stu[i].name);

			printf("��ѧ��ѧ��Ϊ��\n%s\n", stu[i].id);

			printf(" % sѧ��������: \n%04d-%02d-%02d\n",stu[i].name, stu[i].year, stu[i].month, stu[i].day);

			printf("%s�����ĳɼ��� \n%d��\n", stu[i].name, stu[i].chinese);

			printf("%s����ѧ�ɼ��� \n%d��\n", stu[i].name, stu[i].math);

			printf("%s��Ӣ��ɼ��� \n%d��\n", stu[i].name, stu[i].english);


		}
		printf("---------------------%sͬѧ����Ϣ����------------------------\n", stu[sum-1].name);
		printf("�������%dλѧ��������\n %s\n",sum, stu[sum-1].name);

		printf("��ѧ��ѧ��Ϊ��\n%s\n", stu[sum-1].id);

		printf("��ѧ��������:\n%d-%02d-%02d\n", stu[sum-1].year, stu[sum-1].month, stu[sum-1].day);

		printf("%s�����ĳɼ���\n%d��\n", stu[sum-1].name, stu[sum-1].chinese);

		printf("%s����ѧ�ɼ���\n%d��\n", stu[sum-1].name, stu[sum-1].math);

-		printf("%s��Ӣ��ɼ���\n%d��\n", stu[sum-1].name, stu[sum-1].english);

		printf("ȫ����Ϣ�������ɣ��������ز˵�\n");
	printf("---------------------ѧ����Ϣ������--------------------\n");
	}
	else
		printf("-------------------��������ѧ����Ϣ!---------------------\n");
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
	printf("@@@@@@@@@@@@@@�Ѱ��ܳɼ��Ӹߵ���������ɣ�@@@@@@@@@@@@@@@\n");
	printf("\n");

}
void search_print_students(int sum)
{
	printf("\n");

	printf("-------------ѧ����Ϣ��ѯϵͳ---------------\n");
	printf("-----------------1��������ѯ----------------\n");
	printf("-----------------2��ѧ�Ų�ѯ----------------\n");
	printf("-----------------3���˳���Ϣ��ѯϵͳ-----------\n");
	int flag = 0;
	int search_choice;
	char name1[20], id1[20];
	scanf("%d", &search_choice);
	switch (search_choice)
	{
	case 1:
		printf("������ѧ��������\n");
		scanf("%s", &name1);
		printf("\n");
		for (int i = 0; i < sum; i++)
		{
			if (strcmp(stu[i].name, name1) >= 0);
			{
				flag = 1;
				printf("---------------------%sͬѧ����Ϣ����------------------------\n", stu[i].name);

			printf("��%dλѧ������Ϊ�� \n%s\n", i + 1, stu[i].name);

			printf("��ѧ��ѧ��Ϊ��\n%s\n", stu[i].id);

			printf(" % sѧ��������: \n%04d-%02d-%02d\n", stu[i].name, stu[i].year, stu[i].month, stu[i].day);

			printf("%s�����ĳɼ��� \n%d��\n", stu[i].name, stu[i].chinese);

			printf("%s����ѧ�ɼ��� \n%d��\n", stu[i].name, stu[i].math);

			printf("%s��Ӣ��ɼ��� \n%d��\n", stu[i].name, stu[i].english);
			
			printf("---------------------ѧ����Ϣ������--------------------\n");

			}

		}
		break;
	case 2:
		printf("������ѧ��ѧ�ţ�\n");
		scanf("%s", &id1);
		for (int i = 0; i < sum; i++)
		{
			if (strcmp(stu[i].id, id1) >= 0)
			{
				flag = 1;
				printf("---------------------%sͬѧ����Ϣ����------------------------\n", stu[i].name);

				printf("��%dλѧ������Ϊ�� \n%s\n", i + 1, stu[i].name);

				printf("��ѧ��ѧ��Ϊ��\n%s\n", stu[i].id);

				printf(" % sѧ��������: \n%04d-%02d-%02d\n", stu[i].name, stu[i].year, stu[i].month, stu[i].day);

				printf("%s�����ĳɼ��� \n%d��\n", stu[i].name, stu[i].chinese);

				printf("%s����ѧ�ɼ��� \n%d��\n", stu[i].name, stu[i].math);

				printf("%s��Ӣ��ɼ��� \n%d��\n", stu[i].name, stu[i].english);

				printf("---------------------ѧ����Ϣ������--------------------\n");

			}
		}
		break;
	case 3:return;
	default:printf("**************����1-3֮�����룡*****************\n");
		if (flag == 0)
		{
			printf("#################û���ҵ���ѧ���������Ƿ�¼���ѧ����Ϣ��############\n");
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
	printf("-----------������ѧ����Ϣ����λ��-----------\n");
	int site;
	scanf("%d", &site);
	printf("��������Ҫ����ѧ����Ϣ��������\n");
	scanf("%d", &x);
	int count = 0;
	for (int i = 0; i <= x; i++)
	{
		*(pa + x - count) = *(pa - count);
		count++;
	}
	for (int i = 0; i < x; i++)
	{
		printf("�������%dλѧ��������\n", i + 1);
		scanf("%s", &stu[site - 1].name);
		printf("�������ѧ��ѧ�ţ�\n");
		scanf("%s", &stu[site - 1].id);
		printf("�������ѧ��������ݣ�\n");
		scanf("%4d", &stu[site - 1].year);
		printf("�������ѧ�������·ݣ�\n");
		scanf("%2d", &stu[site - 1].month);
		printf("�������ѧ�������ڼ��ţ�\n");
		scanf("%2d", &stu[site - 1].day);
		printf("�������ѧ�����ĳɼ���\n");
		scanf("%d", &stu[site - 1].chinese);
		printf("�������ѧ����ѧ�ɼ���\n");
		scanf("%d", &stu[site - 1].math);
		printf("�������ѧ��Ӣ��ɼ���\n");
		scanf("%d", &stu[site - 1].english);
		printf("�Ѽ�¼��ɣ�������ʼ��һλѧ����Ϣ��¼\n");
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
	printf("------------������Ҫɾ����Ϣ��ͬѧ����---------\n");
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
	printf("-----------------�������޸�ѧ��������---------------\n");
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
		printf("-----------------��ѡ���޸�ѧ����Ϣ��---------------\n");
		printf("---------------------1������------------------------\n");
		printf("---------------------2��ѧ��------------------------\n");
		printf("---------------------3���������--------------------\n");
		printf("---------------------4�������·�--------------------\n");
		printf("---------------------5�������ڼ���------------------\n");
		printf("---------------------6�����ĳɼ�--------------------\n");
		printf("---------------------7����ѧ�ɼ�--------------------\n");
		printf("---------------------8��Ӣ��ɼ�--------------------\n");
		printf("---------------------9���˳��޸�ϵͳ----------------\n");

		int modify_choice;

		scanf("%d", &modify_choice);
		while (modify_choice != 9)
		{
			switch (modify_choice)
			{
			case 1:
				printf("***************�������޸ĺ��ѧ��������*********************\n");

				scanf("%s", &stu[i].name);
				break;
			case 2:
				printf("***************�������޸ĺ��ѧ��ѧ�ţ�*********************\n");

				scanf("%s", &stu[i].id);
				break;

			case 3:
				printf("***************�������޸ĺ�ĳ�����ݣ�*********************\n");


				scanf("%d", &stu[i].year);
				break;

			case 4:
				printf("***************�������޸ĺ�ĳ����·ݣ�*********************\n");


				scanf("%d", &stu[i].month);
				break;

			case 5:
				printf("***************�������޸ĺ�ĳ���������*********************\n");


				scanf("%d", &stu[i].day);
				break;

			case 6:
				printf("***************�������޸ĺ�����ĳɼ���*********************\n");


				scanf("%d", &stu[i].chinese);
				break;

			case 7:
				printf("***************�������޸ĺ����ѧ�ɼ���*********************\n");

				scanf("%d", &stu[i].math);
				break;

			case 8:
				printf("***************�������޸ĺ��Ӣ��ɼ���*********************\n");

				scanf("%d", &stu[i].english);
				break;

			case 9:
				break;
			default:
				printf("������1-9�е�����");
				modify(sum);
			}
			printf("--------------------�޸����!--------------------\n");
			printf("\n");

			printf("**********************���������޸Ĳ˵�***********************\n");
			printf("\n");
			printf("-----------------��ѡ���޸�ѧ����Ϣ��---------------\n");
			printf("---------------------1������------------------------\n");
			printf("---------------------2��ѧ��------------------------\n");
			printf("---------------------3���������--------------------\n");
			printf("---------------------4�������·�--------------------\n");
			printf("---------------------5�������ڼ���------------------\n");
			printf("---------------------6�����ĳɼ�--------------------\n");
			printf("---------------------7����ѧ�ɼ�--------------------\n");
			printf("---------------------8��Ӣ��ɼ�--------------------\n");
			printf("---------------------9���˳��޸�ϵͳ----------------\n");
			scanf("%d", &modify_choice);

		}
	}
	else printf("!!!!!!!!!!!!!!!!!û�в��ҵ���ѧ���������ѧ����!!!!!!!!!!!!!!\n");
	printf("\n");

}