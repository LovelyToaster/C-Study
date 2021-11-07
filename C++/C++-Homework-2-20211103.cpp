#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,W,i,o,a,b,c;
    while(cin>>H>>W)
    {
    a=0;
    o=1;
    for(i=1;i<=W;i++)
    {
        printf("#");
        if(i==W)
        {
            printf("\n");
            break;
        }
    }
    c=1;
    while(1)
    {
        if(H==0||W==0)
        {
            return 0;
        }
        if(c==1)
        {
            printf("#");
        }
        printf(".");
        c=2;
        o=o+1;
        if(o==W-1)
        {
            printf("#");
            printf("\n");
            a=a+1;
            if(a==H-2)
            {
                break;
            }
            o=1;
            c=1;
            continue;
        }
    }
    for(b=1;b<=W;b++)
    {
        printf("#");
    }
    printf("\n");
    printf("\n");
    }
    return 0;
}