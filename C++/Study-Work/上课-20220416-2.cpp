#include <iostream>
using namespace std;
class Desk
{
private:
	double width, length, height;

public:
	Desk();
	Desk(double, double, double);
	~Desk();
};
Desk::Desk() //默认构造函数
{
	cout << "默认构造函数正在执行" << endl;
}
Desk::Desk(double w, double l, double h) : width(w), length(l), height(h)
{
	cout << "Desk(double,double,double)默认构造函数正在执行" << endl;
}
Desk::~Desk()
{
	cout << "~Desk( )正在执行" << endl;
}
int main()
{
	Desk *ptr = new Desk[3]; //调用默认构造函数创建堆对象数组
	//delete []ptr;			    //delete析构堆对象数组
	Desk desk[2] = {Desk(), Desk(50, 50, 75)};
	//根据实参调用具体的构造函数创建对象，由系统调用析构函数完成内存释放
	Desk *p = new Desk(75, 80, 85); //创建对象
	delete p;						//delete析构对象
	delete p;
	return 0;
}
