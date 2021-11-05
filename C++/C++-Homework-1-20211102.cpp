#include<iostream>
using namespace std;
int main()
{
    int n,a[170000],o,i;
    o=0;
    while(cin>>n)
    {
        if(n==0)
        {
            printf("0-->0\n");
        }
        if(n>0)
        {
            cout<<n<<"-->";
            while(n!=0)
        {
            a[o]=n%2;
            o=o+1;
            n=n/2;
        }
            for(;o>0;o--)
            {
                cout<<a[o-1];
            }
        printf("\n");
        }
        else if(n<0)
        {
        	n=-n;
        	cout<<-n<<"-->"<<"-";
            while(n!=0)
	        {
	            a[o]=n%2;
	            o=o+1;
	            n=n/2;
	        }
            for(;o>0;o--)
            {
                cout<<a[o-1];
            }
        printf("\n");
        }
    }
    return 0;
}
