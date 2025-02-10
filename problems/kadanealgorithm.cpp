// 53. Maximum Subarray

#include <iostream> 
using namespace std;
int num[5]={1,2,3,4,5};
int main(){
    int sum=0;int size=5;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            sum+=num[i];
        }
    }
    cout << sum;


    int currSum=0, ans=INT_MIN;
    for(int i=0;i<size;i++){
        currSum += num[i];
        ans = max(currSum, ans);
        currSum = currSum < 0 ? 0 : currSum;
        cout << currSum << endl;
    }
    return 0;
}