#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sum,a[20000],o,n,m;
    for(i=1;i<=1000;i++)
    {
    	o=0;
    	sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                a[o]=j;
                o=o+1;
                sum=sum+j;
            }
        }
       if(i==sum)
       {
           n=o;
           printf("%d its factors are ",sum);
           for(o=1;o<=n;o++)
           {
               cout<<a[o-1];
               {
                   if(o<n)
                   {
                       cout<<",";
                   }
               }
           } 
		   cout<<endl;      
       } 
    }
    return 0;
}
