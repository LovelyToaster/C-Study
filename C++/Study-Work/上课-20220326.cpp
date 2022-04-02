#include <bits/stdc++.h>
using namespace std;
int max(int a=0,int b=0,int c=0)
{
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>c) swap(a,c);
    return c;
}
int main()
{
    int a,b,c;
    cout<<"请输入三个正整数:"<<endl;
    cin>>a>>b>>c
    cout<<"最大值为: "<<max(a,b,c)<<endl;
    cout<<"请输入两个正整数:"<<endl;
    cin>>a>>b
    cout<<"最大值为: "<<max(a,b)<<endl;
    return 0;
}
