#include <iostream>
using namespace std;
class Date
{
private:
	int month, day, year;

public:
	Date();								  //默认构造函数
	Date(int m, int d = 1, int y = 2020); //参数带默认值的构造函数
	~Date();							  //析构函数
};
Date::Date()
{
	cout << "Date()正在执行" << endl;
}
Date::Date(int m, int d, int y) : year(y), month(m), day(d)
{
	cout << "Date(int,int,int) 正在执行" << endl;
}
Date::~Date()
{
	cout << "~Date()正在执行" << endl;
}
int main()
{
	Date d[2];						  //调用默认构造函数创建数组元素
	Date temp(5, 3, 2021);			  //调用Date(int,int,int)
	Date t[] = {Date(), Date(4, 19)}; //根据实参确定需要调用的构造函数
	return 0;
}