#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char a[99990];
    int k, b;
    cin.get(a, 99999);
    for (int i = 0; i < strlen(a); i++)
    {
        k = a[i];
        if (k == 32)
            b = b + 1;
    }
    cout << b + 1 << endl;
    return 0;
}