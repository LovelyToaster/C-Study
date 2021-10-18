#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,i,a;
    a=0;
    i=1;
    scanf("%d",&N);
    while (i<=N)
    {
        a=a+i;
        i=i+2;
    }
    printf("%lld",a);
    return 0;
}