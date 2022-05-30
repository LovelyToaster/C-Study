#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    time_t nowtime;
    struct tm *p;
    time(&nowtime);
    p = localtime(&nowtime);
    char szDateTime[100] = {0};
    sprintf(szDateTime, "%02d-%02d-%02d %02d:%02d:%02d", p->tm_year + 1900, p->tm_mon + 1,
            p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
    string time(szDateTime);
    cout << time << endl;
    return 0;
}