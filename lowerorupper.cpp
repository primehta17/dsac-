#include <iostream>
using namespace std;
int main(){
    char ch;

    cout << "Enter charater\n";
    cin >> ch;
    if(ch>='a'&&ch<='z'){
        cout << "lowercase\n";
    }else{
        cout << "uppercase\n";
    }
//implicit type conversion
     if(ch>=65 && ch<=90){
        cout << "uppercase\n";
    }else{
        cout << "lowercase\n";
    }
    //Ascii value
    //char upper case A->65 to Z->90
    //char lower case a->97 to z->122
     ///explicit type conversion we have to do it
     //implicit type conversion computer will do it A to 65
}
