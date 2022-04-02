#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    if(b<=d)
    {
        e=c-a;
        f=d-b;
    }
    else
    {
        e=c-a-1;
        f=60-b+d;
    }
    cout<<e<<" "<<f<<endl;
    return 0;
}