#include <iostream>
using namespace std;
int main()
{
    int i,n,num_max,num_min,sum,temp;
    while(cin>>n)
    {
        sum=0;
        num_max=-2147483648;
        num_min=2147483647;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            if(temp<num_min)
            {
                num_min=temp;
            }
            if(temp>num_max)
            {
                num_max=temp;
            }
            sum=sum+temp;
        }
        cout<<num_min<<" "<<num_max<<" "<<sum<<endl;
    }
    return 0;
}