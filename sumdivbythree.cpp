//sum of all 1 to n which is divisible by 3;

#include <iostream>
using namespace std;

int main(){
    int num=10;int sum=0;
    for(int i=1;i<=num;i++){
            if(i%3 == 0){
                sum += i;
                // cout << sum <<endl;
            }
        }
        cout << sum <<endl;

    int m=1;int wsum=0;
   
    while(m<=num){
        // cout << wnum << endl;
        if(m%3==0){
            wsum += m;
        }   
        m++;
     }
    cout << wsum << endl;
    return 0;
}


