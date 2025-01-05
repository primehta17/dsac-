#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "enter number" << endl;
    cin >> number;
if(number%2==0){
    cout << "number is even\n";
}else{
    cout << "number is odd\n";
}
//by ternery operator
(number%2==0)?cout<<"even\n":cout<<"odd\n";
}