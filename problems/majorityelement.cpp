#include <iostream>
#include <vector>
using namespace std;
//brute - force
// int main(){
//     int nums[3] ={3,2,3};
//    int n = sizeof(nums) / sizeof(nums[0]);

//    for (int i = 0; i < n; i++) { // Iterate over array indices
//         int val = nums[i];
//         int frequency = 0;

//         for (int j = 0; j < n; j++) { // Count occurrences
//             if (nums[j] == val) {
//                 frequency++;
//             }
//         }
//         if(frequency > n/2){
//              cout << val << endl;
//             return 0;
//         }
//     }

//  cout << -1 << endl;
//     return -1;
// }


//optimize to (O(n log n)) by sorting
//    int main(){
//     vector<int> nums = {3,2,3,2,2};
//     int n=nums.size();
//     //sort
//     sort(nums.begin(),nums.end());
//     //freq count
//     int freq = 1, ans = nums[0];
//     for(int i=1;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }else{
//             freq=1;
//             ans = nums[i];
//         }
//         if(freq > n/2){
//             cout << ans << endl;
//             return ans;
//         }
//     }
//       cout << ans << endl;
//     return ans;
// }

//boyce-moore voting algorithm (most optimized)

int main(){
    vector<int> nums = {3,2,3,2,2};
    int n=nums.size();
    int freq=0, ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }

    }
int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
   if (count > n / 2) {
        cout << ans << endl;
        return ans;
    } else {
        cout << -1 << endl;
        return -1;
    }
}