#include <bits/stdc++.h>
using namespace std;
struct Time
{
	int h;
	int m;
	int s;
};
Time rationalize(Time c)
{
	c.m = c.m + c.s / 60;
	c.s = c.s % 60;
	c.h = c.h + c.m / 60;
	c.m = c.m % 60;
	c.h = c.h % 24;
	return c;
}
Time add(Time a, Time b)
{
	Time c;
	c.h = a.h + b.h;
	c.m = a.m + b.m;
	c.s = a.s + b.s;
	return c;
}
int main()
{
	Time a, b, c;
	while (1)
	{
		cin >> a.h >> a.m >> a.s >> b.h >> b.m >> b.s;
		if (cin.fail())
			break;
		c = add(a, b);
		c = rationalize(c);
		printf("%02d:%02d:%02d\n", c.h, c.m, c.s);
	}
	return 0;
}
