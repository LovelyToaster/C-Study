#include <iostream>
using namespace std;
class Box
{
public:
    Box(int h = 10, int w = 10, int l = 10);
    Box(int h, int w)
    {
        height = h;
        width = w;
        length = 100;
    }

    ~Box() { cout << "体积为" << height * width * length << "的对象析构函数调用!" << '\n'; }
    int volume();

private:
    int height;
    int width;
    int length;
};
Box::Box(int h, int w, int l)
{
    height = h;
    width = w;
    length = l;
}
int Box::volume()
{
    cout << "体积为" << height * width * length << "的对象构造函数调用!" << '\n';
    return (height * width * length);
}
int main()
{
    Box box1;
    cout << "box1 体积= " << box1.volume() << endl;
    Box box2(15);
    cout << "box2 体积 " << box2.volume() << endl;
    Box box3(15, 30);
    cout << "box3 体积 " << box3.volume() << endl;
    Box box4(15, 30, 20);
    cout << "box4 体积" << box4.volume() << endl;
    return 0;
}
