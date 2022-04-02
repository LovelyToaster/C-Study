#include<iostream>
using namespace std;
#define PI 3.1415
typedef long long LL;
class Sqare{
    private:
    LL r;
    public:
    void R(){
    cin>>r;
    }
    void S(){
    cout<<"S=";
    printf("%.0f\n",PI*r*r);
    }
};
int main(){
    Sqare a;
    int i;
    cin>>i;
    while(i--){
        a.R();
        a.S();
    }
    return 0;
}