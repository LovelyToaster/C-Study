#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, b, S[100], H[100], C[100], D[100], o, s = 0, h = 0, c = 0, d = 0;
    char a;
    cin >> i;
    while (i--)
    {
        cin >> a >> b;
        if (a == 'S')
        {
            S[s] = b;
            s = s + 1;
        }
        else if (a == 'H')
        {
            H[h] = b;
            h = h + 1;
        }
        else if (a == 'C')
        {
            C[c] = b;
            c = c + 1;
        }
        else if (a == 'D')
        {
            D[d] = b;
            d = d + 1;
        }
    }
    sort(S + 0, S + s);
    sort(H + 0, H + h);
    sort(C + 0, C + c);
    sort(D + 0, D + d);
    o = 0;
    for (int i = 1; i <= 13; i++)
    {
        if (S[o] != i)
            cout << "S"
                 << " " << i << endl;
        else
            o = o + 1;
    }
    o = 0;
    for (int i = 1; i <= 13; i++)
    {
        if (H[o] != i)
            cout << "H"
                 << " " << i << endl;
        else
            o = o + 1;
    }
    o = 0;
    for (int i = 1; i <= 13; i++)
    {
        if (C[o] != i)
            cout << "C"
                 << " " << i << endl;
        else
            o = o + 1;
    }
    o = 0;
    for (int i = 1; i <= 13; i++)
    {
        if (D[o] != i)
            cout << "D"
                 << " " << i << endl;
        else
            o = o + 1;
    }
    return 0;
}