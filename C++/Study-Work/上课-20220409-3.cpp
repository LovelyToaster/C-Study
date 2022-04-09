#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int id;
    char name[10];
    int age;
public:
    void input();
    void display();
};
void student::input()
{
    cin >> id >> name >> age;
}
void student::display()
{
    cout << id << " " << name << " " << age << endl;
}
int main()
{
    student std;
    std.input();
    std.display();
    return 0;
}