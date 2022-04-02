#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4], x, a1, a2, a3, a4;
    while (cin >> a1 >> a2 >> a3 >> a4) //输入四个数，多组数据
    {
        a[0] = a1;
        a[1] = a2;
        a[2] = a3;
        a[3] = a4;                         //确定数组对应数据
        sort(a, a + 4);                    //排序
        x = a[2] * 100 + a[1] * 10 + a[0]; //确定最大值
        cout << a[3] * x << endl;
    }
    return 0;
}