#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[999999],b,n=0,c;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        cin>>b;
        a[n]=b;
        n=n+1;
    }
    for(n=n-1;n>=0;n--)
    {
        cout<<a[n]<<" ";
    }
    return 0;
}