#include <bits/stdc++.h>
using namespace std;
int StrCmp(char s1[100], char s2[100])
{
    int i, n = 0, m;
    m = strlen(s1);
    for (i = 0; i < 100; i++)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        else
        {
            n = n + 1;
            if (n == m)
                return 0;
        }
    }
}
int main()
{
    char s1[100], s2[100];
    int a;
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    a = StrCmp(s1, s2);
    cout << a << endl;
    return 0;
}