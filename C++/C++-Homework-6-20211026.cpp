#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,o;
    o=0;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++)
        if(c%i==0)
        {
            o=o+1;
        }        
    printf("%d\n",o);
    return 0;
}