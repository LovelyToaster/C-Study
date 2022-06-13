#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
class RNA //�洢��Ϣ
{
    string location;
    string time;
    string unit;
    string outcome;
    string name;
    string ID;
    vector<RNA> test1; //��̬���飬���ڷ�����������
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
void menu() //����������
{
    string n;
    system("cls");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    ���������ϵͳ                                    " << endl;
    cout << endl;
    cout << "                                      0.����������                                      " << endl;
    cout << endl;
    cout << "                   1.����¼��                             2.���ݲ�ѯ                    " << endl;
    cout << endl;
    cout << "                   3.�����޸�                             4.��ʾ�ѱ�������              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "�������Ӧ�����: ";
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
            cout << "û�иò���������������" << endl;
            continue;
        }
    }
}
void RNA::write() //����д���ļ�
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
void RNA::read() //����д���ڴ�
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
void back() //����
{
    string i1;
    cout << "����0����ϵͳ������(������������ֵ���������): ";
    cin >> i1;
    if (i1 == "0")
        menu();
    else
    {
        t3.write();
        exit(0);
    }
}
string time1() //��ȡϵͳʱ��
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
void RNA::input() //����¼��
{
    system("cls");
    RNA p;
    string nowtime;
    nowtime = time1();
    cout << "��������Ҫ¼���������";
    cin >> i;
    for (int n = 0; n < i; n++)
    {
        cout << "��" << n + 1 << "����" << endl;
        cout << "����������������";
        cin >> p.name;
        cout << endl
             << "�������������֤�ţ�";
        cin >> p.ID;
        for (int n1 = 0; n1 < test1.size(); n1++) //�ж����֤�Ƿ����ظ�
        {
            while (test1[n1].ID == p.ID)
            {
                cout << "�������! ����������:";
                cin >> p.ID;
                n1 = 0;
            }
        }
        cout << endl
             << "��������ص㣺";
        cin >> p.location;
        cout << endl
             << "�������ⵥλ��";
        cin >> p.unit;
        cout << endl
             << "����������(���Ի�����)��";
        cin >> p.outcome;
        cout << endl
             << "���ʱ��Ϊ��" << nowtime<<endl;
        p.time = nowtime;
        test1.push_back(p);
    }
    cout << endl
         << "¼����ɣ�" << endl;
    back();
}
void RNA::search1() //��������
{
    system("cls");
    string t1, t2;
    int i1 = 0;
    cout << "����������(�������벿��)��";
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
                cout << "����      ���֤��            ���ص�      ���ʱ��             ��ⵥλ            �����" << endl;
                i1 = 1;
            }
            cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
        }
    }
    if (i != 1)
        cout << "δ���ҵ��������" << endl;
    back();
}
int RNA::search2(int i1) //���֤����
{
    system("cls");
    int n;
    string t1;
    cout << "���������֤�ţ�";
    cin >> t1;
    system("cls");
    for (n = 0; n < test1.size(); n++)
    {
        if (t1 == test1[n].ID)
        {
            cout << left;
            cout << "����      ���֤��            ���ص�      ���ʱ��             ��ⵥλ            �����" << endl;
            cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
            break;
        }
    }
    if (i1 == 0)
    {
        if (i != 1)
            cout << "δ���ҵ��������" << endl;
        back();
    }
    if (i != 1)
        n = -1;
    return n;
}
void RNA::search3() //������������
{
    system("cls");
    string i2;
    int i1 = 0;
    string t1;
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    ���������ϵͳ                                    " << endl;
    cout << endl;
    cout << "                              1.����               2.����                              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "�������Ӧ�����: ";
        cin >> i2;
        if (i2 == "1")
        {
            t1 = "����";
            break;
        }
        else if (i2 == "2")
        {
            t1 = "����";
            break;
        }
        else
        {
            cout << "û�иò���������������" << endl;
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
                cout << "����      ���֤��            ���ص�      ���ʱ��             ��ⵥλ            �����" << endl;
                i1 = 1;
            }
            cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            i = 1;
        }
    }
    if (i != 1)
        cout << "δ���ҵ��������" << endl;
    back();
}
void search() //���ݲ�ѯ����
{
    string n;
    system("cls");
    cout << "=======================================================================================" << endl;
    cout << endl;
    cout << "                                    ���������ϵͳ                                    " << endl;
    cout << endl;
    cout << "                                      0.����������                                      " << endl;
    cout << endl;
    cout << "                   1.����������      2.�����֤����    3.������������ѯ              " << endl;
    cout << endl;
    cout << "=======================================================================================" << endl;
    while (1)
    {
        cout << "�������Ӧ�����: ";
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
            cout << "û�иò���������������" << endl;
            continue;
        }
    }
}
void changeout()
{
    cout << "�����룺";
}
void RNA::change() //�����޸�
{
    system("cls");
    string i1;
    int n;
    n = t3.search2(1);
    if (n >= 0)
    {
        while (1)
        {
            cout << "1.����" << endl
                 << "2.���֤��" << endl
                 << "3.���ص�" << endl
                 << "4.��ⵥλ" << endl;
            cout << "��������Ҫ�޸ĵ����ݣ�";
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
            cout << "����0�������˵�����������������޸ģ�";
            cin >> i1;
            if (i1 == "0")
                menu();
            else
            {
                system("cls");
                cout << left;
                cout << "����      ���֤��            ���ص�      ���ʱ��             ��ⵥλ            �����" << endl;
                cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
            }
        }
    }
    else
    {
        cout << "δ���ҵ��������" << endl;
        back();
    }
}
void RNA::output() //�����������
{
    system("cls");
    cout << left;
    cout << "����      ���֤��            ���ص�      ���ʱ��             ��ⵥλ            �����" << endl;
    for (int n = 0; n < test1.size(); n++)
    {
        cout << setw(8) << test1[n].name << "  " << setw(18) << test1[n].ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
    }
    cout << "�����ϣ���" << test1.size() << "������" << endl;
    back();
}
int main()
{
    t3.read();
    menu();
}
