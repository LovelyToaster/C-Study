#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxSize 10
typedef struct
{
    char xuehao[14]; //学号
    char name[20];   //姓名
    int sex;         //性别
    char tel[14];    //联系电话
    char qq[12];     // QQ号
} ElemType;          //数据元素结构
typedef struct
{
    ElemType list[MaxSize];
    int length;
} SeqList; //顺序表结构
/*****初始化顺序表****/
bool InitList(SeqList *&L)
{
    char flag;
    int i, n;
    L = (SeqList *)malloc(sizeof(SeqList));
    L->length = 0;
    printf("是否输入初始数据？（Y/N）");
    scanf("%c", &flag);
    if (flag == 'N' || flag == 'n')
        return false;
    printf("请输入初始化数据的个数:");
    scanf("%d", &n);
    if (n > MaxSize)
    {
        printf("数据太多，不足以存储！");
        return false;
    }
    L->length = n;
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个数据(学号  姓名  性别（0或1） 联系电话  QQ号)：\n", i + 1);
        scanf("%s%s%d%s%s", L->list[i].xuehao, L->list[i].name, &L->list[i].sex,
              L->list[i].tel, L->list[i].qq);
    }
    return true;
}
/***显示顺序表中数据***/
void PrintList(SeqList *L)
{
    int i;
    printf("通讯录中的数据为：\n");
    printf("学号    姓名    性别    联系电话    QQ号\n");
    for (i = 0; i < L->length; i++)
    {
        printf("%s\t%s\t", L->list[i].xuehao, L->list[i].name);
        if (L->list[i].sex)
            printf("男");
        else
            printf("女");
        printf("\t%s\t%6s\n", L->list[i].tel, L->list[i].qq);
    }
}
bool InsertList(SeqList *&L, int i, ElemType e) //数据插入
{
    int j;
    if (i < 1 || i > L->length + 1 || L->length == MaxSize)
        return false;
    i--;
    for (j = L->length; j > i; j--)
        L->list[j] = L->list[j - 1];
    L->list[i] = e;
    L->length++;
    return true;
}
bool ListDelete(SeqList *&L, int i) //数据删除
{
    int j;
    if (i < 1 || i > L->length)
        return false;
    i--;
    for (j = i; j < L->length - 1; j++)
        L->list[j] = L->list[j + 1];
    L->length--;
    return true;
}
/*  销毁顺序表  */
void DestroyList(SeqList *&L)
{
    free(L);
}
/*  主函数  */
int main()
{
    int i;
    SeqList *L;
    InitList(L);
    PrintList(L);
    printf("请输入删除记录的序号:");
    scanf("%d", &i);
    ListDelete(L, i);
    PrintList(L);
    DestroyList(L);
    return 0;
}
