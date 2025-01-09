//if we want to avoid reduncany(unnecessary repeation) create function

#include <iostream>
using namespace std;

//function definition
void printHello(){ //void it is not returning anything only printing Hello
    cout << "Hello\n";
}

int printValue(){ //returning integer
    cout << "Hello from int return\n";
    return 3;
}
//parameteres
int printSum(int a,int b){ //any data-types
    int s=a+b;
    return s;
}

int minNum(int i,int j){//parameters (copy of arguments)
    if(i<j){
        return i;
    }else{
        return j;
    }
}

int main(){
//function call / invoke
printHello();
printHello();//many times
cout << "print val " << printValue() <<endl;
int val=printValue();
cout << "val is " << val << endl;
cout << "sum function " << printSum(6,7) <<endl;
cout << "minimum number " << minNum(79,89) <<endl; //arguments //sending to parameters
    return 0;
}


