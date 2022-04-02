#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100], s2[100], s3[100], t[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    cin.getline(s3, 100);
    if (strcmp(s1, s2) > 0)
    {
        strcpy(t, s1);
        strcpy(s1, s2);
        strcpy(s2, t);
    }
    if (strcmp(s1, s3) > 0)
    {
        strcpy(t, s1);
        strcpy(s1, s3);
        strcpy(s3, t);
    }
    if (strcmp(s2, s3) > 0)
    {
        strcpy(t, s2);
        strcpy(s2, s3);
        strcpy(s3, t);
    }
    cout << s1 << endl
         << s2 << endl
         << s3 << endl;
    return 0;
}