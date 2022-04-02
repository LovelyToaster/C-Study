#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int o=0,a;
    cin>>a;
    while(a>0)
    {
        a/=10;
        o=o+1;
    }
    if(o<=3) cout<<"yes";
    else
    {
        cout<<"no"<<endl;
        cout<<o;
    }
    return 0;
}