#include<bits/stdc++.h>
using namespace std;
int year(int a)
{
    if(a%4==0&&a%100!=0||a%400==0) return 1;
    else return 0;
}
int main()
{
    int y,m,d,sum=0,p;
    cin>>y>>m>>d;
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<m-1;i++)
    {
        sum=sum+arr[i];
    }
    sum=sum+d;
    p=year(y);
    if(p==1&&m>=2) sum=sum+1;
    cout<<sum;
}
