#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b[4];
    double c;
    cin >> c;
    a = c * 10;
    for (int i = 0; i < 4; i++)
    {
        b[i] = a % 10;
        a = a / 10;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << b[i];
        if (i == 0)
            cout << ".";
    }
    cout << endl;
    return 0;
}