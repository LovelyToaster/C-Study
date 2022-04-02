#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, b1, c1, d1, a2, b2, c2, d2, n, s[999][999], a, b;
    cin >> n;
    while (n--)
    {
        a = b = 0;
        cin >> a1 >> b1 >> c1 >> d1;
        for (int i = 1000; i <= 10000; i++)
        {
            d2 = i % 10;
            c2 = i / 10 % 10;
            b2 = i / 100 % 10;
            a2 = i / 1000 % 10;
            if (a2 == b2 || a2 == c2 || a2 == d2 || b2 == c2 || b2 == d2 || c2 == d2)
                continue;
            if ((a1 == a2 || a1 == b2 || a1 == c2 || a1 == d2) && (b1 == a2 || b1 == b2 || b1 == c2 || b1 == d2) && (c1 == a2 || c1 == b2 || c1 == c2 || c1 == d2) && (d1 == a2 || d1 == b2 || d1 == c2 || d1 == d2))
            {
                s[a][b] = i;
                b = b + 1;
                if (b == 6)
                {
                    b = 0;
                    a = a + 1;
                }
                if (a == 4)
                    break;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            for (int o = 0; o < 6; o++)
            {
                cout << s[i][o] << " ";
            }
            cout << endl;
        }
        if (n >= 1)
            cout << endl;
    }
    return 0;
}