#include <iostream>
using namespace std;
int num(int n)
{
	int a = 0, b = 0, m = n;
	while (m != 0)
	{
		b = m % 10;
		a = a * 10 + b;
		m = m / 10;
	}
	if (a == n)
		return 1;
	else
		return 0;
}
int main()
{
	int x, y = 0;
	cout << "请输入数据：" << endl;
	cin >> x;
	y = num(x);
	if (y == 1)
		cout << "此数是回文数。" << endl;
	else
		cout << "此数不是回文数。" << endl;
	return 0;
}