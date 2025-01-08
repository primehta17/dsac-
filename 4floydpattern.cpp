
#include <iostream>
using namespace std;

int main(){

  int num=4;int sum=1;
        for(int i=0;i<num;i++){
            for(int j=0;j<i+1;j++){
                cout << sum++;
            }
            cout << endl;
        }
// 1
// 23
// 456
// 78910
char ch='a';
for(int i=0;i<num;i++){
    for(int j=0;j<i+1;j++){
        cout << ch++;
    }
    cout << endl;
}
// a
// bc
// def
// ghij
char chh='A';
for(int i=0;i<num;i++){
    for(int j=i+1;j>0;j--){
        cout << " " << chh++;
    }
    cout << endl;
}
    return 0;
}
// A
// BC
// DEF
// GHIJ