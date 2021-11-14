#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,a[6];
    m=0;
    cin>>n;
    while (n>0)
    {
        i=n%10;
        a[m]=i;
        m=m+1;
        n=n/10;
    }
    for(m=m-1;m>=0;m--)
    {
        cout<<a[m]<<" ";
    }
    return 0;
}