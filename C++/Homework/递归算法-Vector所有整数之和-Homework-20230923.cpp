#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> e, int l)
{
    if (l == 0)
    {
        return 0;
    }
    return e[l - 1] + sum(e, l - 1);
}

int main()
{
    vector<int> e;
    for (int i = 1; i <= 100; i++)
    {
        e.push_back(i);
    }
    cout << sum(e, e.size()) << endl;
    return 0;
}