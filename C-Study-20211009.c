#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("input 1.+ \n");
    printf("input 2.- \n");
    printf("input 3.* \n");
    printf("input 4./ \n");
    printf("input 5.END \n");
    scanf("%d" ,&d);
    switch (d)
    {
    case 1:printf("input a b:\n");
           scanf("%d%d" ,&a,&b);
           c=a+b;
           printf("output: %d\n" ,c);
           break;
    case 2:printf("input a b:\n");
           scanf("%d%d" ,&a,&b);
           c=a-b;
           printf("output: %d\n" ,c);
           break;
    case 3:printf("input a b:\n");
           scanf("%d%d" ,&a,&b);
           c=a*b;
           printf("output: %d\n" ,c);
           break;
    case 4:printf("input a b:\n");
           scanf("%d%d" ,&a,&b);
           c=a/b;
           printf("output: %d\n" ,c);
           break; 
    case 5:return 0;     
    }
    if (d>5)
    {
           printf("NO THIS CHOOSE\n");
    }
    return 0;
    
}
