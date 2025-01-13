#include <iostream>
#include <vector>
using namespace std;

vector<int> productSelf(vector<int>& array){
    int n = array.size();
    vector<int> ans(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j){
               ans[i] *= array[j];
            }
        } 
    }
    return ans;
}
int main(){
    vector<int> array = {1,2,3,4};
    vector<int> result = productSelf(array);

    for(int val : result){
        cout << val << " ";
    }
     cout << endl;
    return 0;
   
}