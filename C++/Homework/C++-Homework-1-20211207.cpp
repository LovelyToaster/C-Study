#include <bits/stdc++.h>
using namespace std;
struct student
{
    int xuehao;
    char name[20];
    int a;
    int b;
    int c;
} p[5];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i].xuehao >> p[i].name >> p[i].a >> p[i].b >> p[i].c;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p[i].xuehao << " " << p[i].name << " " << p[i].a << " " << p[i].b << " " << p[i].c << endl;
    }
    return 0;
}