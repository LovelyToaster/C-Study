#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100], i, n, j, o = 1;
    cin >> n;
    for (i = 0; i <= n / 2; i++)
    {
        for (j = i; j <= n - i - 1; j++)
        {
            a[i][j] = o++;
        }
        for (j = i + 1; j <= n - i - 1; j++)
        {
            a[j][n - i - 1] = o++;
        }
        for (int j = n - i - 2; j >= i; j--)
        {
            a[n - i - 1][j] = o++;
        }

        for (int j = n - i - 2; j >= i + 1; j--)
        {
            a[j][i] = o++;
        }
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}