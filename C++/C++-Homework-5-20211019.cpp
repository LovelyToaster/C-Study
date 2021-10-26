#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    scanf("%f",&x);
    if(x<1)
    printf("y=%.2f\n",float(x));
    if(x>=1&&x<10)
    printf("y=%.2f\n",2*x-1);
    if(x>=10)
    printf("y=%.2f\n",3*x-11);
    return 0;
}
