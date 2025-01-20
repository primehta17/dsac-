#include <iostream>
#include <vector>
using namespace std;

int primeNum(int n){
    vector<bool> isPrime(n+1,true);
    int count = 0;
    for(int i=2; i<n; i++){
        if(isPrime[i]){
            count++;
            for(int j=i*2; j<n; j = j+i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}
bool armstrong(int num){ //sum of cubes
    int sum = 0;
    int copy = num;
    while(num!=0){
        int lastDig = num%10;
        sum += (lastDig*lastDig*lastDig);
        num = num/10;
    }
    return sum==copy;
}
//// EULCID ALGORITHM (modulo of every step)
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a == 0) return b;
    return a;
}
//recursion
int recursionGcd(int a,int b){
    if(b==0) return a;
    return recursionGcd(b,a%b);
}

 int lcm(int a,int b){
         int gcd =  recursionGcd( a, b);
         return (a*b)/gcd;  
        }

 int reverse(int num) {
    int revnum=0;
    while(num !=0){
        int lastDigit = num % 10;
        revnum = revnum*10+lastDigit;
        num = num/10;
    }
    return revnum;
 }  
//palindrome number reverse and number is same
//negative interger is 0 because -ve always return - in front 
 int palindrome(int x){ 
    if(x<0) return 0;
    int intNum = reverse(x);
    return intNum == x;
 }  
int main(){
    int n=10;
        cout << primeNum(n) << endl;
        cout << log10(n)+1 << endl;//count of digits(shortcut)
        int num=153;
        cout << armstrong(num) << endl;
        if(armstrong(num)){
            cout << "is an armstrong number\n";
        }else{
            cout << "Not an armstrong number\n";
        }

        cout << "luchid algorith => " << gcd(20,28) << endl;

       cout << "recursionGcd => " << recursionGcd(20,28) << endl;
       cout << "lcm => " << lcm(20,28) << endl;


       cout << " reverse => " << reverse(4537) << endl;

       cout << "palindrome(reverse and number same) => " << palindrome(3123) << endl;
}
