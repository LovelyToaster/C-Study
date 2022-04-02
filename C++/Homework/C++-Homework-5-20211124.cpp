#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000], b;
    cin.get(a, 10000);
    for (int i = 0; i <= strlen(a); i++)
    {
        b = a[i];
        if (b >= 97 && b <= 123)
        {
            a[i] = a[i] - 32;
        }
    }
    puts(a);
    return 0;
}