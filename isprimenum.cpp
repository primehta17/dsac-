#include <iostream>
using namespace std;

int main(){
    int num,i;
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