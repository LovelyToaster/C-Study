#自己的 存在毛病
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100], b, i = 1, n, q = 1, w = 1, m = 0, sum = 0, o;
    cin >> b;
    for (i = 1; i <= b * b; i++)
    {
        cin >> n;
        a[q][w] = n;
        w = w + 1;
        if (w == b + 1)
        {
            w = 1;
            q = q + 1;
            continue;
        }
    }
    q = 1;
    w = 1;
    for (i = 1; i <= b; i++)
    {
        m = a[q][w];
        sum = sum + m;
        q = q + 1;
        w = w + 1;
    }
    q = 1;
    w = b;
    m = 0;
    for (i = 1; i <= b; i++)
    {
        m = a[q][w];
        sum = sum + m;
        q = q + 1;
        w = w - 1;
    }
    q = 1;
    w = 1;
    if (b % 2 != 0)
    {
        for (o = 1; o < b; o = o + 2)
        {
            q = q + 1;
            w = w + 1;
        }
    }
    if (b % 2 != 0)
    {
        m = a[q][w];
        sum = sum - m;
    }
    cout << sum << endl;
    return 0;
}

#大佬的没问题
#include <iostream>
using namespace std;
int main()
{
    int n, sum, temp;
    while (cin >> n)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> temp;
                if (j == i || j == n - 1 - i)
                {
                    sum += temp;
                }
            }
        }
        cout << sum << endl;
    }
}
