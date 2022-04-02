#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum, t, n, m;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i % m;
        }
        cout << sum << endl;
    }
    return 0;
}