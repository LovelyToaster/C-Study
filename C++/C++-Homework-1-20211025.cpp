#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char op;
    while(cin>>a>>op>>b&&op!='?')
    {
        if(op=='+')
        printf("%d\n",a+b);
        if(op=='-')
        printf("%d\n",a-b);
        if(op=='*')
        printf("%d\n",a*b);
        if(op=='/')
        printf("%d\n",a/b);
    }
    return 0;
}
