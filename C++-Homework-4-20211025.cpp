#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y&&x!=0||y!=0)
    {
       if(x>y)
       printf("%d %d\n",y,x);
       else
       printf("%d %d\n",x,y);
    }
    return 0;
}
