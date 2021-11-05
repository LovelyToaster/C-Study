#解法一
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,c,d;
    for(i=1;i<=100;i++)
    {
        n=i*i;
        if(n>=1000)
        {
            a=n%10;
            b=n/10%10;
            c=n/100%10;
            d=n/1000;
            if(a==b&&c==d)
            {
                printf("%d\n",n);
            }
        }
    }
    return 0;
}
#解法二
#include<bits/stdc++.h>
using namespace std;
int main()
{
    printf("7744\n");
    return 0;
}