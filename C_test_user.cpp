#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C_test_user.h"
extern students stu[10000];
void menu()
{
	printf("-----------�˵�-----------");
	printf("1������n��ѧ������Ϣ\n");
	printf("2������n��ѧ������Ϣ\n");
	printf("3������n��ѧ������Ϣ\n");
	printf("4������n��ѧ������Ϣ\n");
	printf("5������n��ѧ������Ϣ\n");
	printf("6������n��ѧ������Ϣ\n");
	printf("7������n��ѧ������Ϣ\n");
	printf("8��-------�˳�------\n");
	printf("--------------------------");
	int choice;
	scanf("%d", &choice);
	while (choice != 8)
	{
		switch (choice)
		{
		case 1:
			scanf_students(stu);

		}
	}
}
void scanf_students(students stu[])
{
	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf%s%d%d%d%d%d%d", &stu[i].id,&stu[i].name, &stu[i].year ,&stu[i].month, &stu[i].day, &stu[i].chinese, &stu[i].math, &stu[i].english);
	}
}