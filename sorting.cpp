#include <iostream>
#include <vector>
using namespace std;

void bubblesort(int vec[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
       if(vec[i]>vec[j]){
        int temp=vec[i];
        vec[i]=vec[j];
        vec[j]=temp;
       }

        }
       cout << vec <<endl;
    } ;
    cout << endl;

}
int main(){
   int arr[]= {2,1,4,5,3};
   int size =5;
   cout << bubblesort(arr,size);
    return 0;
}