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
int main();
int i = 0;
vector<RNA> test1; //定义一个vector类，用于方便人数控制
int menu()         //程序主界面
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
void back()
{
    cout << "输入0返回系统主界面(输入其他任意值则结束程序): ";
    cin >> i;
    if (i == 0)
        main();
    else
        exit(0);
}
void input() //数据录入
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
void search1() //姓名查找
{
    string t1, t2;
    cout << "请输入姓名(可以输入部分)：";
    cin >> t1;
    system("clear");
    for (int n = 0; n < test1.size(); n++)
    {
        t2 = test1[n].test.name;
        if (t2.find(t1) != t2.npos)
        {
            cout << "姓名  身份证号  检测地点  检测时间  检测单位  检测结果" << endl;
            cout << test1[n].test.name << "  " << test1[n].test.ID << "  " << test1[n].location << "  " << test1[n].time << "  " << test1[n].unit << "  " << test1[n].outcome << endl;
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
    system("clear");
    for (n = 0; n < test1.size(); n++)
    {
        if (t1 == test1[n].test.ID)
        {
            cout << "姓名  身份证号  检测地点  检测时间  检测单位  检测结果" << endl;
            cout << test1[n].test.name << "  " << test1[n].test.ID << "  " << test1[n].location << "  " << test1[n].time << "  " << test1[n].unit << "  " << test1[n].outcome << endl;
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
    system("clear");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    核酸检测管理系统                                    " << endl;
    cout << endl;
    cout << "                   1.按姓名查找                             2.按身份证查找              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    cout << "请输入对应的序号: ";
    cin >> n;
    system("clear");
    while (1)
    {
        if (n == 1)
            search1();

        else if (n == 2)
            search2(0);
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
void change() //数据修改
{
    int n;
    n = search2(1);
    while (1)
    {
        cout << "1.姓名" << endl
             << "2.身份证号" << endl
             << "3.检测地点" << endl
             << "4.检测时间" << endl
             << "5.检测单位" << endl;
        cout << "请输入你要修改的内容：";
        cin >> i;
        if (i == 1)
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
        }
        cout << "输入0返回主菜单，输入任意键继续修改：";
        cin >> i;
        if (i == 0)
            main();
        else
        {
            system("clear");
            cout << "姓名  身份证号  检测地点  检测时间  检测单位  检测结果" << endl;
            cout << test1[n].test.name << "  " << test1[n].test.ID << "  " << test1[n].location << "  " << test1[n].time << "  " << test1[n].unit << "  " << test1[n].outcome << endl;
        }
    }
}
void output() //输出所有数据
{
    cout << "姓名  身份证号  检测地点  检测时间  检测单位  检测结果" << endl;
    for (int n = 0; n < test1.size(); n++)
    {
        cout << test1[n].test.name << "  " << test1[n].test.ID << "  " << test1[n].location << "  " << test1[n].time << "  " << test1[n].unit << "  " << test1[n].outcome << endl;
    }
    cout << "输出完毕，共" << test1.size() << "条数据" << endl;
    back();
}
void write()
{
    RNA t;
    FILE *fp;
    fp = fopen("test.dat", "w");
    for (int n = 0; n < test1.size(); n++)
        fwrite(&test1[n], sizeof(RNA), test1.size(), fp);
    fclose(fp);
}
void read()
{
    RNA a;
    FILE *fp;
    fp = fopen("test.dat", "a");
    fread(&a, sizeof(RNA), 4, fp);
    test1.push_back(a);
    fclose(fp);
}
int main()
{

    int n;
    read();
    n = menu();
    if (n == 0)
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
}