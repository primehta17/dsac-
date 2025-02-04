//infite loop(never ending) => ending condition (don't write anytime) 
// due to this all system memory dies and it stops the code/file
#include <iostream>
using namespace std;

int main(){
// while is used when we want to use if condition so many times 
//loop is run till this condition is true
//3 steps
//intialize
//condition check
//updation

//print 1 to 5
    int i=1;

    while(i<=5){
        cout << "print 1 to 5 in while loop " << i << endl;
            i++;//i=i+1//i+=1
    }

//initialisation(1 time) //condition // updation
    for(int k=1;k<=5;k++){//k=k+1/2
        cout << "print 1 to 5 in for loop " << k <<endl;
    }


    //intialization//updation//condition
        int s=1;
    do{//it atleast run once 
        cout << "print 1 to 5 in do while loop " << s <<endl;
        s++;
    }while(s<=5);



    // Questions
    //print 1 to m
    int m=5,count=1;    
    while (count<=m){
        cout << "print 1 to m in while loop " << count << endl;
        count++;
    }
    //    sum of numbers 1 to n;
    int sum=0;
    for(int i=1;i<=5;i++){
            sum+=i;
            if(i==3) {break;};//it break in equal to 3 then it will not run furthur
    }
         cout << sum << endl;
    int w=1;
    int add=0;
    while(w<=5){
        add += w; 
        w++;
    }
         cout << add << endl;


//sum of all odd numbers from 1 to n
    int number,sumodd=0;
    cout << "Enter number for even/odd\n";
    cin >> number;

    for(int i=1;i<=number;i++){
         if(i%2!=0){
            sumodd += i; //for 5 answer is 9(1,3,5)
         }
    }
 cout << sumodd << endl;
int o=1,sumoddw=0;
    while(o<=number){
          if(o%2!=0){
            sumoddw += o;
          }
         o++;
    }
     cout << sumoddw << endl;
    return 0;
}