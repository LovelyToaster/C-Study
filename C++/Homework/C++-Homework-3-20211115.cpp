#include <bits/stdc++.h>
using namespace std;
int main()
{
    int F1 = 1, F2 = 1, F, a, b;
    cout << F1 << endl;
    cout << F2 << endl;
    for (int i = 1; i <= 18; i++)
    {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
        cout << F << endl;
    }
    return 0;
}