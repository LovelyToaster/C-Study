#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n;
    while (n>0)
    {
        i=n%10;
        m=i;
        cout<<m<<" ";
        n=n/10;
    }
    return 0;
}