#自己（时间超限）
#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,m=0;
    scanf("%d",&n);
    if(n>=3)
    {
		++m;
	}
    for(int p=3;p+2<=n;p=p+2)
    {
        if(prime(p)==1&&prime(p+2)==1) m=m+1;
    }
    printf("%d\n",m);
    return 0;
}

#老师
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int prime(int n) {
	if(n == 2)return 1;
	if(n < 2 || n % 2 == 0)return 0;
	for(int c = 3; c * c <= n; c += 2) {
		if(n % c == 0)return 0;
	}
	return 1;
}

int main() {
	int n;cin>>n;
	int t=0;
	if(n>=3){
		++t;//(2,3)
	}
	for(int p=3;p+2<=n;p+=2){
		if(prime(p)==1&&prime(p+2)==1){
			++t;
		}
	}
	cout<<t;
	return 0;
}