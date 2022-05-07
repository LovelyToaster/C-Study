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
    void funA()
    {
        cout << a1 << endl;
        cout << a2 << endl;
        cout << a3 << endl;
    }
    int a1;

protected:
    int a2;

private:
    int a3;
};
int main()
{
    A a;
    cout << a.a1 << endl;
    cout << a.a2 << endl;
    cout << a.a3 << endl;
    return 0;
}
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
    void funA()
    {
        cout << a1 << endl;
        cout << a2 << endl;
        cout << a3 << endl;
    }
    int a1;

protected:
    int a2;

private:
    int a3;
};
int main()
{
    A a;
    cout << a.a1 << endl;
    cout << a.a2 << endl;
    cout << a.a3 << endl;
    return 0;
}
