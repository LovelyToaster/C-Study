#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    while(cin>>n)
    {
            x=1;
        for(i=1;i<n;i++)
        {
            x=x*2+2;
        }
        printf("%d\n",x);
    }
    
    return 0;
}