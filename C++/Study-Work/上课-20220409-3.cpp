#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int id;
    char name[10];
    int age;

public:
    student()
    {
        cin >> id >> name >> age;
    }
    void display();
};
void student::display()
{
    cout << "id:" << id << ends << endl;
    cout << "name:" << name << ends << endl;
    cout << "age:" << age << ends << endl;
}
int main()
{
    student std;
    std.display();
    return 0;
}