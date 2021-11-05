#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum,a,m,o;
    o=1;
    cin>>m;
    while(o<=m)
    {
        cin>>n;
        sum=0;
        a=0;
        for(i=1;i<=n;i++)
        {
            a=a+i;
            sum=sum+a;
        }
        printf("%d\n",sum);
        o=o+1;
    }
    return 0;
}