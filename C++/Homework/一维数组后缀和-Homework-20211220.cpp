#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000 + 10], b[1000 + 10], n, m, k, sum;
    cin >> n;
    k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        a[i] = m;
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int o = n - 1; o >= k; o--)
        {
            sum = a[o] + sum;
        }
        b[i] = sum;
        k = k + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}