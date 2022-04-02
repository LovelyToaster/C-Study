#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m%2==0) cout<<(m/2)*(m/2-1)<<endl;
        else cout<<(m-1)*(m-1)/4<<endl;
    }
    return 0;
}