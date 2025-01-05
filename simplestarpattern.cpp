#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){ 
        cout << "*" <<endl;
    }
    for(int i=1;i<=n;i++){
        cout << "* ";
    }
    cout << endl;

    cout << "Nested loop\n";
    for(int i=1;i<=n;i++){ //outer loop how many lines
    int m=4;
        for(int j=1;j<=m;j++){  // inner loop what/how many star in  one line
        //    cout << "*" << endl;
            cout << "* ";
        }
        cout << endl;
    }
    return 0;

    // if i=1 then j= 1 to m;
    // if i=2 then j= 1 to m;
    // if i=3 then j= 1 to m;
    // if i=4 then j= 1 to m;
    // if i=5 then j= 1 to m;
}