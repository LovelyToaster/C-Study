#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],b,n=0;
    for(int i=1;i<=10;i++)
    {
        cin>>b;
        a[n]=b;
        n=n+1;
    }
    sort(a,a+10);
    for (n=0;n<10;n++)
    {
        cout<<a[n]<<endl;
    }
}