#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip> //setw()
using namespace std;
class people //检测人信息
{
public:
    string name; //检测人姓名
    string ID;   //检测人身份证号
};
class RNA //存储检测信息
{
public:
    string location; //检测地点
    string time;     //检测时间
    string unit;     //检测单位
    string outcome;  //检测结果
    people test;
};
int main();
int i = 0;
vector<RNA> test1; //定义一个vector类，用于方便人数控制
void search();     //数据查询
void change();     //数据修改
void output();     //数据输出
void input();      //数据输入
void write();      //数据写入文件
void menu()        //程序主界面
{
    int n;
    system("cls");
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
        system("cls");
        switch (n)
        {
        case 0:
            write();
            exit(0);
            cout << "已结束" << endl;
            break;
        case 1:
            input();
            break;
        case 2:
            search();
            break;
        case 3:
            change();
            break;
        case 4:
            output();
            break;
        default:
            cout << "没有该操作，请重新输入" << endl;
            break;
        }
        /*if (n == 0)
        {
            write();
            exit(0);
        }
        else if (n == 1)
            input();
        else if (n == 2)
            search();
        else if (n == 3)
            change();
        else if (n == 4)
            output();
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }*/
    }
}

void write() //数据写入文件
{
    ofstream outfile;
    outfile.open("test.dat", ios::binary | ios::out);
    outfile << test1.size() << endl;
    for (int n = 0; n < test1.size(); n++)
    {
        outfile << test1[n].test.name << endl;
        outfile << test1[n].test.ID << endl;
        outfile << test1[n].location << endl;
        outfile << test1[n].time << endl;
        outfile << test1[n].unit << endl;
        outfile << test1[n].outcome << endl;
    }
}
void read() //数据写入内存
{
    int a;
    RNA t;
    ifstream putfile;
    putfile.open("test.dat", ios::binary | ios::in);
    putfile >> a;

    for (int n = 0; n < a; n++)
    {
        putfile >> t.test.name;
        putfile >> t.test.ID;
        putfile >> t.location;
        putfile >> t.time;
        putfile >> t.unit;
        putfile >> t.outcome;
        test1.push_back(t);
    }
}
void back()
{
    cout << "输入0返回系统主界面(输入其他任意值则结束程序): ";
    cin >> i;
    if (i == 0)
        menu();
    else
    {
        write();
        exit(0);
    }
}
//==================数据录入==================
void input()
{
    RNA p;
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
        for (int n1 = 0; n1 < test1.size(); n1++) //判断身份证是否有重复
        {
            if (test1[n1].test.ID == p.test.ID)
            {
                cout << "输入错误! 请重新输入:";
                cin >> p.test.ID;
                n1 = 0;
            }
        }
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
    cout << endl
         << "录入完成！" << endl;
    back();
}
//==================数据查询==================
void search1() //姓名查找
{
    string t1, t2;
    int i1 = 0;
    cout << "请输入姓名(可以输入部分)：";
    cin >> t1;
    system("cls");
    for (int n = 0; n < test1.size(); n++)
    {
        t2 = test1[n].test.name;
        if (t2.find(t1) != t2.npos)
        {
            if (i1 == 0)
            {
                cout << left;
                cout << "姓名    身份证号            检测地点    检测时间             检测单位          检测结果" << endl;
                i1 = 1;
            }
            cout << setw(8) << test1[n].test.name << "  " << setw(18) << test1[n].test.ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
        }
    }
    if (i != 1)
        cout << "未查找到相关内容" << endl;
    back();
}

int search2(int i1) //身份证查找
{
    int n;
    string t1;
    cout << "请输入身份证号：";
    cin >> t1;
    system("cls");
    for (n = 0; n < test1.size(); n++)
    {
        if (t1 == test1[n].test.ID)
        {
            cout << left;
            cout << "姓名    身份证号            检测地点    检测时间             检测单位          检测结果" << endl;
            cout << setw(8) << test1[n].test.name << "  " << setw(18) << test1[n].test.ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
            break;
        }
    }
    if (i != 1)
        cout << "未查找到相关内容" << endl;
    if (i1 == 0)
        back();
    return n;
}
void search() //数据查询功能
{
    int n;
    system("cls");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    核酸检测管理系统                                    " << endl;
    cout << endl;
    cout << "                   1.按姓名查找                             2.按身份证查找               " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    cout << "请输入对应的序号: ";
    cin >> n;
    system("cls");
    while (1)
    {
        switch (n)
        {
        case 1:
            search1();
            break;
        case 2:
            search2(0);
            break; //修改
        default:
            cout << "没有该操作，请重新输入" << endl;
            break;
        }
        /*if (n == 1)
            search1();

        else if (n == 2)
            search2(0);
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }*/
    }
}
//==================数据修改==================
void changeout()
{
    cout << "请输入：";
}
void change() //数据修改
{
    int n;
    n = search2(1);
    while (1) //修改
    {
        cout << "==========================数据修改============================= " << endl
             << endl
             << "1.姓名"
             << "                 2.身份证号"
             << "                 3.检测地点" << endl
             << endl
             << "             4.检测时间"
             << "               5.检测单位" << endl
             << "===============================================================" << endl;
        cout << "请输入你要修改的内容：";
        cin >> i;
        switch (i)
        {
        case 1:
            changeout();
            cin >> test1[n].test.name;
            break;
        case 2:
            changeout();
            cin >> test1[n].test.ID;
            break;
        case 3:
            changeout();
            cin >> test1[n].location;
            break;
        case 4:
            changeout();
            cin >> test1[n].time;
            break;
        case 5:
            changeout();
            cin >> test1[n].unit;
            break;
        default:
            cout << "没有该选项，请重新输入" << endl;
        }
        /* if (i == 1)
        {
            changeout();
            cin >> test1[n].test.name;
        }
        else if (i == 2)
        {
            changeout();
            cin >> test1[n].test.ID;
        }
        else if (i == 3)
        {
            changeout();
            cin >> test1[n].location;
        }
        else if (i == 4)
        {
            changeout();
            cin >> test1[n].time;
        }
        else if (i == 5)
        {
            changeout();
            cin >> test1[n].unit;
        }*/
        cout << "输入0返回主菜单，输入任意键继续修改：";
        cin >> i;
        if (i == 0)
            menu();
        else
        {
            system("cls");
            cout << left;
            cout << "姓名    身份证号            检测地点    检测时间             检测单位          检测结果" << endl;
            cout << setw(8) << test1[n].test.name << "  " << setw(18) << test1[n].test.ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
        }
    }
}

void output() //输出所有数据
{
    system("clear");
    cout << left;
    cout << "姓名    身份证号            检测地点    检测时间             检测单位          检测结果" << endl;
    for (int n = 0; n < test1.size(); n++)
    {
        cout << setw(8) << test1[n].test.name << "  " << setw(18) << test1[n].test.ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
    }
    cout << "输出完毕，共" << test1.size() << "条数据" << endl;
    back();
}
int main()
{
    read();
    menu();
}
