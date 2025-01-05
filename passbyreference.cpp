#include <iostream>
using namespace std;
void change(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
   int arr[5] ={2,33,24};
   change(arr,3);
   cout << endl;
   for(int i=0;i<3;i++){
     cout << "values " << arr[i] << endl;
   }
    return 0;
}