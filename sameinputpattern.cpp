#include <iostream>
using namespace std;

int main(){
    int num=5;
    for(int i=0;i<num;i++){ //i = 0,1,2,3,4
        for(int j=0;j<i+1;j++){ // 0, 01, 012, 0123, 01234
             cout << i+1;
        }
        cout << endl;
    }
// 1
// 22
// 333
// 4444
// 55555
 
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout <<endl;
    }
// 1
// 22
// 333
// 4444
// 55555
    
     for(int i=0;i<num;i++){
        char ch ='a'+ i;
        for(int j=0;j<i+1;j++){
            cout << ch ;
        }
        cout << endl;
    }
// a
// bb
// ccc
// dddd
// eeeee
    for(int i=0;i<num;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1;
        }
        cout << endl;
    }
    // 1
    // 12
    // 123
    // 1234
    // 12345
    return 0;
}