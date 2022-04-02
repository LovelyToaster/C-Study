#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 2, x, m;
    cin >> n;
    cout << n << "=";
    while (n >= k)
    {
        if (n == k)
        {
            cout << k;
            break;
        }
        if (n % k == 0)
        {
            cout << k;
            n = n / k;
            x = x + 1;
            if (m < x)
                cout << "*";
        }
        else
            k = k + 1;
    }
    return 0;
}