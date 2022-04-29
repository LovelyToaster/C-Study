#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    int no;            //学号
    string name;       //姓名
    double deg;        //成绩
    static int count;  //学生个数
    static double sum; //总分
public:
    Student()
    {
        count++;
    }
    Student(int no1, string name1, float deg1);
    void print(Student *p)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> p[i].no >> p[i].name >> p[i].deg;
            sum = sum + p[i].deg;
        }
    }
    void show(Student *p)
    {
        cout << "-------" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout
                << "no"
                << " " << p[i].no << endl
                << "name"
                << " " << p[i].name << endl
                << "deg"
                << " " << p[i].deg << endl
                << "-------" << endl;
        }
        cout << "ave"
             << " " << Student::ave() << endl;
    }
    static int total() //获取学生总数
    {
        return count;
    }
    static double ave() //计算平均分
    {
        return sum / count;
    }
};
Student::Student(int no1, string name1, float deg1)
{
    no = no1;
    name = name1;
    deg = deg1;
}
int Student::count = 0;
double Student::sum = 0;
int main()
{
    Student stu[4];
    Student *p;
    p = stu;
    stu[4].print(p);
    stu[4].show(p);
    return 0;
}