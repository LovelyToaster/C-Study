#include <bits/stdc++.h>
using namespace std;
const int maxn=1005;
int n,T;
map<int,int>m;
int main()
{
        int x;
        cin>>n;
        while(n--)
        {
            scanf("%d",&x);
            if(m.count(x)==0)
                m[x]=1;
            else
                m[x]++;
        }
        int ans=0;
        map<int,int>::iterator iter;
        iter=m.begin();
        while(iter!=m.end())
        {
            ans=max(ans,iter->second);
            iter++;
        }
        iter=m.begin();
        while(iter!=m.end())
        {
            if(ans==iter->second)
                printf("%d %d\n",iter->first,iter->second);
            iter++;
        }
    return 0;
}