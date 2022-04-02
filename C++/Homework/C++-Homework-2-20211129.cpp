#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100 + 10], b[100 + 10];
    int n, m, p;
    cin >> a >> b >> p;
    n = strlen(a);
    m = strlen(b);
    if (((a[n - 1] + b[m - 1]) - 6) % 10 == p)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}