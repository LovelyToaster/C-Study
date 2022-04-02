#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a,b[100];
    cin>>b;
    for(int i=0;i<=strlen(b);i++)
    {
        a=b[i];
        if(a>=65&&a<=90||a>=97&&a<=122)
        {
            cout<<a;
        }
    }
    return 0;
}