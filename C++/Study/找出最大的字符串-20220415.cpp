#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100], b[100], c[100];
    int a1;
    cin.getline(a, 100);
    cin.getline(b, 100);
    cin.getline(c, 100);
    a1 = strcmp(a, b);
    if (a1 < 0)
        swap(a, b);
    a1 = strcmp(a, c);
    if (a1 < 0)
        swap(a, c);
    a1 = strcmp(b, c);
    if (a1 < 0)
        swap(b, c);
    cout << "MAX:" << a << endl;
    return 0;
}