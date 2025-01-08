
#include <iostream>
using namespace std;

int main(){
  int num=5;
//   for(int i=num;i>0;i--){
//         cout << i;
//   }
//   cout << endl;
//    for(int i=num;i>0;i--){
//         cout << i << endl;
//   }

    // for(int i=0;i<num;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout << j;
    //     }
    //     cout<< endl;
    // }
    // 1
    // 21
    // 321
    // 4321
    // 54321
char ch='a';
    for(int i=0;i < num; i++){
        for(int j = i;j>=0;j--){
           cout << static_cast<char>(ch + j);
            
        }
        cout << endl;
    }
    return 0;
}