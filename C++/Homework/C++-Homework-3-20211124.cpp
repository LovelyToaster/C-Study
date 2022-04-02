#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[80+10],b;
    while(cin>>a)
    {
    for(int i=0;i<=strlen(a);i++)
    {
        b=a[i];
        if(b>=97&&b<=123) //判断是否为小写字母
        {
            a[i]=a[i]-32;
        }
    }
        cout<<a<<endl;
    }
    return 0;
}