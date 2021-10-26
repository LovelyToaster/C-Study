#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,x;
    while(scanf("%d",&n)!=EOF)
    {
     if(n==0) 
     return 0;
     else
     a=n/100;
     b=n/10%10;
     c=n%10;
     x=pow(a,3)+pow(b,3)+pow(c,3);
     if(x==n)
     printf("Yes\n");
     else
     printf("No\n");
    } 
    return  0;

