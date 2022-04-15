#include <bits/stdc++.h>
using namespace std;
int main()
{
    char C[80];
    int sum = 0;
    cin.getline(C, 80);
    for (int i = 0; i < strlen(C); i++)
    {
        if (C[i] == 32)
            sum = sum + 1;
    }
    cout << sum + 1 << endl;
    return 0;
}