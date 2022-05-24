#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class people //存储人信息
{
public:
    string name;
    string ID;
};
class RNA //存储检测信息
{
public:
    string location;
    string time;
    string unit;
    string outcome;
    people test;
};
int menu() //程序主界面
{
    int n;
    system("clear");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    核酸检测管理系统                                    " << endl;
    cout << endl;
    cout << "                                      0.结束本程序                                      " << endl;
    cout << endl;
    cout << "                   1.数据录入                             2.数据查询                    " << endl;
    cout << endl;
    cout << "                   3.数据修改                             4.显示已保存数据              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "请输入对应的序号: ";
        cin >> n;
        if (n == 1 || n == 2 || n == 3 || n == 4)
            break;
        else if (n == 0)
            return 0;
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }
    }
    system("clear");
    return n;
}
void input() //数据录入
{
    int i;
    RNA p;
    vector<RNA> test1; //定义一个vector类，用于方便人数控制
    cout << "请输入需要录入的人数：";
    cin >> i;
    for (int n = 0; n < i; n++)
    {
        cout << "第" << n + 1 << "个人" << endl;
        cout << "请输入检测人姓名：";
        cin >> p.test.name;
        cout << endl
             << "请输入检测人身份证号：";
        cin >> p.test.ID;
        cout << endl
             << "请输入检测地点：";
        cin >> p.location;
        cout << endl
             << "请输入检测时间：";
        cin >> p.time;
        cout << endl
             << "请输入检测单位：";
        cin >> p.unit;
        cout << endl
             << "请输入检测结果：";
        cin >> p.outcome;
        test1.push_back(p);
    }
    system("clear");
    for (int n = 0; n < i; n++)
    {
        cout << endl
             << "检测人姓名：" << test1[n].test.name;
        cout << endl
             << "检测人身份证号：" << test1[n].test.ID;
        cout << endl
             << "检测地点："
             << test1[n].location;
        cout << endl
             << "检测时间："
             << test1[n].time;
        cout << endl
             << "检测单位："
             << test1[n].unit;
        cout
            << endl
            << "检测结果："
            << test1[n].outcome << endl;
    }
    cout << "输入0返回系统主界面(输入其他任意值则结束程序): ";
    cin >> i;
    if (i == 0)
        menu();
}
void search1()
{
}
void search2()
{
}
void search() //数据查询功能
{
    int i;
    cin >> i;
    if (i == 1)
        ;

    if (i == 2)
        ;
}
int main()
{
    int i;
    i = menu();
    if (i == 1)
        input();
    else if (i == 2)
        search();
    return 0;
}