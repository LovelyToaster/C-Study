#include <stdio.h>
#include <stdlib.h>
#define MAXL 100 //定义最多记录个数
typedef int KeyType;
typedef int InfoType;
typedef struct
{
	KeyType key;   // KeyType为关键字的数据类型
	InfoType data; //其他数据
} ElemType;		   //记录类型定义

typedef struct //顺序表存储待排序的记录
{
	ElemType R[MAXL];
	int length;
} SSTable;

int Search(SSTable ST, KeyType k) //顺序查找算法：返回-1查找失败，否则查找成功并表示查找的位置
{
	int i;
	for (i = 0; i < ST.length; i++)
	{
		if (ST.R[i].key == k)
			return i + 1;
	}
	return -1; //查找失败
}
int BinSearch(SSTable ST, KeyType k) //二分查找算法
{
	int i = 1, j = ST.length + 1, m;
	while (i <= j)
	{
		printf("%d\n", m);
		m = (i + j) / 2;
		if (k == ST.R[m - 1].key)
			return m;
		if (k > ST.R[m - 1].key)
			i = m + 1;
		else
			j = m - 1;
	}
	return -1; /*   查找失败  */
}
int main()
{
	SSTable st;
	int n = 10, i, k, choice;
	int a[] = {3, 6, 2, 10, 1, 8, 5, 7, 4, 9};
	int b[] = {1, 3, 5, 7, 18, 19, 30, 40, 50, 101};
	do
	{
		printf("\n                 请选择\n");
		printf("======================================\n");
		printf("               0:退出\n");
		printf("               1:顺序表查询\n");
		printf("               2:二分法查询\n");
		printf("======================================\n");
		printf("请选择0-2\n");
		scanf("%d", &choice);
		while (choice < 0 || choice > 2)
		{
			printf("输入错误，请重新输入:");
			scanf("%d", &choice);
		}
		switch (choice)
		{
		case 0:
			exit(1);
		case 1: //顺序表查找算法
			printf("查询表为：\n");
			for (i = 0; i < n; i++) //建立顺序表
			{
				st.R[i].key = a[i];
				printf("%d ", st.R[i].key);
			}
			st.length = n;
			printf("\n请输入待查关键字：");
			scanf("%d", &k);
			i = Search(st, k);
			break;
		case 2: //折半查找算法
			printf("查询表为：\n");
			for (i = 0; i < n; i++) //建立顺序表
			{
				st.R[i].key = b[i];
				printf("%d ", st.R[i].key);
			}
			st.length = n;
			printf("\n请输入待查关键字：");
			scanf("%d", &k);
			i = BinSearch(st, k);
			break;
		}
		printf("查找结果：\n");
		if (i != -1)
			printf("关键字为%d的数据位置是:%d。", k, i);
		else
			printf("关键字为%d的数据不在查询表中！\n", k);
		printf("\n");
	} while (choice);
	return 0;
}
