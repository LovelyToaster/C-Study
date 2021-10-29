#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,a,b,c,i=1,j;
    while(cin>>a>>b>>c)
    {
        for(n=10;n<101;n++)
        if((n%3==a)&&(n%5==b)&&(n%7==c))
        {
            printf("%d\n",n);
            break;
        }
        if(n==101) printf("No answer\n");
    }  
    return 0;
}