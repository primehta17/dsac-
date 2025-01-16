#include <iostream>
using namespace std;

int sumNumtoN(int num){
    int sum=0;
    for(int i=0;i<num;i++){
        sum += i;
    }
    return sum;
}
int factorial(int numb){
    int fact = 1;
    for(int i=1;i<=numb;i++){
        fact*=i;
    }
    return fact;
}
int sumdigits(int num){
   int digitSum=0;
   while(num>0){
    int lastDig = num%10;
    num = num/10;
    digitSum += lastDig;
   }
   return digitSum;
}
///rough draft of binomal coeffiecient

//// n!/r!(n-r)!
// int binomialcoffecient(int n,int r){
//     int fact=1;int fac=1;int fa=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//      for(int i=1;i<=r;i++){
//         fac*=i;
//     }
//     for(int i=1;i<=(n-r);i++){
//         fa*=i;
//     }
//     int bin = fact/(fac*fa);
//     return bin; 
// }

//it is calling factorial function;
int nCr(int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nminusr = factorial(n-r);
    return fact_n/ (fact_r * fact_nminusr);
}
int main(){
    cout << "sum of 1 to N " << sumNumtoN(5) << endl;
     cout << "sum of 1 to N " << sumNumtoN(10) << endl;
      cout << "sum of 1 to N " << factorial(5) << endl;

      cout << "sum of sum of digits " << sumdigits(2345) <<endl;

      int a=6;
      int b=3;
      int c=a-b;
      int bineff = factorial(a)/(factorial(b)*factorial(c));
      cout << "binomial coefficient " << bineff << endl;


      cout << nCr(a,b) <<endl;
    return 0;
     //we can return without any value //return the control
}