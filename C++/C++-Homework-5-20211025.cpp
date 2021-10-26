#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c,x,i;
    cin>>n>>m;
    i=n;
    while(i<m)
    {
     a=i/100;
     b=i/10%10;
     c=i%10;
     x=pow(a,3)+pow(b,3)+pow(c,3);
     if(x==i)
     printf("%d\n",x);
     i=i+1;
    }
    return  0;
}