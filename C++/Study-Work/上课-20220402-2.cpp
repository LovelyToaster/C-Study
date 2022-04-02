#include <iostream>
using namespace std;
class Door
{
private:
	bool open;
public:
	void set(bool);
    void openDoor();
    bool isOpen();
};
void Door::set(bool b)
{
    open=b;
}
void Door::openDoor()
{
	if(open)
		cout<<"门已经开了"<<endl;
	else
	{
		open=true;
		cout<<"这就打开门"<<endl;
	}
}
bool Door::isOpen()
{
	return open;
}
int main()
{
    Door theDoor;
    theDoor.set(false);
    cout<<"对象theDoor的数据成员open的值为"<<theDoor.isOpen()<<endl;	
    theDoor.openDoor();
	return 0;

}