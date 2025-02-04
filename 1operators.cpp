
//operators 

// 1) Arithmetic (+,-,*,/,%)
// 2) Relational (<,<=,>,>=,==,!=)//it return true(1) or false(0) (3!=3)//0
// 3) Logical (&&,||,!) !(3<1) //answer is opposite/reverse //multiple statement for amplersent and not ()&&()
#include <iostream>
using namespace std;

int main(){

//operators
    int a=10, b=20;
     cout << (a+b) << endl;
      cout << (a-b) << endl;
       cout << (a*b) << endl;
        cout << (a/b) << endl; 
         cout << (a%b) << endl;
         //for float answers (a/b) //typecasting or we can see the assigned datatype
          cout << (5/(double)2) << endl;


          //input sum program
      int first,second;
      cout << "Enter first number"<< endl;
      cin >> first;
      cout << "Enter second number"<< endl;
      cin >> second; 

      cout << first+second << endl;


//Unary operators
// 1) increament=> a++
// 2) decreament => a--


int inc1 = 1;
//post increment operator(a++)
int postinc = inc1++;//increament and then update in next line //phle store ho memeory pe phir increment krna 
cout << "inc++ => " << postinc << endl;


int inc2=1;
//pre increment operator(++a)
int preinc = ++inc2;//update in same line and then kaam karo // phle increment then store in variable
cout << "++inc => " << preinc << endl;


int dec1 = 1;

//post decrement operator(a--)
int postdec = dec1--;//decreament and then update in next line //phle store ho memeory pe phir decrement krna 
cout << "dec-- => "<< postdec << endl;

int dec2 = 1;
int predec = --dec2;//update in same line and then kaam karo // phle decrement then store in variable
cout << "--dec => " << predec << endl;

     return 0;
}