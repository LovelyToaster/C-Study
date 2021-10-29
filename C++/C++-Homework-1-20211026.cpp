#include<bits/stdc++.h>
using namespace std;
int main()
{           
    int n,i;
    double H;
    while (cin>>n)
    {
        H=0;
        for(i=1;i<=n;i++)
        H=H+1.0/i;
        printf("%.3f\n",H);
    }
    return 0;
}