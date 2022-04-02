#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
        scanf("%d %d",&a,&b);
        int x=a+b;
        if(x<100){
            printf("%d",x);
        }
        if(x>=100){
            x=x%100;
        
            printf("%d",x);
        }
    }