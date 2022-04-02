#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,sum1,sum2;
    while(cin>>x>>y)
    {
        sum1=sum2=0;
        for(int i=x;i<=y;i++)
        {
            if(i%2==0) sum1=sum1+i*i;
            else sum2=sum2+i*i*i;
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}