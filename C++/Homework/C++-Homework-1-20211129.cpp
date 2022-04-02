#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int o = 0;
    while (1)
    {
        cin.getline(a,100);
        if (strstr(a, "END") != NULL)
            break;
        for (int i = 0; i < strlen(a); i++)
        {
            o = a[i];
            if (o == 65 || o == 87 || o == 70)
                a[i] = 73;
            if (o == 67)
                a[i] = 76;
            if (o == 77)
                a[i] = 111;
            if (o == 83)
                a[i] = 118;
            if (o == 68 || o == 80 || o == 71||o==66)
                a[i] = 101;
            if (o == 76)
                a[i] = 89;
            if (o == 88)
                a[i] = 117;
        }
        cout << a << endl;
    }
}