#include <iostream>
using namespace std;
class Person
{
public:
    Person();
    ~Person();
};
Person::Person()
{
    cout << "正在执行Person类的构造函数。" << endl;
}
Person::~Person()
{
    cout << " Person类析构函数。" << endl;
}
class Kid : public Person //公有继承
{
public:
};
int main()
{
    Kid youyou; //定义对象youyou
    return 0;
}
