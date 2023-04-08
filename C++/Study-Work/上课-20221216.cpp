#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
typedef int KeyType;
typedef int infoType;
typedef struct RecType
{
    KeyType key;        /* 关键字码  */
    infoType otherinfo; /* 其他域  */
} RecType;
typedef struct Sqlist
{
    RecType R[MAX_SIZE];
    int length;
} SqList; //顺序表

//直接插入排序,并输出每趟排序后数据的顺序
void Straight_Insert_Sort(Sqlist L)
{
    int i, j;
    RecType temp;
    for (i = 1; i < L.length; i++)
    {
        temp = L.R[i]; //将待排序元素放入临时变量
        j = i - 1;     //从L->R[i-1]开始向左查找
        while ((temp.key < L.R[j].key) && (j >= 0))
        {
            L.R[j + 1] = L.R[j]; //元素向后移动
            j--;                 //向左继续查找
        }
        L.R[j + 1] = temp; //将元素插入相应位置
                           ////第i次排序后查找表中元素次序
        printf("\n第%d次排序为：", i);
        for (j = 0; j < L.length; j++)
        {
            printf("  %d", L.R[j].key);
        }
        printf("\n");
    }
}
//折半插入排序算法，并输出每趟排序后数据的顺序
void Binary_Insert_Sort(Sqlist L)
{
    int i, j, low, high, m;
    RecType temp;
    for (i = 1; i < L.length; i++)
    {
        temp = L.R[i];
        low = 0;
        high = i - 1;
        while (low <= high)
        {
            m = (low + high) / 2;
            if (temp.key < L.R[m].key)
                high = m - 1;
            else
                low = m + 1;
        }
        for (j = i - 1; j >= high + 1; j--)
            L.R[j + 1] = L.R[j];
        L.R[high + 1] = temp;
        printf("\n第%d次排序为：", i);
        for (j = 0; j < L.length; j++)
        {
            printf("  %d", L.R[j].key);
        }
        printf("\n");
    }
}

//冒泡排序算法，并输出每趟排序后数据的顺序
void Bubble_Sort(Sqlist L)
{
    int i, j, x;
    RecType p;
    for (i = 0; i < L.length - 1; i++)
    {
        for (j = 1; j < L.length - i; j++)
        {
            if (L.R[j].key < L.R[j - 1].key)
            {
                p = L.R[j];
                L.R[j] = L.R[j - 1];
                L.R[j - 1] = p;
                printf("\n第%d次排序为：", i);
                for (j = 0; j < L.length; j++)
                {
                    printf("  %d", L.R[j].key);
                }
                printf("\n");
            }
        }
    }
}
int main()
{
    SqList L;
    int i, n = 0;
    KeyType items[MAX_SIZE] = {'\0'};
    printf("\n--------排序算法---------\n");
    printf("\n请输入要排序的记录关键字，输入-1结束\n");
    for (i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &items[i]);
        if (items[i] == -1)
        {
            break;
        }
        n++;
    }
    while (1)
    {
        for (i = 0; i < n; i++)
        {
            L.R[i].key = items[i];
        }
        L.length = n;
        printf("\n-------主菜单-------\n");
        printf("1.直接插入排序\n");
        printf("2.折半插入排序\n");
        printf("3.冒泡排序\n");
        printf("0.退出\n");
        printf("-----------------------\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            Straight_Insert_Sort(L);
            break;
        case 2:
            Binary_Insert_Sort(L);
            break;
        case 3:
            Bubble_Sort(L);
            break;
        case 0:
            exit(0);
        default:
            printf("\n错误！请重新输入...\n");
            break;
        }
    }
    return 0;
}
