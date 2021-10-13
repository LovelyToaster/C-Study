#include<stdio.h>
#include<math.h>
#define X 3.14159265
int main()
{
    int n;
    scanf("%d",&n);
    printf("%.3f %.3f",(float)sin (n*X/180),(float)cos (n*X/180));
    return 0;
}