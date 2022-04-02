#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[9],b,n=0;
    for(int i=1;i<=10;i++)
    {
        cin>>b;
        a[n]=b;
        n=n+1;
    }
    for(n=n-1;n>=0;n--)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}