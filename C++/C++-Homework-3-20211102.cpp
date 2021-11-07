#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum;
    i=0;
    while (cin>>n)
    {
        sum=0;
        while (n>0)
        {
            i=n%10;
            sum=sum+i;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}