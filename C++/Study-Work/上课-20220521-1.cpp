#include <iostream>
using namespace std;
class Person
{
public:
    virtual void Clicked();
};
class Teacher : public Person
{
public:
    void Clicked() { cout << "in Teacher!" << endl; }
};
class Student : public Person
{
public:
    void Clicked() { cout << "in Student!" << endl; }
};
void Person::Clicked()
{
    cout << "in Person!" << endl;
}
int main()
{
    Person A;
    Teacher B;
    Student C;
    A = B;
    A.Clicked();
    Person *ptr = &A;
    ptr->Clicked();
    ptr = &B;
    ptr->Clicked();
    ptr = &C;
    ptr->Clicked();
    return 0;
}
