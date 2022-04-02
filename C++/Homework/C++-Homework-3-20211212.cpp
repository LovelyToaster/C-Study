#include <bits/stdc++.h>
using namespace std;
void yuefen(int a, int b)
{
    int c;
    c = __gcd(a, b);
    if (a % c == 0)
        a = a / c;
    if (b % c == 0)
        b = b / c;
    cout << a << " " << b << endl;
}
int main()
{
    int n, a, b, c, d, s1, s2, s;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c >> d;
        s1 = a * d + b * c;
        s2 = b * d;
        yuefen(s1, s2);
    }
    return 0;
}