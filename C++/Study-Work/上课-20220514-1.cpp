#include <iostream>
using namespace std;
class Base //定义基类
{
public:
    int Base_i1;
    int Base_i2;
    Base(int a = 0, int d = 0) : Base_i1(a), Base_i2(d) { cout << "in Base" << endl; }
};
class Derived : public Base //定义派生类
{
public:
    int Derived_i;
    Derived(int x = 10) : Derived_i(x) { cout << "in Derived" << endl; }
};
int main()
{
    Derived d;
    cout << "sizeof(Base)=" << sizeof(Base) << endl
         << "sizeof(Derived)=" << sizeof(Derived) << endl;
    cout << "Base_i1=" << d.Base_i1 << ",Base_i2=" << d.Base_i2 << ",Derived_i=" << d.Derived_i << endl;
    return 0;
}
