#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[10000], p;
	int m, b[10000] = {0}, n;
	while (1)
	{
		p = 97;
		m = 0;
		cin.getline(a, 10000);
		for (int i = 1; i <= 26; i++)
		{
			for (int o = 0; o < strlen(a); o++)
			{
				if (a[o] == p)
				{
					b[m] = b[m] + 1;
				}
			}
			p = p + 1;
			m = m + 1;
		}
		n = strlen(a);
		if (a[n - 1] == 35)
			break;
	}
	m = 0;
	for (char i = 97; i <= 122; i++)
	{
		cout << i << " " << b[m] << endl;
		m = m + 1;
	}
	return 0;
}