///first Data-structure

//Non-primitive data-type
//pass by reference //address share implicit(automatically /done by computer)
//data-structure means: forms of store data in database
//types of ds 
//1. linear (single line);
//2. Hieracrial (like tree/graphs)


//algorithms -  effecient data operations(search ,sort) 
//array 
//-> same type
//-> fixed size
//-> contiguous in memory + linear 
//if first is 4 bytes with place of 100 
//then is 104 with 4 bytes and continue
//if we know first array address (starting address) then it is easy to another indices(index)
//syntax int marks[5]; int is datatype, marks is variabl, 5 is size 
//each block save one-one integer in memory
//only access the 0 to size-n // before and after that give error not the part 
//if we write invalid size beyond the size is given(like -1,5,6) it will give garbage values
#include <iostream>

using namespace std;
int main(){
    int marks[5] = { 99,23,4,55,99 }; 
    // 4 bytes to 1 box * 5 indices equal 20 bytes of it is occuping
    //int marks[50] if we created 50 size in memory but only first 5 is used 
    double price[] = {99.3,44.33,33.2};//3 size in memory if it is equivalent to size 
    //we don't have to give the size
    //in this have fixed position called index
    //it always goes 0 to size-1

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

//to get the size 4*5like above
     cout << sizeof(marks) << endl; //20 total array size 4 bytes AND 5 indices
     cout << sizeof(marks)/sizeof(int) <<endl; //5 divided by sizeof(int)(indices is int) //size of array 
    //by using loop we can access the values
        int size=5;
        for(int i=0;i<size;i++){
            cout << marks[i] << endl;
        }

        int prices[size];
        ////enter input
        for(int j=0;j<size;j++){
            cout << "Enter array" << endl;
            cin >> prices[j]; // 23,44,5,66,12
        }

        for(int k=0;k<size;k++){
            cout << "all array" << prices[k] << endl;
        }
    return 0;
    //successfully terminated when main function end to tell operating system to empty 
    //the hardware memory/resourse

}

