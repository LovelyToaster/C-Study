#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, t, k, n;
    int x[1000];
    while (cin >> a >> b)
    {
        if ((a == 0 && b == 0) || b == 0)
            break;
        for (int i = 0; i < 100; i++)
        {
            x[i] = 0;
        }
        for (int i = a * 100; i < a * 100 + 99; i++)
        {

            if (i % b == 0)
            {
                t = i % 10;
                k = i / 10 % 10;
                c = k * 10 + t;
                x[c] = x[c] + 1;
            }
        }
        for (int i = 0; i < 100; i++)
        {
            c = x[i];
            if (c >= 1)
            {
                if (i == 0)
                    cout << "00"
                         << " ";
                else
                    printf("%02d ", i);
            }
        }
        cout << endl;
    }
    return 0;
}