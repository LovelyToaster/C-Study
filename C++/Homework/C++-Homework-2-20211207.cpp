#include <bits/stdc++.h>
using namespace std;
struct student
{
    int xuehao;
    char name[20];
    int a;
    int b;
    int c;
} p[10];
int main()
{
    double sum1, sum2, sum3, sum4[10], max = 0;
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> p[i].xuehao >> p[i].name >> p[i].a >> p[i].b >> p[i].c;
    }
    for (int i = 0; i < 10; i++)
    {
        sum1 = sum1 + p[i].a;
        sum2 = sum2 + p[i].b;
        sum3 = sum3 + p[i].c;
        sum4[i] = p[i].a + p[i].b + p[i].c;
    }
    for (int o = 0; o < 10; o++)
    {
        if (sum4[o] > max)
        {
            max = sum4[o];
            k = o;
        }
    }
    printf("%.2f %.2f %.2f\n", sum1 / 10, sum2 / 10, sum3 / 10);
    cout << p[k].xuehao << " " << p[k].name << " " << p[k].a << " " << p[k].b << " " << p[k].c;
}