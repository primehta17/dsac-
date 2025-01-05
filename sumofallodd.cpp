#include <iostream>
using namespace std;

int main(){
    int sum=0;
    for(int num=1;num<=5;num++){
         if(num%2!=0){
            sum += num;
         }   
    }
     cout << "sum of all " << sum <<endl;

int oddnum = 1;int oddsum=0;
     while(oddnum<=5){
        if(oddnum %2 !=0){
             oddsum += oddnum;
            // cout << "print all odd number " << all << endl;
        }
        oddnum++;
     }
     cout << oddsum << endl;
}