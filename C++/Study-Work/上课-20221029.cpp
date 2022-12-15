#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char xuehao[14]; //学号
    char name[20];   //姓名
    int sex;         //性别
    char tel[14];    //联系电话
    char qq[12];     // QQ号
} DataType;
typedef struct LNode
{
    DataType data;
    struct LNode *next;
} LNode;
//创建链表
void CreatList(LNode *&head) //尾插法建立链表
{
    char flag = 'y';
    LNode *p, *s;
    head = (LNode *)malloc(sizeof(LNode));
    s = head;
    head->next = NULL;
    while ((flag == 'Y') || (flag == 'y'))
    {
        p = (LNode *)malloc(sizeof(LNode));
        if (!p)
            exit(-1);
        printf("请输入数据(学号     姓名    性别（0或1）      联系电话       QQ号)：\n");
        scanf("%s%s%d%s%s", p->data.xuehao, p->data.name, &p->data.sex, p->data.tel, p->data.qq);
        p->next = s->next;
        s->next = p;
        s = p;
        getchar();
        printf("继续输入吗？（y/n）:");
        scanf("%c", &flag);
        printf("\n");
    }
}
//输出数据
void PrintList(LNode *head)
{
    LNode *p;
    p = head->next;
    printf("学号       姓名         性别        联系电话       QQ号\n");
    printf("------------------------------------------------------------\n");
    while (p != NULL)
    {
        printf("%-14s%-14s", p->data.xuehao, p->data.name);
        if (p->data.sex)
            printf("男      ");
        else
            printf("女      ");
        printf("%-14s%-10s\n", p->data.tel, p->data.qq);
        printf("----------------------------------------------------------\n");
        p = p->next;
    }
}
/////销毁单链表/////
void DestroyList(LNode *&head)
{
    LNode *q, *p = head; //让p指向头结点
    while (p != NULL)
    {
        q = p->next; //让q指向头结点的后续结点
        free(p);     //删除p
        p = q;
    }
    head = NULL;
}
bool InsertList(LNode *head, int i, DataType e) //插入
{
    int j = 0;
    LNode *p = head, *s;
    if (i <= 0)
        return false;
    while (j < i - 1 && p != NULL)
    {
        j++;
        p = p->next;
    }
    if (p == NULL)
        return false;
    else
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = p->next;
        p->next = s;
        return true;
    }
}
bool DeleteList(LNode *head, int i) //删除
{
    int j = 0;
    LNode *p = head, *q;
    if (i <= 0)
        return false;
    while (j < i - 1 && p != NULL)
    {
        j++;
        p = p->next;
    }
    if (p == NULL)
        return false;
    else
    {
        q = p->next;
        if (q == NULL)
            return false;
        p->next = q->next;
        free(q);
        return true;
    }
}
int main()
{
    LNode *head;
    DataType e;
    int choice, i;
    do
    {
        printf("             通讯录管理系统\n");
        printf("======================================\n");
        printf("               0:退出系统\n");
        printf("               1:建立链表\n");
        printf("               2:插入数据\n");
        printf("               3:删除数据\n");
        printf("               4:输出数据\n");
        printf("======================================\n");
        printf("请选择0-4\n");
        scanf("%d", &choice);
        while (choice < 0 || choice > 4)
        {
            printf("输入错误，请重新输入:");
            scanf("%d", &choice);
        }
        switch (choice)
        {
        case 0:
            DestroyList(head);
            exit(1);
        case 1:
            CreatList(head); //创建单链表，尾插入法
            break;
        case 2:
            printf("请输入要插入的数据：\n");
            printf("学号     姓名    性别（0或1）      联系电话       QQ号\n");
            scanf("%s%s%d%s%s", e.xuehao, e.name, &e.sex, e.tel, e.qq);
            printf("请输入要插入位置：\n");
            scanf("%d", &i);
            InsertList(head, i, e); // 在链表head，第i个位置插入值为e的结点。
            break;
        case 3:
            DeleteList(head, 1); //假设删除位置1结点
            break;
        case 4:
            PrintList(head); //输出单链表数据
            break;
        }
    } while (choice);
    return 0;
}
