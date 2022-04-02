#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[300 + 10], n, sum = 0, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) //输入多组数据
    {
        cin >> a[i];
    }
    sort(a, a + n);            //排序，方便后期运算
    sum = a[n - 1] * a[n - 1]; //确定一个最大距离
    x = n - 1;
    y = 0;
    for (int i = 1; i < n; i++) //计算剩余内容
    {
        sum = sum + (a[x] - a[y]) * (a[x] - a[y]);
        x = y;
        if (i % 2 == 1) //确定指针位置
            y = n - x - 2;
        else
            y = n - x - 1;
    }
    cout << sum;
    return 0;
}