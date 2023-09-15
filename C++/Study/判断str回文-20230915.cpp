#include <iostream>
using namespace std;
bool isPal(char *str, int n)
{
    if (n == 0 || n == 1)
        return true;
    if (str[0] != str[n - 1])
        return false;
    return isPal(str + 1, n - 2);
}