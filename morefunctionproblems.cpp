#include <iostream>
using namespace std;
int isPrime(int num){
    if(num<=1){
        return 0;
    }
   for(int i=2;i<num;i++){
      if(num%i==0){
       return 0;
      }
   }
   return 1;
}

// 1,1,2,3,5,8,13
void fibonacci(int n) {
    int a = 0, b = 1, next;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}
int sumOfDigits(int num){
    int digit=0;
    while(num>0){
        int lastDig = num%10;
        num = num/10;
        digit += lastDig;
    }
    return digit;
    

}
int main(){
    // to check number is prime or not
    int num=5;
    if(isPrime(num)){ //isPrime==1;
        cout << num << " no is prime" << endl;
    }else{
        cout << num << " no is non-prime" << endl;
    }
///to print 1 to N prime number
    for(int i=0;i<num;i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
int n=5;
   fibonacci(n);
int dig=154;

   cout << sumOfDigits(dig) << endl;
    return 0;
}


