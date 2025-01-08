
#include <iostream>
using namespace std;

int main(){
    int num=3;int h=1;//this should be outside for continue increament
    //h='A' for char value
    for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
        cout << h++ << " ";
    }
    cout << endl;
   }

 char chh= 'A';
   for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
        cout << chh << " ";
        chh++;
    }
    cout << endl;
   }
   
    return 0;
}