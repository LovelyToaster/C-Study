#include<bits/stdc++.h>
using namespace std;
double sum(int n)
{
    double sum=1;
    for(double i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int main()
{
    double n,r,a,b,c,i,t;
    while(cin>>n>>r)
    {
    if(n>r)
    {
    a=sum(n);
    b=sum(r);
    c=sum(n-r);
    }
    else if(n<r)
    {
    t=r;
    r=n;
    n=t;
    a=sum(n);
    b=sum(r);
    c=(n-r);
    }
    else if(n==r) a=1,b=1,c=1;
    printf("%.0f\n",a/b/c);
    }
    return 0;
}