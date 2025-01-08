
#include <iostream>
using namespace std;

int main(){
    int num=4;
    // for(int i=1;i<=num;i++){
    //     cout << i <<endl;
    // }
    // for(int i=1;i<=num;i++){
    //     cout << " " << i ;
    // }
    // cout << endl;


//outer loop how many lines
//inner what to print every lines
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout << " " << j;
        }
        cout << endl;
    }

    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout << " " <<j+1;
        }
        cout <<endl;
    }
    return 0;
}