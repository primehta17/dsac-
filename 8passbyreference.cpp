//array is pass by reference(implicit=>automatic)
//pass by address(it is pointers in c++)
//it reflected in original array 

#include <iostream>
using namespace std;
void changeArr(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
   int arr[5] ={2,3,4};
   changeArr(arr,3);
   cout << endl;
   for(int i=0;i<3;i++){
     cout << "values " << arr[i] << endl;

        // values 4
        // values 6
        // values 8
   }

   //values is changeing in main when we change in changeArr function
    // (we should be careful about that if changeArr function it will change the value of main function)
    return 0;
}