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
        id = 0;
        name[10] = 0;
        age = 0;
    }
    void display();
};
void student::display()
{
    cin >> id >> name >> age;
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