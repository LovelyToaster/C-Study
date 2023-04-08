#include <iostream>
#include <string>
#include <vector>
using namespace std;

string func(int *arr)
{
    string str;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        str += to_string(arr[i]);
    }
    return str;
}
int main()

{
    string str;
    int test[1];
    cin >> test[0];
    str = func(test);
    cout << test[0] << endl;
    cout << str << endl;
}
