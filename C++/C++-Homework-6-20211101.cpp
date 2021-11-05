#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum;
    while (cin>>n)
    {
        if(n%2==0)
        {
            sum=1;
            for(i=2;i<=n;i=i+2)
            {
                sum=sum*i;
            }
            printf("%d\n",sum);
        }
        else
        {
            sum=1;
            for(i=1;i<=n;i=i+2)
            {
                sum=sum*i;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}