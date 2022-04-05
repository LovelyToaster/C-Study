#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s, p, a, b, c;
    cin >> a >> b >> c;
    p = (double)1 / 2 * (a + b + c);
    s = (double)sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f\n", (double)s);
    return 0;
}