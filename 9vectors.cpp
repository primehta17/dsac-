//array like  //also have indices
//dyanmic size

//STL =>(Standard template library)
//STL Container => vector, queue, stack, set

// => in array if we want to store more than its size because of its fixed size it is not possible
// => that is why we use vector for dyamic size
// => it resize (it changes size)


// Vector Syntax

// vector<int> vec;
// vector<int> vec ={1,2,3}
// vector<int> vec(3,0)

// for include this we use #include <bits/c++.h> or #include <vector> from std library

// Vector Functions (for different operations)
// => size
// => push_back //it added in last
// => pop_back //it deleted in last
// => front //front value
// => back //back value
// => at //value at that index
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec; //value 0
    // cout << vec[0]; //segmentation fault  ./a.out => it is like we want to access which is not accessible because it is not present in memory

    vector<int> vect  = {1,2,3}; //just like array it is storing in memeory
    cout << vect[0]<< endl;
    cout << vect[1]<< endl;
    cout << vect[2]<< endl;
    cout << vect[3]<< endl;
        // 1
        // 2
        // 3
        // 0
    vector<int> vecr(3,22); //3 is size and 22 is value of each indices
    cout << vecr[0] << endl;
    cout << vecr[1] << endl;
    cout << vecr[2] << endl;
    cout << vecr[3] << endl;
        // 22
        // 22
        // 22
        // 0

        //iterator of vectors foreach loops
        //datatype is same as vector datatype
        //in i it is the value which is stores in this particular index
        
        for(int i : vecr){
            cout << "foreach loop in vector value of i => " <<  i << endl;
        }


        vector<char> vecto ={'a','b','c','d','e'};
       
        for(char val : vecto){
            cout << "foreach loop in vector character value value => "<< val << endl;
        }

        //functions
        vecto.push_back('q');
        vecto.push_back('p');
        vecto.push_back('s');
        vecto.pop_back();//p
        vecto.pop_back();//s

         cout << "vector.front => " << vecto.front() << endl;
        cout << "vector.back => " << vecto.back() << endl;

        cout << "size of vector => " << vecto.size() << endl;
        cout << "vector at=> " << vecto.at(0) << endl;



        ////vector capacity
        vector<int> veet;
        veet.push_back(1);
        veet.push_back(2);
        veet.push_back(3);
        cout << "vector size => " << veet.size() << endl;//3
        cout << "vector capacity => " << veet.capacity() << endl;//4
    return 0;
}




// g++ -std=c++11 9vectors.cpp && ./a.out we are using c++ 11 standard (flag)


