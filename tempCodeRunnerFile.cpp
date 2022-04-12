#include<bits/stdc++.h>
using namespace std;
class S{
	private:
	   double round;
	public:
	void S_set();
	void S_out();
}; 
void S::S_set(){
	cin>>round; 
}
void S::S_out(){
	cout<<"S="<<3.14*round*round<<endl;
}
int main(){
	S Sx;
	Sx.S_set();
	Sx.S_out();
	return 0;
}