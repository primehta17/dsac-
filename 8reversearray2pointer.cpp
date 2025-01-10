// O(n) time complexity 

#include <iostream>
using namespace std;

void reverse(int arr[],int size){
     int start=0,end=size-1;//totalsize -1
        while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
   int arr[] ={3,44,53,3,4};
  int size = 5;


reverse(arr,size);
for(int i=0;i<size;i++){
    cout << arr[i] << " ";
}
cout << endl;


//    for(int i=0,j=5;i<=j;i++,j--){
//      cout << swap(arr[i],arr[j]) << endl;
//    }

    return 0;
}
