#include <iostream>
using namespace std;

int decTobinary(int num){
   int ans=0, pow=1;
   while(num>0){
      int remainder = num%2;
      num = num/2;
      ans += (remainder*pow);
      pow *= 10;
   }
   return ans;
}

int binaryTodec(int num){
    int ans=0,pow=1;
    while(num>0){
        int remainder = num%10;
        num = num/10;
        ans += (remainder*pow);
        pow *= 2;
    }
    return ans;
}

int main(){
    int dec=50;
    cout << decTobinary(dec) << endl;

    for(int i=1;i<10;i++){
        cout << "print fibonacci till " << decTobinary(i) << endl;
    }
    cout << binaryTodec(1010) << endl;
    return 0;
}