#include<bits/stdc++.h>
using namespace std;
int mix(int a,int b){
    return a+b;
}
int main(){
    int a,b,n;
    cin>>n;
    while (n--!=0){
    cin >>a>>b;
    cout << mix (a,b)<<endl;
}
return 0;
}