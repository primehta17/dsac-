//BOILER PLATE CODE
//apna college - sharda kapra

#include <iostream> //we have to include isstream for excute cout
using namespace std; //use std
// we can use also std::cout//standard
int main(){ //main function
    cout << "Hello from c++" << endl;//print the output  
    //%it came when we didn't use endl
    //endl =>end line  "Hello from \n c++" also used it is faster
   cout <<"Priyanka \n Mehta" << endl;
   int age=88;
   cout << sizeof(age) <<endl; //sizeof get the length of variable
   float PI= 3.14f; //f for float if not considered double

//implicit type casting
   char grade='A';
   int value = grade;//in this right value store in value
   cout << value << endl; //65 //ASCII VALUE
//explicit type casting
   double price = 100.99;
   int newPrice = (int)price;
   cout << newPrice << endl;

// cin,cout //global objects
   //User Input 
   int data;
   cout << "Enter your data" << endl;
   cin >> data;
    cout << "Enter your data " << data;


    return 0;//return integer

}

//first comiler =>code to compiler//to see any error is coming
//only excutable file will understable by computer

// line COMMENT

//g++ -std=c++11 productarray.cpp && ./a.out