//O(n) complexity
#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
    if(arr[i]==target){
        return i;
    }  
   } 
    return -1;//Not found
}
int main(){
   int arr[5] ={2,3,73,24};int target=24;
   
int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
//  for(int i=0;i<sizeof(arr);i++){
//     if(arr[i]==target){
//         cout << i << endl;
//     }  
//    } 
//     cout << -1 <<endl;
    
cout << linearSearch(arr, n, target) << endl; // Pass array size as an additional argument
 
    return 0;
}