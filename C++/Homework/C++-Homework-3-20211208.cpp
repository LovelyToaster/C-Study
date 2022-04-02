#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double r,i,sum1,sum2;
    cin>>n;
    while(n--)
    {
        cin>>r>>i;
        sum1=sum1+r;
        sum2=sum2+i;
    }
    cout<<sum1<<"+"<<sum2<<"i";
    return 0;
}