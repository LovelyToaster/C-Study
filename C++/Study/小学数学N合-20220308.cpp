#include <bits/stdc++.h>
using namespace std;
#define PI 3.141593
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2)
    {
        cout << "6"
             << " "
             << "4" << endl;
    }
    else if (T == 3)
    {
        cout << "3" << endl
             << "12" << endl
             << "2" << endl;
    }
    else if (T == 4)
    {
        printf("%.3f\n", 500 / 3.0);
    }
    else if (T == 5)
    {
        cout << "15" << endl;
    }
    else if (T == 6)
    {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    }
    else if (T == 7)
    {
        cout << "110" << endl
             << "90" << endl
             << "0" << endl;
    }
    else if (T == 8)
    {
        cout << 2 * PI * 5 << endl
             << PI * 5 * 5 << endl
             << 4 * PI * 5 * 5 * 5 / 3 << endl;
    }
    else if (T == 9)
    {
        cout << "22" << endl;
    }
    else if (T == 10)
    {
        cout << "9" << endl;
    }
    else if (T == 11)
    {
        cout << 100.0 / 3 << endl;
    }
    else if (T == 12)
    {
        cout << "13" << endl
             << "R" << endl;
    }
    else if (T == 13)
    {
        double v;
        v = 4 * 4 * 4 * 4 * PI / 3 + 4 * 10 * 10 * 10 * PI / 3;
        cout << int(cbrt(v)) << endl;
    }
    else if (T == 14)
    {
        int p,v,i=1;
        for(;i<120;++i) 
        {
            p = 10+110-i;
            v = p * i;
            if (v == 3500)
                break;
        }
        cout << i <<endl;
    }
    return 0;
}