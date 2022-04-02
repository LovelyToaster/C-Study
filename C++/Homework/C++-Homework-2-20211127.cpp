#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[255 + 10], b[255 + 10];
    int n;
    while (cin >> a)
    {
        memset(b, 0, sizeof(a));
        n = strlen(a);
        for (int i = 0; i < strlen(a); i++)
        {
            b[n - i - 1] = a[i];
        }
        if (strcmp(a, b) == 0)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}