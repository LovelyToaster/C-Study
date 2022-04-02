#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, x, y, i, q, w;
    char a[100][100];
    while (cin >> n >> m >> k)
    {
        q = 0;
        w = 0;
        for (i = 1; i <= n * m; i++)
        {
            a[q][w] = 48;
            w = w + 1;
            if (w > m - 1)
            {
                w = 0;
                q = q + 1;
            }
        }
        while (k--)
        {
            cin >> x >> y;
            a[x][y] = 42;
            if (a[x + 1][y + 1] != 42)
                a[x + 1][y + 1] = a[x + 1][y + 1] + 1;
            if (a[x - 1][y - 1] != 42)
                a[x - 1][y - 1] = a[x - 1][y - 1] + 1;
            if (a[x][y + 1] != 42)
                a[x][y + 1] = a[x][y + 1] + 1;
            if (a[x + 1][y] != 42)
                a[x + 1][y] = a[x + 1][y] + 1;
            if (a[x - 1][y] != 42)
                a[x - 1][y] = a[x - 1][y] + 1;
            if (a[x - 1][y + 1] != 42)
                a[x - 1][y + 1] = a[x - 1][y + 1] + 1;
            if (a[x][y - 1] != 42)
                a[x][y - 1] = a[x][y - 1] + 1;
            if (a[x + 1][y - 1] != 42)
                a[x + 1][y - 1] = a[x + 1][y - 1] + 1;
        }
        q = 0;
        w = 0;
        for (i = 1; i <= n * m; i++)
        {
            cout << a[q][w];
            w = w + 1;
            if (w > m - 1)
            {
                w = 0;
                q = q + 1;
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}