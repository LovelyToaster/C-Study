#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    b=a;
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
            printf("%d/2=%d\n",a*2,a);
        }
        else if(a%2!=2)
        {
            printf("%d*3+1=%d\n",a,a*3+1);
            a=a*3+1;
        }
    }
    return 0;
}