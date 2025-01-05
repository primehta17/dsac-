//waf to calculate sum & product of all numbers in an array
//waf to swap the max & min number of an array.
//waf to print all the unique values in an array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sum = 0,product=1; int min = INT_MIN;int max = INT_MAX;
 vector<int> nums = {2,7,11,15};
 
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        product *= nums[i];
      
        if(nums[i]>min){
           min=nums[i];
        }

        if(nums[i]<max){
            max=nums[i];
        }
    }
int seen={},duplicate =[];
    for(int j=0;j<nums.size();j++){
        int abc=nums[j];
        if(seen[abc]==undefined){
            seen[abc]=1;
        }else{
            seen[abc]++;
            duplicate.push_back(abc);
        }
    }
    cout << duplicate << endl;

      cout << "sum = " << sum <<endl;
      cout << "product = " << product <<endl;
      cout << "maximum = " << min <<endl;
      cout << "minimum = " << max <<endl;

}