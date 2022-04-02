#include<bits/stdc++.h>
using namespace std;
int shibie(int a)
{
    int o,p;
    while(a>0)
    {
        o=a%10;
        a=a/10;
        if(o!=7)
        {
            p=1;
        }
        else
        {
            p=0;
            break;
        }
    }
    if(p==0) return 0;
    if(p==1) return 1;
}
int main()
{
    int x,n,p,sum;
    cin>>x;
    while(x--)
    {
        sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            p=shibie(i);
            if(p==1)
            {
                sum=sum+1;
            }
            else continue;
        }
        cout<<sum<<endl;
    }
    return 0;
}