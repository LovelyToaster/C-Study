#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[3],b,c,d;
    while(cin>>b>>c>>d)
    {
        a[0]=b;
        a[1]=c;
        a[2]=d;
        sort(a,a+3);
        printf("%.0f\n",a[1]);
    }
    return 0;
}