#include <iostream>
using namespace std;
int main()
{
    char z = 'a';
    for (int i = 0; i < 26; i++)
    {
        cout << "map.put(\'" << z << "\', \'r\');" << endl;
        z = z + 1;
    }
    return 0;
}