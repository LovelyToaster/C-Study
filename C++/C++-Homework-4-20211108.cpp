#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m);
int main()
{
	int a,b,c,e,f;
	cin>>a>>b;
	c=gcd(a,b);
    e=a*b;
    f=e/c;
	cout<<f;
	return 0;
}
int gcd(int n,int m)
{
	int i=1,o=0;
	if(n>m)
	{
		while(i!=0)
		{
			i=n%m;
			n=m;
			m=i;
		}
	}
	else if(n<m)
	{
		o=n;
		n=m;
		m=o;
		while(i!=0)
		{
			i=n%m;
			n=m;
			m=i;
		}
	}
	return n;
}