#include<iostream>
using namespace std;
int main()
{
	int n,m,flag;
	while(cin>>n>>m)
	{
        if(n==0||m==0)
        {
            return 0;
        }
		for(int i=0;i<n;i++)
		{
			flag=0;
			if(i%2==1)
			{
				flag=1;
			}
			for(int j=0;j<m;j++)
			{
				if(!flag)
				{
					flag=!flag;
					cout<<"#";
					continue;
				}
				flag=!flag;
				cout<<".";
			}
			cout<<endl;
		}
        cout<<endl;
	}
}