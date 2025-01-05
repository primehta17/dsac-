#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "student marks\n";
    cin >> marks;
    if(marks<33){
        cout << "fail\n";
    }else if(marks<=80 && marks>=33){
        cout << "pass\n";
    }else{
        cout << "outstanding\n";
    }
}