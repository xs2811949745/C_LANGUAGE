#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

#include <stdio.h>
//struct students
//{
//	char name[21];
//	int score;
//};
//struct students stu[20];
//void stu_sort(struct students stu[],int n);
//void PrintStr(struct students stu[], int n);
//
//int main()
//{
//	
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &stu[i].name);
//		scanf("%d", &stu[i].score);
//	}
//
//	stu_sort(stu, n);
//	PrintStr(stu, n);
//
//	return 0;
//}
//void stu_sort(struct students stu[], int n)
//{
//	struct students tem;
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (stu[j].score < stu[j + 1].score)
//			{
//				tem = stu[j];
//				stu[j] = stu[j + 1];
//				stu[j + 1] = tem;
//			}
//			if (stu[j].score == stu[j + 1].score)
//			{
//				if (strcmp(stu[j].name,stu[j+1].name)>0)
//				{
//					tem = stu[j];
//					stu[j] = stu[j + 1];
//					stu[j + 1] = tem;
//				}
//			}
//		}
//	}
//}
//void PrintStr(struct students stu[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s %d\n", stu[i].name, stu[i].score);
//	}
//}
//int main()
//{
//	char a[30] = "how are you";
//	strcpy(a + 4, "do");
//	printf("%s", a);
//	return 0;
//}
//int main()
//{
//	int a[][3] = { {1,0,2},{1},{2,3} };
//	return 0;
//}
//#include<stdio.h>
//
//// ���������Ҫ����ȫ�ֱ�������Ȼ�����
//
//int a[1000000], b[1000000];
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	//�����������Ϊ��������,������� 
//	for (int i = m - 1; i >= 0; i--)
//		scanf("%d", &a[i]);
//	int n;
//	scanf("%d", &n);
//	//�������鲻��
//	for (int j = 0; j < n; j++)
//		scanf("%d", &b[j]);
//	int ta = 0, tb = 0, tc = 0;//������������ģ��ָ���ƶ� 
//	int c[8];//C�������ڴ�����кõ�����
//	while (ta < m && tb < n)//�ȶ�����������Ĺ�ͬ�����ڽ��бȽ� 
//	{
//		//ѡ��a,b������ϴ��һ�ߴ���c���飬ͬʱ�ı������±�
//		if (a[ta] > b[tb])
//		{
//			c[tc++] = a[ta++];
//		}
//		else
//		{
//			c[tc++] = b[tb++];
//		}
//	}
//	//��while������if,��Ҫ����ִ�ж��ѭ�� 
//	while (ta < m)//����ʱ�Ѿ���һ������ԭ�����鳤�ȣ�a��������� 
//	{
//		c[tc++] = a[ta++];
//	}
//	while (tb < n)//b��������� 
//	{
//		c[tc++] = b[tb++];
//	}
//	for (int k = 0; k < m + n; k++)
//		if (k != m + n - 1)printf("%d ", c[k]);
//		else
//			printf("%d", c[k]);
//	return 0;
//}
//#include <stdio.h>
//void PrintArr(int a[], int n);/*�������a��ǰn��Ԫ��*/
//
//int a[1000000], b[1000000],c[2000010];
//int main()
//{
//	
//	int m, n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	
//	}
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	int d = m + n;
//	
//		int j = 0;
//	for (int i=0;i<d;i++)
//	{
//		if (a[n - 1] > b[j])
//		{
//			c[i] = a[n - 1];
//			n--;
//		}
//		else if(a[n-1]<b[j])
//		 {
//			c[i] = b[j];
//			j++;
//		}
//		else if(a[n - 1] == b[j])
//		{
//			c[i] = a[n - 1];
//			c[i + 1] = b[j];
//			n--; j++;
//			i++;
//		}
//	}
//	/*int tem; int flag = 0;
//	for (int i = 0; i < d - 1; i++)
//	{
//		for (int j = 0; j < d - 1 - i; j++)
//		{
//			if (c[j] <= c[j + 1])
//			{
//				tem = c[j + 1];
//				c[j + 1] = c[j];
//				c[j] = tem;
//				flag = 1;
//			}
//		}
//		if(flag==0)
//			break;
//	}*/
//	PrintArr(c, d);
//	return 0;
//}
//void PrintArr(int a[], int n)/*�������a��ǰn��Ԫ��*/
//{
//	int x;
//	printf("%d", a[0]);
//	for (x = 1; x <= n - 1; x++)
//		printf(" %d", a[x]);
//
//}