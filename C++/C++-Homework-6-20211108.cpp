#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m;
    cin>>i;
    for(int o=1;o<=i;o++)
    {
        cin>>n;
        if(n>0)
        {
            while(n>0)
            {
                m=n%10;
                n=n/10;
            }
        }
        else if(n<0)
        {
            n=-n;
            while(n>0)
            {
                m=n%10;
                n=n/10;
            }
        }
        else if(n==0)
        {
            m=0;
        }
        cout<<m<<endl;
    }
    return 0;
}