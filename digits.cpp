//striver 1 to z (BASCICMATHS )//take u forward
#include <iostream>
#include <vector>

using namespace std;
int countdigits(int num){
    int count=0;
    while(num>0){
        int lastDigit = num%10;
        num = num/10;
        count++;
        //shortcut (int)(log10(num)+1)// int type log10 and plus 1
    }
    return count;
}
int shortcutCountlog(int num){ 
   
     int count=(int)(log10(num)+1);
     return count;
}

int sumdigits(int num){
    int rev=0;
    while(num>0){
        int lastDigit = num%10;
        num = num/10;
        rev += lastDigit;
    }
    return rev;
}

int reverseDigit(int num){
    int rev=0;
    while(num>0){
        int lastDigit = num%10;
        num = num/10;
        rev=(rev*10)+lastDigit;
    }
    return rev;
}

int palindromeDigit(int num){ //num = 94249
    int rev=0;int originalnum=num;
    while(num>0){
        int lastDigit = num%10;
        num=num/10;
        rev = (rev*10)+lastDigit; //(0*10)+9=10 //(9*10)+4 =94 //(94*10)+2 //942 so on..
    }
    return rev==originalnum?true:false;
}
//sum of cube is equals to number
int armStrongNumber(int num){ //num = 371
    int sum=0;int originalnum=num;
    while(num>0){
        int lastDigit = num%10;
        sum += (lastDigit*lastDigit*lastDigit);
        num = num/10;
    }
    return sum==originalnum?true:false;
}

void allDivisors(int num){ // 0(n)
    for(int i=1;i<=num;i++){ 
        if(num%i==0){
            cout << "divisors => " << i << endl;
        }
    }  
}

void allDivisorssqrt(int num){ // 0(logn)
    for(int i=1;i<=sqrt(num);i++){ //root till square 
        if(num%i==0){
            cout  << i << " ";
            if(num/i != i){
                 cout << num/i << " ";
            }
        }
    }  
    cout << endl;
}
//1 36 2 18 3 12 4 9 6 

void sortedallDivisorssqrt(int n){ //n log n
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if(n/i != i){
                ls.push_back(n/i);
            }
        }

    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
    cout << endl;
}// 1 2 3 4 6 9 12 18 36 



//exactly two factors 1 and itself
bool primeDigits(int num){
    int isPrime=true;
   for(int i=2;i<=sqrt(num);i++){
    if(num%i==0){
        return isPrime=false;
    } 
   }
return isPrime;
}

void greatercommonfactor(int a, int b){
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            cout << i << endl;
        }
    }
}

int main(){
    int number = 77;
    cout << countdigits(number) << endl;
    cout << shortcutCountlog(number) << endl;
    cout << sumdigits(number) << endl;
    cout << reverseDigit(number) << endl;
    cout << palindromeDigit(number) << endl;
    cout << armStrongNumber(number) << endl;
    allDivisors(number);
    allDivisorssqrt(number);
    sortedallDivisorssqrt(number);
    cout << primeDigits(number) << endl;
    greatercommonfactor(3,6);
}