#include <bits/stdc++.h>
#include <string>
#include <stdlib.h> //内存管理
using namespace std;
typedef struct
{
    int no;
    string name;
    string zc_name;
    int sex;
    string lesson[3];
    struct LNode *next;
} ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LinkNode;
LinkNode *head;
void Add(LinkNode *head) //添加
{
    LinkNode *q, *p = head;
    q = p->next;
    while (q != NULL)
    {
        p = q;
        q = q->next;
    }
    q = new LinkNode();
    q->next = NULL;
    cin >> q->data.no;
    cin >> q->data.name;
    cin >> q->data.zc_name;
    cin >> q->data.sex;
    cin >> q->data.lesson[0];
    cin >> q->data.lesson[1];
    cin >> q->data.lesson[2];
    p->next = q;
}
void PrintLink(LinkNode *head) //输出
{
    LinkNode *p = head->next;
    while (p != NULL)
    {
        cout << p->data.no << endl;
        cout << p->data.name << endl;
        cout << p->data.zc_name << endl;
        cout << p->data.sex << endl;
        cout << p->data.lesson[0] << endl;
        cout << p->data.lesson[1] << endl;
        cout << p->data.lesson[2] << endl;
        p = p->next;
    }
}
void Change(LinkNode *head);    //修改
void Namesearch(LinkNode *head) //模糊姓名查找
{
    string name;
    cin >> name;
    LinkNode *p = head->next;
    while (p != NULL)
    {
        if (name.find(p->data.name) != name.npos)
        {
            cout << p->data.no << endl;
            cout << p->data.name << endl;
            cout << p->data.zc_name << endl;
            cout << p->data.sex << endl;
            cout << p->data.lesson[0] << endl;
            cout << p->data.lesson[1] << endl;
            cout << p->data.lesson[2] << endl;
        }
        p = p->next;
    }
}
void Lessonsearch(LinkNode *head) //课程查找
{
    string Lessonname;
    cin >> Lessonname;
    LinkNode *p = head->next;
    while (p != NULL)
    {
        for (int i = 0; i < 3; i++)
        {
            if (p->data.lesson[i] != Lessonname)
                continue;
            else
            {
                cout << p->data.no << endl;
                cout << p->data.name << endl;
                cout << p->data.zc_name << endl;
                cout << p->data.sex << endl;
                cout << p->data.lesson[0] << endl;
                cout << p->data.lesson[1] << endl;
                cout << p->data.lesson[2] << endl;
            }
        }
        p = p->next;
    }
}
void menu() //菜单
{
    string choice;
    system("clear");
    printf("=======================================================================================\n");
    printf("\n");
    printf("                                    学院教学信息管理系统                                \n");
    printf("\n");
    printf("                                      0.结束本程序                                      \n");
    printf("\n");
    printf("                   1.数据录入                             2.数据显示                    \n");
    printf("\n");
    printf("                   3.数据排序                             4.数据查找                    \n");
    printf("\n");
    printf("=======================================================================================\n");
    while (1)
    {
        cout << "请输入序号：";
        cin >> choice;
        if (choice == "0") //退出
            exit(0);
        else if (choice == "1") //添加人员信息
            Add(head);
        else if (choice == "2") //显示
            PrintLink(head);
        else if (choice == "3") //排序
            printf("您选择了：排序功能！\n");
        else if (choice == "4") //查找
            Namesearch(head);
        else
            printf("输入有误，请重新输入\n");
    }
}
int main()
{
    head = new LinkNode();
    head->next == NULL;
    menu();
    return 0;
}
