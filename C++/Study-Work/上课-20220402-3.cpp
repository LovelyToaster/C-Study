#include <iostream>
using namespace std;
class RMB
{
  private:
   int yuan,jiao,fen;
  public:
   void set(int y,int j,int f)
   {
	yuan=y;
	jiao=j;
	fen=f;
   }
   void print();	
};
void RMB::print()
{
	cout<<yuan<<"元"<<jiao<<"角"<<fen<<"分"<<endl;
}
int main()
{
	RMB r1;
    r1.set(10,8,9);
    r1.print();
    return 0;
}


   
