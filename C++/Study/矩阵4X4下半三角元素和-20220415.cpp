#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S[4][4], sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int o = 0; o < 4; o++)
        {
            S[i][o] = 1;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int o = 0; o <= i; o++)
        {
            sum = sum + S[i][o];
        }
    }
    cout << sum << endl;
    return 0;
}