//number is divisible by its own and 1 is prime number

#include <iostream>
using namespace std;

int main(){
    
int num=34;
    for(int i=2;i*i<=num;i++){
        if(num%i == 0){
            cout << "number is non-prime " << num << endl;
            break;
        }else{
            cout << "number is prime " << num << endl;
            break;
        }
    }
    return 0;
}