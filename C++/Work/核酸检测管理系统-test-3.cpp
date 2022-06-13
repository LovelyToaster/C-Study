#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
class RNA //存储信息
{
    string location;
    string time;
    string unit;
    string outcome;
    string name;
    string ID;
    vector<RNA> test1; //动态数组，用于方便人数控制
public:
    void search1();
    int search2(int);
    void search3();
    void change();
    void output();
    void input();
    void write();
    void read();
};
int main();
int i = 0;
RNA t3;
string time1();
void search();
void menu() //程序主界面
{
    string n;
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
        if (n == "0")
        {
            t3.write();
            exit(0);
        }
        else if (n == "1")
            t3.input();
        else if (n == "2")
            search();
        else if (n == "3")
            t3.change();
        else if (n == "4")
            t3.output();
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }
    }
}
void RNA::write() //数据写入文件
{
    ofstream outfile;
    outfile.open("Data", ios::binary | ios::out);
    outfile << test1.size() << endl;
    for (int n = 0; n < test1.size(); n++)
    {
        outfile << test1[n].name << endl;
        outfile << test1[n].ID << endl;
        outfile << test1[n].location << endl;
        outfile << test1[n].time << endl;
        outfile << test1[n].unit << endl;
        outfile << test1[n].outcome << endl;
    }
}
void RNA::read() //数据写入内存
{
    int a;
    RNA t;
    ifstream putfile;
    putfile.open("Data", ios::binary | ios::in);
    putfile >> a;
    if(a==1) a=a-1;
    for (int n = 0; n < a; n++)
    {
        putfile >> t.name;
        putfile >> t.ID;
        putfile >> t.location;
        putfile >> t.time;
        putfile >> t.unit;
        putfile >> t.outcome;
        test1.push_back(t);
    }
}
void back() //返回
{
    string i1;
    cout << "输入0返回系统主界面(输入其他任意值则结束程序): ";
    cin >> i1;
    if (i1 == "0")
        menu();
    else
    {
        t3.write();
        exit(0);
    }
}
string time1() //获取系统时间
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
void RNA::input() //数据录入
{
    system("cls");
    RNA p;
    string nowtime;
    nowtime = time1();
    cout << "请输入需要录入的人数：";
    cin >> i;
    for (int n = 0; n < i; n++)
    {
        cout << "第" << n + 1 << "个人" << endl;
        cout << "请输入检测人姓名：";
        cin >> p.name;
        cout << endl
             << "请输入检测人身份证号：";
        cin >> p.ID;
        for (int n1 = 0; n1 < test1.size(); n1++) //判断身份证是否有重复
        {
            while (test1[n1].ID == p.ID)
            {
                cout << "输入错误! 请重新输入:";
                cin >> p.ID;
                n1 = 0;
            }
        }
        cout << endl
             << "请输入检测地点：";
        cin >> p.location;
        cout << endl
             << "请输入检测单位：";
        cin >> p.unit;
        cout << endl
             << "请输入检测结果(阴性或阳性)：";
        cin >> p.outcome;
        cout << endl
             << "检测时间为：" << nowtime<<endl;
        p.time = nowtime;
        test1.push_back(p);
    }
    cout << endl
         << "录入完成！" << endl;
    back();
}
void RNA::search1() //姓名查找
{
    system("cls");
    string t1, t2;
    int i1 = 0;
    cout << "请输入姓名(可以输入部分)：";
    cin >> t1;
    system("cls");
    for (int n = 0; n < test1.size(); n++)
    {
        t2 = test1[n].name;
        if (t2.find(t1) != t2.npos)
        {
            if (i1 == 0)
            {
                cout << left;
                cout << "姓名      身份证号            检测地点      检测时间             检测单位            检测结果" << endl;
                i1 = 1;
            }
            cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
        }
    }
    if (i != 1)
        cout << "未查找到相关内容" << endl;
    back();
}
int RNA::search2(int i1) //身份证查找
{
    system("cls");
    int n;
    string t1;
    cout << "请输入身份证号：";
    cin >> t1;
    system("cls");
    for (n = 0; n < test1.size(); n++)
    {
        if (t1 == test1[n].ID)
        {
            cout << left;
            cout << "姓名      身份证号            检测地点      检测时间             检测单位            检测结果" << endl;
            cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
            break;
        }
    }
    if (i1 == 0)
    {
        if (i != 1)
            cout << "未查找到相关内容" << endl;
        back();
    }
    if (i != 1)
        n = -1;
    return n;
}
void RNA::search3() //核酸检测结果查找
{
    system("cls");
    string i2;
    int i1 = 0;
    string t1;
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    核酸检测管理系统                                    " << endl;
    cout << endl;
    cout << "                              1.阴性               2.阳性                              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "请输入对应的序号: ";
        cin >> i2;
        if (i2 == "1")
        {
            t1 = "阴性";
            break;
        }
        else if (i2 == "2")
        {
            t1 = "阳性";
            break;
        }
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }
    }
    system("cls");
    for (int n = 0; n < test1.size(); n++)
    {
        if (t1 == test1[n].outcome)
        {
            if (i1 == 0)
            {
                cout << left;
                cout << "姓名      身份证号            检测地点      检测时间             检测单位            检测结果" << endl;
                i1 = 1;
            }
            cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
        }
    }
    if (i != 1)
        cout << "未查找到相关内容" << endl;
    back();
}
void search() //数据查询功能
{
    string n;
    system("cls");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    核酸检测管理系统                                    " << endl;
    cout << endl;
    cout << "                                      0.返回主界面                                      " << endl;
    cout << endl;
    cout << "                   1.按姓名查找      2.按身份证查找    3.按核酸检测结果查询              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "请输入对应的序号: ";
        cin >> n;
        if (n == "0")
            menu();
        else if (n == "1")
            t3.search1();
        else if (n == "2")
            t3.search2(0);
        else if (n == "3")
            t3.search3();
        else
        {
            cout << "没有该操作，请重新输入" << endl;
            continue;
        }
    }
}
void changeout()
{
    cout << "请输入：";
}
void RNA::change() //数据修改
{
    system("cls");
    string i1;
    int n;
    n = t3.search2(1);
    if (n >= 0)
    {
        while (1)
        {
            cout << "1.姓名" << endl
                 << "2.身份证号" << endl
                 << "3.检测地点" << endl
                 << "4.检测单位" << endl;
            cout << "请输入你要修改的内容：";
            cin >> i1;
            if (i1 == "1")
            {
                changeout();
                cin >> test1[n].name;
            }
            else if (i1 == "2")
            {
                changeout();
                cin >> test1[n].ID;
            }
            else if (i1 == "3")
            {
                changeout();
                cin >> test1[n].location;
            }
            else if (i1 == "4")
            {
                changeout();
                cin >> test1[n].unit;
            }
            cout << "输入0返回主菜单，输入任意键继续修改：";
            cin >> i1;
            if (i1 == "0")
                menu();
            else
            {
                system("cls");
                cout << left;
                cout << "姓名      身份证号            检测地点      检测时间             检测单位            检测结果" << endl;
                cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            }
        }
    }
    else
    {
        cout << "未查找到相关内容" << endl;
        back();
    }
}
void RNA::output() //输出所有数据
{
    system("cls");
    cout << left;
    cout << "姓名      身份证号            检测地点      检测时间             检测单位            检测结果" << endl;
    for (int n = 0; n < test1.size(); n++)
    {
        cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
    }
    cout << "输出完毕，共" << test1.size() << "条数据" << endl;
    back();
}
int main()
{
    t3.read();
    menu();
}
