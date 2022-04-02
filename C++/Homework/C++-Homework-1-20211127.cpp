#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[15][20];
    int n, b, f, r, v;
    for (int i = 0; i <= 14; i++)
    {
        for (int o = 0; o <= 9; o++)
        {
            if (i == 3 || i == 7 || i == 11)
            {
                for (int p = 0; p <= 19; p++)
                {
                    a[i][p] = 35;
                }
                break;
            }
            a[i][o] = 48;
        }
    }
    cin >> n;
    while (n--)
    {
        cin >> b >> f >> r >> v;
        if (b == 1)
        {

            a[f - 1][r - 1] += v;
        }
        if (b == 2)
        {

            a[f + 3][r - 1] += v;
        }
        if (b == 3)
        {

            a[f + 7][r - 1] += v;
        }
        if (b == 4)
        {

            a[f + 11][r - 1] += v;
        }
    }
    for (int i = 0; i <= 14; i++)
    {
        for (int o = 0; o <= 9; o++)
        {
            if (i == 3 || i == 7 || i == 11)
            {
                for (int p = 0; p <= 19; p++)
                {
                    cout << a[i][p];
                }
                break;
            }
            cout << " " << a[i][o];
        }
        cout << endl;
    }
    return 0;
}