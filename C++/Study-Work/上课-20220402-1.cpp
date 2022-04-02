#include<iostream>
using namespace std;
class Circle
{  
 double radius;		//声明数据成员
 public:	
   void set(double);	 //类内声明函数成员set
   double perimeter();	 //类内声明函数成员Perimeter
   double area();
};			
void Circle::set(double r)//类外定义函数成员
{
   radius=r;
}
double Circle::perimeter()	
{
  return 2*3.14*radius;
}
double Circle::area()
{
  return 3.14*radius*radius;
}
int main()
{
    Circle c,*ptr;
    c.set(1);
    ptr=&c;
     cout<<"Circle类的对象c的周长是"<<c.perimeter()<<endl
      <<"Circle类指针ptr指向的对象周长是"<<ptr->perimeter()<<endl
      <<"Circle类的对象c的面积是"<<c.area()<<endl
      <<"Circle类的对象ptr的面积是"<<ptr->area()<<endl;
    return 0;
}
