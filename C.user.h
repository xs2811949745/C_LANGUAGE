#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>



int prime(int n);	//�����ж�

int vowel(char ch);	//	�ж�Ԫ��

int HmsToS(int h, int m, int s);  //����ʱ�������

void PrintTime(int c); //��ӡʱ���

int Narcissus(int a);  //�ж�ˮ�ɻ�

int find_same_string_num(char* atr1, char* str2);//������ͬ�ַ������ִ���   ,ֻ����scanf����

void del(int a[], int n, int i);  /*ɾ������a���±�Ϊi��Ԫ��*/

void PrintArr(int a[], int n); /*�������a��ǰn��Ԫ��*/

int sort(int a[], int n);	/*ð������δ�Ż���*/