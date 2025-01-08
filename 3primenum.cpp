//number is divisible by its own and 1 is prime number

#include <iostream>
using namespace std;

int main(){
    
int num=34;
//squareroot because even number //i starts with 2 ends with n-1 
//like for 7 1*7 or 7*1 //it is repeating i.e we use sqrt (i*i)
//like for 12 1*12 or 2*6 or 3*4 or 4*3 or 6*2 or 12*1
//checks the result till root 2 to root 12 =>3.2 we take 3 till here we have to check
    for(int i=2;i*i<=num;i++){
        if(num%i == 0){
            cout << "number is non-prime " << num << endl;
            break;
        }else{
            cout << "number is prime " << num << endl;
            break;
        }
    }
        bool isPrime=true;
            cout << "Enter prime number \n";
            cin >> num;
        for(int i=2;i<=num-1;i++){
                if(num%i==0){
                    isPrime =false;
                    break;
                }
        }
        if(isPrime==true){
            cout << "prime number\n";
        }else{
            cout << "non-prime\n";
        }
    return 0;
}