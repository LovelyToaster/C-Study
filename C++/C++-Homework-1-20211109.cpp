#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
	if(n<=1) return 0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int rev(int n) 
{
	int t=0;
	while(n>0) 
	{
		int d=n%10;
		t=t*10+d;
		n/=10;
	}
	return t;
}
int main()
{
	int a,b,o;
	cin>>a>>b;
	for(o=a;o<=b;o++)
	{
		if(o==rev(o)&&prime(o)==1)
		{
			cout<<o<<endl;
		}
	}
	return 0;
}
