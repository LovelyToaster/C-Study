#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100], b, q, w;
    cin >> b;
    for (q = 1; q <= b; q++)
    {
        for (w = 1; w <= q; w++)
        {
            if (w == 1 || w == q)
                a[q][w] = 1;
            else
                a[q][w] = a[q - 1][w - 1] + a[q - 1][w];
        }
    }
    for (q = 1; q <= b; q++)
    {
        for (w = 1; w <= q; w++)
        {
            cout << a[q][w] << " ";
        }
        cout << endl;
    }
    return 0;
}