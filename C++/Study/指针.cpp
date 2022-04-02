#include <bits/stdc++.h>
using namespace std;
int main (){
    int *pi=new int(10);
    cout<<"*pi="<<*pi<<endl;
    *pi=20;
    cout<<"*pi="<<*pi<<endl;
    char *pc=new char[10];
    for(int i=0;i<10;i++)
        pc[i]=i+65;
    for(int i=0;i<10;i++)
        cout<<pc[i]<<" ";
        cout<<endl;
}