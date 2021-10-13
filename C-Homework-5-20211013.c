#include<stdio.h>
#include<math.h>
int main()
{
    long long n,i,a;
    a=0;
    i=1;
    scanf("%d",&n);
    while (i<=n)
    {
        a=a+i;
        i=i+1;
    }
    printf("%lld",a);
    return 0;
}