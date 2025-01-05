#include <iostream>
using namespace std;

int main(){
    int i=1;

    while(i<=5){
        cout << "print 1 to 5 in while loop " << i << endl;
            i++;
    }

    for(int k=1;k<=5;k++){
        cout << "print 1 to 5 in for loop " << k <<endl;
    }
int s=1;
    do{
        cout << "print 1 to 5 in do while loop " << s <<endl;
        s++;
    }while(s<=5);
}