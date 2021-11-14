#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n;
    while (n>0)
    {
        i=n%10;
        m=m+1;
        n=n/10;
    }
    cout<<m;
    return 0;
}