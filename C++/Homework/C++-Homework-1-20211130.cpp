#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10], t[10];
    int i, o = 0;
    cin >> i;
    while (i--)
    {
        cin >> a;
        if (a[0] > a[1])
        {
            t[0] = a[0];
            a[0] = a[1];
            a[1] = t[0];
        }
        if (a[0] > a[2])
        {
            t[0] = a[0];
            a[0] = a[2];
            a[2] = t[0];
        }
        if (a[1] > a[2])
        {
            t[0] = a[1];
            a[1] = a[2];
            a[2] = t[0];
        }
        for (o = 0; o < strlen(a); o++)
        {
            cout << a[o] << " ";
        }
        cout<<endl;
    }
    return 0;
}