#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100+10],b;
    int c=0;
    cin>>a;
    for(int i=0;i<=strlen(a);i++)
    {
        b=a[i];
        if(b>=65&&b<=90||b>=97&&b<=122)
        {
            c=c+1;
        }
    }
    cout<<c;
    return 0;
}