#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    int num;
    int score;
    public:
    void setdata()
    {
        cin>>num;
        cin>>score;
    }
    void display(){
        cout<<"num="<<num<<endl;
        cout<<"score="<<score<<endl;
    }
};

int main()
{
    Student a;
    a.setdata();
    a.display();
    return 0;
}