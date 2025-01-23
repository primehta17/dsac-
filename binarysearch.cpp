#include <iostream>
#include <vector>

using namespace std;

//single eleent in sorted array
//linear search
int linear(vector<int> arr){
    int ans=0;
 for(int i=1;i<=arr.size();i++){
    if(arr[i]!=arr[i+1] &&  arr[i-1]!=arr[i]){
       ans = arr[i];
    }
 }
 return ans;
}

int binary(vector<int> arr1,int target){
   int n = arr1.size();
   int start = 0;
   int end = n-1;
   while(start <= end){
      int mid = start + (end - start)/2;
      if(arr1[mid] == target){
         return mid;
      }
      if(arr1[mid] < target){
         start = mid+1;
      } else{
         end = mid-1;
      }
   }
   return -1;
}
int binaryrecrsive(vector<int> arr1,int start, int end, int target){
  
    while(start <= end){
      int mid = start + (end - start)/2;
      if(arr1[mid] == target){
         return mid;
      }
      if(arr1[mid] > target){
        return binaryrecrsive(arr1,start,mid-1,target);
      } else{
        return binaryrecrsive(arr1,mid+1,end,target);
      }
   }
   return -1;
}

int main(){
    vector<int> arr ={1,1,2,3,3,4,4,8,8};
    cout << linear(arr) << endl;

    vector<int> arr1 ={ 0,1,2,3,4,5 };
    int target = 4;
    cout << binary(arr1,target) << endl;
    int starts = 0;
    int n = arr1.size();
    int ends = n-1;
  

    cout << binaryrecrsive( arr1,starts, ends, target) << endl;
    return 0;
}