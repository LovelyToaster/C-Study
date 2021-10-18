#include<iostream>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        if(t>=90&&t<=100)
        printf("A\n");
        if(t>=80&&t<=89)
        printf("B\n");
        if(t>=70&&t<=79)
        printf("C\n");
        if(t>=60&&t<=69)
        printf("D\n");
        if(t>=0&&t<=59)
        printf("E\n");
        if(t>100||t<0)
        printf("Score is error!\n");
    }
    return 0;
}