#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C_test_user.h"

extern struct students stu[10000];
extern struct students* p;
extern int sz;

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
	printf("--------------------------");
	int choice;
	scanf("%d", &choice);

	return choice;

}

void scanf_students(int sz,students *p)
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf%s%d%d%d%d%d%d", &p, & p, & p, & p, & p, & p, & p, & p);
		p++;
	}
}
