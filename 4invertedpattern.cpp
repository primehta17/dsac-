#include <iostream>
using namespace std;

int main(){
    int num=5;
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << " ";
    //     }
    //     for(int j=i;j<=num;j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<num;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=i;j<num;j++){
            cout << i+1;
        }
        cout << endl;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<num-i;j++){
            cout << i+1;
        }
        cout << endl;
    }

  
    for(int i=0;i<num;i++){
        char ch='a'+i;
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<num-i;j++){
            cout << ch++;
        }
        cout << endl;
    }
    return 0;
}