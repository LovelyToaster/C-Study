#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int a[1000], b[1000], c[1000];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d %d", &a[i], &b[i], &c[i]);
            if (b[i] < c[i])
            {
                int s = b[i];
                b[i] = c[i];
                c[i] = s;
            }
        }
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                if (a[i] > a[j] || (a[i] == a[j] && b[i] > b[j]) || (a[i] == a[j] && b[i] == b[j] && c[i] > c[j]))
                {
                    int s = a[i];
                    a[i] = a[j];
                    a[j] = s;

                    s = b[i];
                    b[i] = b[j];
                    b[j] = s;

                    s = c[i];
                    c[i] = c[j];
                    c[j] = s;
                }
            }
        }
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = i + 1; j < m; j++)
            {

                if (a[i] == a[j] && b[i] == b[j] && c[i] == c[j])
                {
                    a[i] = 0;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (a[i] != 0)
                printf("%d %d %d\n", a[i], b[i], c[i]);
        }
    }
    return 0;
}