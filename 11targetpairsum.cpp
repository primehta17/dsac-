//Return pair in sorted array with target sum.

#include <iostream>
#include <vector>
using namespace std;

//function  
//brute-force apporach
    vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
      int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
          
        }
        return ans;
    }
///two-pointer approach
// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//     int n=nums.size();
//     for(int i=0, j=n-1;i<j;i++,j--){
//         if(nums[i]+nums[j]==target){
//              ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//         }
//     }
//     return ans;
// }


//PAIRSUM => return pair in sorted array with target sum
vector<int> pairSum2(vector<int> nums, int target){
    vector<int> answer;
    int n=nums.size();//for length of array
    int i=0, j=n-1;//start and end //2 pointer
    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum>target){
            j--;
        }else if(pairSum<target){
            i++;
        }else{
            answer.push_back(i);
            answer.push_back(j);
            return answer;
        }
    }
    return answer;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target=9;
    vector<int> ans = pairSum(nums,target);
    cout << ans[0] << ", " << ans[1] <<endl;

    vector<int> answer = pairSum2(nums,target); 
    cout << answer[0] << ", " << answer[1] <<endl;



     return 0;   
}

//g++ -std=c++11 target.cpp && ./a.out