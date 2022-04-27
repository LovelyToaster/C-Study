#include <bits/stdc++.h>
#include <string>
using namespace std;
class Student
{
public:
    void scanf()
    {
        cin >> number;
        cin >> name;
        cin >> score;
    }
    void print()
    {
        cout << "number=" << number << endl;
        cout << "name=" << name << endl;
        cout << "score=" << score << endl;
    }

protected:
    int number;
    string name;
    float score;
};
class UStudent : private Student
{
public:
    void scanf()
    {
        Student::scanf();
        cin >> major;
    }
    void print()
    {
        Student::print();
        cout << "major=" << major << endl;
    }

private:
    string major;
};
int main()
{
    UStudent stu;
    stu.scanf();
    stu.print();
    return 0;
}