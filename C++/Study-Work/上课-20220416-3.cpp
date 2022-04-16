#include <bits/stdc++.h>
#include <string>
using namespace std;
class Student
{
private:
    string num;
    int score;

public:
    void MAX(Student *);
    Student(string n, int s)
    {
        num = n;
        score = s;
    }
};
void Student::MAX(Student *a)
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (a[j].score > a[j + 1].score)
            {
                temp = a[j].score;
                a[j].score = a[j + 1].score;
                a[j + 1].score = temp;
            }
        }
    }
    cout << a[4].score << endl;
}
int main()
{
    Student stu[5] =
        {
            Student("001", 98),
            Student("002", 99),
            Student("003", 96),
            Student("004", 97),
            Student("005", 50)};
    Student *p;
    p = stu;
    stu[5].MAX(p);
    return 0;
}