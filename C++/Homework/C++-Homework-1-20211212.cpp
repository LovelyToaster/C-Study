#include <bits/stdc++.h>
using namespace std;
struct student
{
    char name[30];
    int year;
    int month;
    int date;
} p[1000 + 10];
bool judge(student a, student b)
{
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    if (a.date != b.date)
        return a.date < b.date;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name >> p[i].year >> p[i].month >> p[i].date;
    }
    sort(p, p + n, judge);
    for (int i = 0; i < n; i++)
    {
        cout << p[i].name << endl;
    }
    return 0;
}