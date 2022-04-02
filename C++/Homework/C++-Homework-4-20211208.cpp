#include<bits/stdc++.h>
using namespace std;
struct steel
{
    int length;
    int R;
    int bianma;
}p[1010];
bool judge(steel a,steel b)
{
    if(a.length!=b.length) return a.length>b.length;
    if(a.R!=b.R) return a.R<b.R;
    return a.bianma>b.bianma;
}
int main()
{
    int n,m,s=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>p[i].length>>p[i].R>>p[i].bianma;
        }
        sort(p,p+m,judge);
        cout<<p[0].bianma<<endl;
    }
    return 0;
}