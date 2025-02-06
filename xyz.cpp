#include <iostream>
using namespace std;

int main(){
     char k='A';
    for(int i=1;i<=4;i++){
       
        for(int j=i;j<=4;j++){
           cout << " ";
        }
         for(int j=1;j<=i;j++){
           cout << k++ << " ";
        }
      cout << endl;
    }
    return 0;
}