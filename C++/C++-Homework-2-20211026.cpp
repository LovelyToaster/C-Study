#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    double S;   
    while (cin>>n>>m)
    {
        S=0;
        for(i=n;i<=m;i++)
        S=S+1.0/i/i;
        printf("%.5lf\n",S);
    }
    return 0;
}
