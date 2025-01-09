#include <iostream>
using namespace std;

int main(){
int num=4;
  char ch='a';
  for(int i=0;i<num;i++){
    cout << ch <<endl;
  }
  for(int i=0;i<num;i++){
    cout << ch++ << " ";
  }
  cout << endl;
 
  for(int i=0;i<num;i++){
   char chv='A';
    for(int j=0;j<num;j++){
        cout << chv << " "; //ascii value of A is 65 and then add 1 (type conversion)
        //  cout << ch++ << " ";
        chv = chv+1;
    }
    cout <<endl;
  }
    return 0;

   
}