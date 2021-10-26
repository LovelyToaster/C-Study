#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n*95;
    if(a>300)
    printf("%.2f",double(a*0.85));
    if(a<300)
    printf("%.2f",double(a));
    return 0;
}
