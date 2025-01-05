//Common Time Complexity

#include <iostream>
using namespace std;
//O(n)

//sum 1 to N
int main(){
//// time complexity->O(1) //constant 
//// in hash table or in hash map it not O(1);
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int ans = n * (n+1)/2;
    // cout << ans << endl;
    //O(n) 
    //good complexity
    // N Factorial
    //sum of number also O(n);
    // most voiting algorithm
    int fact=1, size=4;
    for(int j=1;j<size;j++){
        fact *= j;
    }
    cout << fact << endl;

    for(int i=0;i<=n;i++){
        fib[i] = fib[i-1] +fib[i-2];
    }

    //Kadane Algorithm
    int currSum=0, ans=INT_MIN;
    for(int i=0;i<size;i++){
        currSum += num[i];
        ans = max(currSum, ans);
        currSum = currSum < 0 ? 0 : currSum;
        cout << currSum << endl;
    }


//O(n^2) & O(n^3) //big O of n
   //Merge Sort
   //Selection Sort
   // Bubble Sort
   //
   
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        swap(arr[j],arr[j+1]);
    }
   }
  
    return 0;
} 


