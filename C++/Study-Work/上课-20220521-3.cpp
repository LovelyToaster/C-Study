#include <iostream>
using namespace std;
template <typename numtype>
class Compare
{
private:
    numtype x, y;

public:
    Compare(numtype a, numtype b) //  构造函数
    {
        x = a;
        y = b;
    }
    numtype max();
    numtype min()
    {
        return (x < y) ? x : y;
    }
};
template <typename numtype>
numtype Compare<numtype>::max()
{
    return (x > y) ? x : y;
}
int main()
{
    Compare<int> cmp1(3, 7);
    cout << cmp1.max() << "是两个整数中的大数." << endl;
    cout << cmp1.min() << "是两个整数中的小数." << endl;
    Compare<char> cmp3('a', 'A');
    cout << cmp3.max() << "是两个字符中的大者." << endl;
    cout << cmp3.min() << "是两个字符中的小者." << endl;
    return 0;
}
