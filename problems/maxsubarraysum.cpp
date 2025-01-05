///subarray =>any continous part of array

#include <iostream>
using namespace std;

int main(){
   int array[5]={1,2,3,4,5};
    for(int start=0;start<5;start++){
        for(int end=start;end<5;end++){
            for(int result=start;result<=end;result++){
                cout << array[result];
            }
            cout << " ";
        }
        cout << endl;
    }
    // all subarray print start from 1,2,3,4,5
        // 1 12 123 1234 12345 
        // 2 23 234 2345 
        // 3 34 345 
        // 4 45 
        // 5 
    


    int arr[7]={3,-4,5,4,-1,7,-8};

    //brute force approach
    int  maximumSum=INT_MIN;
     for(int start=0;start<7;start++){
        int currentSum=0;
        for(int end=start;end<7;end++){
           currentSum+=arr[end];
           maximumSum = max(currentSum,maximumSum);
        }
        
    }
  cout << "maximum sum = "<< maximumSum <<endl;

    int sum=0,maxsum=INT_MIN;

    // kadane algorithm (most optimized)// dyanmaic programming
    //if we add negative value instead of reset to 0 
    //maxsum line is above if condition because if maybe it is 
    //like {-1,-2,-3,-4-5};//edge cases or corner cases
    for(int i=0;i<7;i++){
        sum+=arr[i];
        maxsum = max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
    cout << "kadane algorithm = "<< maxsum << endl;
}