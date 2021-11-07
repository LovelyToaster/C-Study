#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,W,i,o;
    while(cin>>H>>W)
    {
    o=0;
    for(i=1;i<=W;i++)
    {
        printf("#");
        if(i==W)
        {
            printf("\n");
            i=0;
            o=o+1;
            if(o==H)
            {
                break;
            }
            continue;
        }
    }
    printf("\n");
    }
    return 0;
}