#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    double SUM,h;
    SUM=100.0;
    h=100.0;
    k=2;
    cin>>n;
    for(i=1;i<n;i++)
    {
        h=h/k;
        SUM=SUM+h*2;
    }
    printf("%.4lf",SUM);
    return 0;
}