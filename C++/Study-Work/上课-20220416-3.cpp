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
    for (int i = 0; i < 4; i++) //冒泡算法 判断最大值
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
            Student("001", 90),
            Student("002", 59),
            Student("003", 76),
            Student("004", 82),
            Student("005", 50)}; //五个学生数据
    Student *p;                  //定义一个Student的指针
    p = stu;                     //将stu初始地址赋给p指针
    stu[5].MAX(p);               //运行stu[5]的max函数，参数为p
    return 0;
}