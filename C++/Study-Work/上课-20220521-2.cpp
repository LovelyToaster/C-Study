#include <iostream>
using namespace std;
template <typename T>
double average(T src[], int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(src[j]>src[j+1])
            {
                swap(src[j],src[j+1]);
            }
        }
    }
    return src[len-1];
}
int main()
{
    int n[] = {10, 1, 27, 43, 15};
    cout << "Max: " << average(n, 5) << endl;
    float f[] = {10.2f, 1.5f, 2.7f, 4.3f, 1.5f};
    cout << "Max: " << average(f, 5) << endl;
    double d[] = {10.2, 51.5, 20.7, 40.3, 1.5, -12.6, 5.64};
    cout << "Max: " << average(d, 7) << endl;
    return 0;
}
