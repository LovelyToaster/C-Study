#include <iostream>
using namespace std;
class Box
{
public:
    static int objectCount;
    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        objectCount++;
    }
    double Volume() { return length * breadth * height; }

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};
int Box::objectCount = 10;
int main()
{
    Box Box1(3.3, 1.2, 1.5); // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2
    cout << "Total objects: " << Box::objectCount << endl;
    cout << "Box1大小：" << sizeof(Box1) << " Box2大小：" << sizeof(Box2) << endl;
    return 0;
}
