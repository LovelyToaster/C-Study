#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, a[100][2], m, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < 2; o++)
        {
            cin >> a[i][o];
        }
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        x = (a[i][0] * a[i][1]) / m;
        if (8 - x - a[i][1] < 0)
            cout << "no" << endl;
        else
            printf("%.2f\n", x);
    }
    return 0;
}