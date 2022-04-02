#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3, a, b, c, d, k;
    char f[100];
    while (n--)
    {
        a = b = c = d = 0;
        memset(f, 0, sizeof(f));
        cin.getline(f, 100);
        for (int i = 0; i < strlen(f); i++)
        {
            k = f[i];
            if ((k >= 65 && k <= 90) || (k >= 97 && k <= 122))
                a = a + 1;
            else if (k >= 48 && k <= 57)
                b = b + 1;
            else if (k == 32)
                c = c + 1;
            else
                d = d + 1;
        }
        cout << a << " " << b << " " << c << " " << d << " " << endl;
    }
    return 0;
}