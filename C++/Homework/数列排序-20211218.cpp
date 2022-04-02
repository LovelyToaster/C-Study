#include <bits/stdc++.h>
using namespace std;
int k;
int main()
{
    int n, a[10], b[10], c[10], o, t;
    cin >> n;
    while (n--)
    {
        o = 0;
        t = 0;
        for (int i = 0; i < 9; i++)
        {
            cin >> a[i];
        }
        k = a[0];
        for (int i = 1; i < 9; i++)
        {
            if (a[i] > k)
            {
                c[t] = a[i];
                t = t + 1;
            }
            if (a[i] < k)
            {
                b[o] = a[i];
                o = o + 1;
            }
        }
        for (int i = o - 1; i >= 0; i--)
        {
            cout << b[i] << " ";
        }
        cout << k << " ";
        for (int i = 0; i < t; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}