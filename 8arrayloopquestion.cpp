// find smalles/largest in array
#include <iostream>
using namespace std;

int main(){
    int num[5] ={23,34,45,-21,56};
    int size =5;
    int smallest =INT_MAX;//positive infinity 
    int largest =INT_MIN;
    int sum,product;
    for(int i=0;i<size;i++){
        if(num[i] < smallest){
            smallest = i;
        }
        // smallest = min(num[i],smallest);//min method to check minimum value;
        //  if(num[i] > largest){
        //     largest = num[i];
        // }
        largest = max(num[i],largest);
        // any one can use in both methods if or min/max
        sum += num[i];
        product *= num[i];//i=1
    }
    cout << " smallest index"<< smallest <<endl;
    cout << " largest value "<< largest <<endl;
    cout << " sum value "<< sum <<endl;
    cout << " product value "<< product <<endl; 
    return 0;
}
