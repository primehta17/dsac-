#include <iostream>
using namespace std;

int main(){
    int num=5;int digit=1;
    //  for(int i=0;i<num;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << j+1;
    //     }
    //     cout << endl;
    // }
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << digit++;
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<num;i++){
        for(int j=i+1;j>0;j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

