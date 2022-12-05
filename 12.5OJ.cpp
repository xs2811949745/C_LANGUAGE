#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
int del_arr(int a[], int n);
void sort(int arr[], int n);
void PrintArr(int a[], int n);
int main()
{
	int n,arr[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int count=del_arr(arr, n);
	sort(arr, n-count);
	printf("%d\n", n - count);
	PrintArr(arr, n-count);
	return 0;
}
int del_arr(int a[], int n)
{
	int i, j, k;
		int count2=0;
	for ( i = 0; i <n-count2; i++)
	{
		int count = 0 ; 
		for ( j = 0; j < n-count2; j++)
		{
			if (a[i] == a[i + count + 1])
			{
				int count1 = count;
				for ( k = 0; k < n +1- i; k++)
				{
					a[i + count1 + 1] = a[i + count1 + 2];
					count1++;
				}
				count2++;
				i--;
			}
			count++;
		}
	}
	return count2;
}
void sort(int arr[], int n)
{
	int min = arr[0],tem;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j]> arr[j+1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;

			}
		}
	}
}
void PrintArr(int a[], int n)
{
	printf("%d", a[0]);
	for (int i = 1; i < n; i++)
	{
		printf(" %d", a[i]);
	}
}
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int i;
	int random;
	int flag[1001];
	int amount;
	int time;

	while (scanf("%d", &n) != EOF) {
		memset(flag, 0, sizeof(int) * 1001);

		for (i = 0; i < n; i++) {
			scanf("%d", &random);
			flag[random] = 1;
		}

		amount = 0;
		for (i = 0; i <= 1000; i++) {
			if (flag[i] == 1)
				amount++;
		}
		printf("%d\n", amount);

		time = 0;
		for (i = 0; i <= 1000; i++) {
			if (flag[i] == 1) {
				if (time != 0)
					printf(" ");

				else
					time = 1;

				printf("%d", i);
			}
		}
		printf("\n");
	}

	return 0;
}