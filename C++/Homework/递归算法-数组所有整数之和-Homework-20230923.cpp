#include <iostream>
using namespace std;
int sum(int e[], int l)
{
    if (l == 0)
    {
        return 0;
    }
    return e[l - 1] + sum(e, l - 1);
}

int main()
{
    int e[5] = {1, 2, 3, 4, 5};
    cout << sum(e, sizeof(e) / sizeof(e[0])) << endl;
    return 0;
}