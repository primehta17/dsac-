//if for condition

//if (n>0) //positive else negative 
//{} are optional in single line

#include <iostream>
using namespace std;

int main(){
//exams if else if
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
//interger numbers
    int n=-23;
    if(n>0){
        cout << "positive" << endl;
    }else{
        cout << "negative" << endl;
    }
//voting age
    int age=25;
    if(age<=18){
        cout << "You can vote\n";
    }else{
        cout << "You cannot vote\n";
    }
//even or odd
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

        cout << (23>=0 ? "positive" : "negative") << endl;
        return 0;


}