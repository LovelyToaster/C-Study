#include <iostream>
using namespace std;
class Net_Computer
{
public:
    Net_Computer();
    static void print() { cout << "目前的在线人数为：" << number << endl; }
    void show_address();

private:
    static int number;
};
int Net_Computer::number = 2000;
Net_Computer::Net_Computer()
{
    char response;
    cout << "你要上网吗?(Y/N)" << endl;
    cin >> response;
    if ((response == 'Y') || (response == 'y'))
        number++;
}
void Net_Computer::show_address() { cout << "数据成员number的内存地址是" << &number << endl; }
int main()
{
    Net_Computer::print();    //使用类名::访问静态函数成员
    Net_Computer computer[5]; //创建5个对象
    computer[1].print();    //使用类名::访问静态函数成员
    for (int i = 0; i < 5; i++)
        computer[i].show_address(); //静态数据成员地址
    return 0;
}
