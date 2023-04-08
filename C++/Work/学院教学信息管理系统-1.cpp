#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int no;           // 职工号
    string name;      // 名字
    string zc_name;   // 职位
    string sex;       // 性别
    string lesson[3]; // 三个课程
    int mark;         // 教学效果综合评分
    string time;      // 录入时间
    struct LNode *next;
} ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LinkNode;
LinkNode *head = NULL;
void menu();
int Addsome(LinkNode *head);
string time1() // 获取系统时间
{
    time_t nowtime;
    struct tm *n_t;
    time(&nowtime);
    n_t = localtime(&nowtime);
    char Now_Time[100] = {0};
    sprintf(Now_Time, "%02d-%02d-%02d_%02d:%02d:%02d", n_t->tm_year + 1900, n_t->tm_mon + 1,
            n_t->tm_mday, n_t->tm_hour, n_t->tm_min, n_t->tm_sec);
    string time(Now_Time);
    return time;
}
void DestroyList(LinkNode *head) // 销毁链表
{
    LinkNode *q, *p = head;
    while (p != NULL)
    {
        q = p->next;
        delete p;
        p = q;
    }
    head = NULL;
}
void write(LinkNode *head) // 文件写入
{
    int datasome = 0;
    datasome = Addsome(head);
    LinkNode *p = head->next;
    ofstream outfile;
    outfile.open("Data.txt", ios::binary | ios::out);
    outfile << datasome << endl;
    while (p != NULL)
    {
        outfile << p->data.no << endl;
        outfile << p->data.name << endl;
        outfile << p->data.zc_name << endl;
        outfile << p->data.sex << endl;
        outfile << p->data.lesson[0] << endl;
        outfile << p->data.lesson[1] << endl;
        outfile << p->data.lesson[2] << endl;
        outfile << p->data.mark << endl;
        outfile << p->data.time << endl;
        p = p->next;
    }
}
void read(LinkNode *head) // 文件读取
{
    int datasome = 0;
    LinkNode *p = head, *q;
    ifstream putfile;
    putfile.open("Data.txt", ios::binary | ios::in);
    putfile >> datasome;
    q = p->next;
    for (int i = 0; i < datasome; i++)
    {

        while (q != NULL)
        {
            p = q;
            q = q->next;
        }
        q = new LinkNode();
        q->next = NULL;
        putfile >> q->data.no;
        putfile >> q->data.name;
        putfile >> q->data.zc_name;
        putfile >> q->data.sex;
        putfile >> q->data.lesson[0];
        putfile >> q->data.lesson[1];
        putfile >> q->data.lesson[2];
        putfile >> q->data.mark;
        putfile >> q->data.time;
        p->next = q;
    }
}
void back() // 返回
{
    string i;
    cout << "输入0返回主界面,输入其他任意值退出程序:";
    cin >> i;
    if (i == "0")
        menu();
    else
    {
        write(head);
        DestroyList(head);
        exit(0);
    }
}
int Addsome(LinkNode *head) // 统计
{
    int i = 0;
    LinkNode *p = head->next;
    while (p != NULL)
    {
        i++;
        p = p->next;
    }
    return i;
}
void Add(LinkNode *head) // 添加
{
    int i, n, datasome = 0, sexadd;
    string time;
    cout << "请输入需要添加的人数:";
    cin >> i;
    LinkNode *q, *p = head, *s = head->next;
    q = p->next;
    for (int n = 0; n < i; n++)
    {
        system("clear");
        time = time1();
        s = head->next;
        datasome = Addsome(head);
        while (q != NULL)
        {
            p = q;
            q = q->next;
        }
        q = new LinkNode();
        q->next = NULL;
        cout << "添加第" << n + 1 << "个人" << endl;
        cout << "职员号:";
        cin >> q->data.no;
        for (int i1 = 0; i1 < datasome; i1++) // 职工号重复测试
        {
            while (q->data.no == s->data.no)
            {
                cout << "职工号重复，请重新输入:";
                cin >> q->data.no;
                i1 = 0;
                s = head->next;
            }
            s = s->next;
        }
        cout << "姓名:";
        cin >> q->data.name;
        cout << "职称:";
        cin >> q->data.zc_name;
        cout << "性别(0:男,1:女):";
        while (1)
        {
            cin >> sexadd;
            if (sexadd == 0)
            {
                q->data.sex = "男";
                break;
            }
            if (sexadd == 1)
            {
                q->data.sex = "女";
                break;
            }
            else
                cout << "性别输入错误！请重新输入:";
        }
        cout << "课程1:";
        cin >> q->data.lesson[0];
        cout << "课程2:";
        cin >> q->data.lesson[1];
        cout << "课程3:";
        cin >> q->data.lesson[2];
        cout << "教学效果综合评分:";
        cin >> q->data.mark;
        q->data.time = time;
        cout << "录入时间为:" << time << endl;
        p->next = q;
    }
    cout << "添加完成！" << endl;
    back();
}
void PrintLink(LinkNode *head, int i = 0) // 输出
{
    system("clear");
    int datasome;
    datasome = Addsome(head);
    LinkNode *p = head->next;
    if (p == NULL)
    {
        cout << "没有数据！" << endl;
        back();
    }
    cout << "记录如下,共计" << datasome << "条数据！" << endl;
    cout << "职员号          姓名            职称            性别          课程1            课程2            课程3            教学效果综合评分       录入时间" << endl;
    while (p != NULL)
    {
        cout << left;
        cout << setw(16) << p->data.no << setw(16) << p->data.name << setw(16) << p->data.zc_name << setw(14) << p->data.sex << setw(17) << p->data.lesson[0] << setw(17) << p->data.lesson[1] << setw(17) << p->data.lesson[2] << setw(17) << p->data.mark << setw(6) << " " << p->data.time << endl;
        p = p->next;
    }
    if (i == 0)
        back();
}
void Sort(LinkNode *head) // 排序
{
    int i, Sortsome;
    system("clear");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                  学院教学信息管理系统                                  " << endl;
    cout << endl;
    cout << "                                      0.返回主界面                                      " << endl;
    cout << endl;
    cout << "                         1.按职工号排序          2.按教学效果综合评分排序                 " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    cout << "请输入序号:";
    while (1)
    {
        cin >> i;
        if (i == 0)
            menu();
        LinkNode *p = head->next, *q;
        Sortsome = Addsome(head);
        if (i == 1)
        {
            for (int n = 0; n < Sortsome - 1; n++)
            {
                q = p;
                for (int j = n; j < Sortsome - 1; j++)
                {
                    if (q->data.no > q->next->data.no)
                    {
                        swap(q->data, q->next->data);
                    }
                    q = q->next;
                }
            }
            break;
        }
        if (i == 2)
        {
            for (int n = 0; n < Sortsome - 1; n++)
            {
                q = p;
                for (int j = n; j < Sortsome - 1; j++)
                {
                    if (q->data.mark > q->next->data.mark)
                    {
                        swap(q->data, q->next->data);
                    }
                    q = q->next;
                }
            }
            break;
        }
        else
        {
            cout << "输入错误,请重新输入:";
        }
    }
    PrintLink(head);
}
void Change(LinkNode *head, int i1 = 0) // 修改&删除&职工号查找
{
    system("clear");
    int nochange, i = 0, i2;
    string i3;
    if (i1 == 1)
    {
        PrintLink(head, 1);
        cout << "请输入你要修改的职员号:";
    }
    else if (i1 == 2)
    {
        PrintLink(head, 1);
        cout << "请输入你要删除的职员号:";
    }
    else
        cout << "请输入你要查询的职员号:";
    cin >> nochange;
    LinkNode *p = head->next, *q = head;
    while (p != NULL && i == 0)
    {
        if (p->data.no == nochange) // 职工号查找
        {
            system("clear");
            cout << "职员号          姓名            职称            性别          课程1            课程2            课程3            教学效果综合评分       录入时间" << endl;
            cout << left;
            cout << setw(16) << p->data.no << setw(16) << p->data.name << setw(16) << p->data.zc_name << setw(14) << p->data.sex << setw(17) << p->data.lesson[0] << setw(17) << p->data.lesson[1] << setw(17) << p->data.lesson[2] << setw(17) << p->data.mark << setw(6) << " " << p->data.time << endl;
            i = 1;
            if (i1 == 0)
                back();
        }
        if (i == 0)
        {
            q = q->next;
            p = p->next;
        }
    }
    if (i == 0)
    {
        system("clear");
        cout << "没有数据！" << endl;
        back();
    }
    if (i == 1 && i1 == 1) // 修改
    {
        while (1)
        {
            cout << "1.姓名" << endl
                 << "2.职称" << endl
                 << "3.课程1" << endl
                 << "4.课程2" << endl
                 << "5.课程3" << endl
                 << "6.教学效果综合评分" << endl;
            cout << "请输入你要修改的内容(输入其他任意数取消操作):";
            cin >> i2;
            if (i2 == 1)
            {
                cout << "请输入:";
                cin >> p->data.name;
            }
            if (i2 == 2)
            {
                cout << "请输入:";
                cin >> p->data.zc_name;
            }
            if (i2 == 3)
            {
                cout << "请输入:";
                cin >> p->data.lesson[0];
            }
            if (i2 == 4)
            {
                cout << "请输入:";
                cin >> p->data.lesson[1];
            }
            if (i2 == 5)
            {
                cout << "请输入:";
                cin >> p->data.lesson[2];
            }
            if (i2 == 6)
            {
                cout << "请输入:";
                cin >> p->data.mark;
            }
            else
            {
                cout << "已取消操作！" << endl;
                back();
            }
            cout << "修改完毕！输入0返回主菜单，输入任意键继续修改：";
            cin >> i2;
            if (i2 == 0)
                menu();
            else
            {
                system("clear");
                cout << left;
                cout << "职员号          姓名            职称            性别          课程1            课程2            课程3            教学效果综合评分       录入时间" << endl;
                cout << setw(16) << p->data.no << setw(16) << p->data.name << setw(16) << p->data.zc_name << setw(14) << p->data.sex << setw(17) << p->data.lesson[0] << setw(17) << p->data.lesson[1] << setw(17) << p->data.lesson[2] << setw(17) << p->data.mark << setw(6) << " " << p->data.time << endl;
            }
        }
    }
    if (i == 1 && i1 == 2) // 删除
    {
        cout << "您确认要删除此记录吗？(Y/N):";
        cin >> i3;
        if (i3 == "Y" || i3 == "y")
        {
            q->next = p->next;
            delete p;
            cout << "删除成功！" << endl;
            back();
        }
        else
        {
            cout << "已取消操作！" << endl;
            back();
        }
    }
}
void Namesearch(LinkNode *head) // 模糊姓名查找
{
    string name;
    int i = 0, i1 = 0;
    cout << "请输入你要查找的姓名(支持模糊查找):";
    cin >> name;
    LinkNode *p = head->next;
    while (p != NULL)
    {
        if (p->data.name.find(name) != p->data.name.npos)
        {
            i = 1;
            if (i == 1 && i1 == 0)
            {
                system("clear");
                cout << "职员号          姓名            职称            性别          课程1            课程2            课程3            教学效果综合评分       录入时间" << endl;
                i1 = 1;
            }
            cout << left;
            cout << setw(16) << p->data.no << setw(16) << p->data.name << setw(16) << p->data.zc_name << setw(14) << p->data.sex << setw(17) << p->data.lesson[0] << setw(17) << p->data.lesson[1] << setw(17) << p->data.lesson[2] << setw(17) << p->data.mark << setw(6) << " " << p->data.time << endl;
        }
        p = p->next;
    }
    if (i1 == 0)
    {
        system("clear");
        cout << "没有数据！" << endl;
    }
    back();
}
void Lessonsearch(LinkNode *head) // 课程查找
{
    string Lessonname;
    int i1 = 0, i2 = 0;
    cout << "请输入你要查找的课程:";
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
                i1 = 1;
                if (i1 == 1 && i2 == 0)
                {
                    system("clear");
                    cout << "职员号          姓名            职称            性别          课程1            课程2            课程3            教学效果综合评分       录入时间" << endl;
                    i2 = 1;
                }
                cout << left;
                cout << setw(16) << p->data.no << setw(16) << p->data.name << setw(16) << p->data.zc_name << setw(14) << p->data.sex << setw(17) << p->data.lesson[0] << setw(17) << p->data.lesson[1] << setw(17) << p->data.lesson[2] << setw(17) << p->data.mark << setw(6) << " " << p->data.time << endl;
                break;
            }
        }
        p = p->next;
    }
    if (i2 == 0)
    {
        system("clear");
        cout << "没有数据！" << endl;
    }
    back();
}
void Searchui() // 数据查询功能
{
    string n;
    system("clear");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                  学院教学信息管理系统                                   " << endl;
    cout << endl;
    cout << "                                      0.返回主界面                                      " << endl;
    cout << endl;
    cout << "                    1.按姓名查找      2.按课程查找    3.按职工号查找                     " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "请输入对应的序号: ";
        cin >> n;
        if (n == "0")
            menu();
        else if (n == "1")
            Namesearch(head);
        else if (n == "2")
            Lessonsearch(head);
        else if (n == "3")
            Change(head, 0);
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }
    }
}
void Changeui() // 数据查询功能
{
    string n;
    system("clear");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                  学院教学信息管理系统                                   " << endl;
    cout << endl;
    cout << "                                      0.返回主界面                                      " << endl;
    cout << endl;
    cout << "                            1.数据修改          2.数据删除                              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "请输入对应的序号: ";
        cin >> n;
        if (n == "0")
            menu();
        else if (n == "1")
            Change(head, 1);
        else if (n == "2")
            Change(head, 2);
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }
    }
}
void menu() // 菜单
{
    system("clear");
    string choice;
    printf("=======================================================================================\n");
    printf("\n");
    printf("                                    学院教学信息管理系统                                \n");
    printf("\n");
    printf("                                      0.结束本程序                                      \n");
    printf("\n");
    printf("                    1.数据录入                             2.数据显示                    \n");
    printf("\n");
    printf("                    3.数据排序                             4.数据查找                    \n");
    printf("\n");
    printf("                                     5.数据修改&删除                                   \n");
    printf("\n");
    printf("=======================================================================================\n");
    while (1)
    {
        cout << "请输入序号：";
        cin >> choice;
        if (choice == "0") // 退出
        {
            write(head);
            DestroyList(head);
            exit(0);
        }
        else if (choice == "1") // 添加人员信息
            Add(head);
        else if (choice == "2") // 显示
            PrintLink(head);
        else if (choice == "3") // 排序
            Sort(head);
        else if (choice == "4") // 查找
            Searchui();
        else if (choice == "5") // 查找
            Changeui();
        else
            cout << "输入有误，请重新输入" << endl;
    }
}
int main()
{
    head = new LinkNode();
    head->next == NULL;
    read(head);
    menu();
    return 0;
}
