#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        a1 = 1;
        a2 = 2;
        a3 = 3;
    }
    int a1;

protected:
    int a2;

private:
    int a3;
};
class B : public A //公有继承
{
public:
    void funB()
    {
        cout << a1 << endl;
        cout << a2 << endl;
        cout << a3 << endl;
    }
};
int main()
{
    B b;
    return 0;
}
