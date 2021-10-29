#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i;
    double T;
    T=1;
    cin>>m;
    for(i=2;i<=m;i++)
    T=T-1.0/(i*i);
    printf("%.6f",T);
    return 0;
}