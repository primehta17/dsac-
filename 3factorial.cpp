
/// n! = 1*2*3*4*5....n
#include <iostream>
using namespace std;

int main(){
     int n=5;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    cout << fact <<endl;

    int m=1;int mfact=1;
    while(m<=n){
        // cout << m  <<endl;
        mfact *= m;
        m++;
    }
    cout << mfact <<endl;
}