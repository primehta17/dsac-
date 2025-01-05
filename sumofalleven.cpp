#include <iostream>
using namespace std;

int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        if(i%2==0){
            sum += i;
        }     
    }
    cout << "sum of all even for loop " << sum << endl;
    
int num=1;int sumodd=0;
    while(num<=5){
        if(num%2==0){
            sumodd += num;
        }
        num++;
    }
    cout << "sum of all even while loop " << sumodd << endl;
    return 0;
}