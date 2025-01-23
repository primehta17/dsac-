//Iterators (derefereing * like pointers)
//=>begin()

//Reverse Iterators
//=>rbegin()=>last index
//rend() =>first+1 index
#include <iostream>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator it;//we can write "auto" too

    for(it=vec.begin();it != vec.end(); it++){
        cout << *(it) << " ";//1 2 3 4 5 
    }
     for(auto it=vec.begin();it != vec.end(); it++){
        cout << *(it) << " ";//1 2 3 4 5 
    }

    cout << endl;
  vector<int>::reverse_iterator iti; //we also write this "auto" then c++ get to know explicit
     for(iti=vec.rbegin();iti != vec.rend(); iti++){
        cout << *(iti) << " ";//5 4 3 2 1 
    }
     for(auto iti=vec.rbegin();iti != vec.rend(); iti++){
        cout << *(iti) << " ";//5 4 3 2 1 
    }
     cout << endl;
    return 0;
}