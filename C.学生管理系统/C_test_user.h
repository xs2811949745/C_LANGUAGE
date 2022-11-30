#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "C_test_user.h"

extern struct students stu[10000];
extern struct students* p;

int menu();		//菜单

void scanf_students(int sz,students *p);		//	读入n个学生生信息

