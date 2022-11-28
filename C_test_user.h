#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C_test_user.h"

typedef struct students
{
	double id;
	char name[20];
	int year;
	int month;
	int day;
	int chinese, math, english;
};
extern students stu[10000];

void menu();		//菜单

void scanf_students(students stu);		//	读入n个学生生信息

