#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[1000][1000], b, q, w, n, i, m;
    cin >> b;
    n = 2 * b + 1;
    i = b;
    m = 1;
    for (q = 1; q <= b + 1; q++) 
    {
        for (w = m; w <= n; w++) 
        {
            a[q][w] = i;
        }
        m = m + 1;
        i = i - 1;
        n = n - 1;
    }
    n = 2 * b + 1;
    i = b;
    m = 1;
    for (w = 1; w <= b + 1; w++) 
    {
        for (q = m; q <= n; q++) 
        {
            a[q][w] = i;
        }
        m = m + 1;
        i = i - 1;
        n = n - 1;
    }
    n = 2 * b + 1;
    i = b;
    m = 1;
    for (q = 2 * b + 1; q >= b + 1; q--) 
    {
        for (w = m; w <= n; w++) 
        {
            a[q][w] = i;
        }
        m = m + 1;
        i = i - 1;
        n = n - 1;
    }
    n = 2 * b + 1;
    i = b;
    m = 1;
    for (w = 2 * b + 1; w >= b + 1; w--) 
    {
        for (q = m; q <= n; q++) 
        {
            a[q][w] = i;
        }
        m = m + 1;
        i = i - 1;
        n = n - 1;
    }
    q = 1;
    w = 1;
    for (int o = 1; o <= (2 * b + 1) * (2 * b + 1); o++) 
    {
        cout<< setw(2) << a[q][w];
        w = w + 1;
        if (w > 2 * b + 1) 
        {
            cout << endl;
            q = q + 1;
            w = 1;
        }
    }
    return 0;
}