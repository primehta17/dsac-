//array like  //also have indices
//dyanmic size //it increase like 1,2,4,8...(double every time)

//STL =>(Standard template library)
//STL Container => vector, queue, stack, set

// => in array if we want to store more than its size because of its fixed size it is not possible
// => that is why we use vector for dyamic size
// => it resize (it changes size)


// Vector Syntax(initialize)

// vector<int> vec;
// vector<int> vec ={1,2,3}
// vector<int> vec(3,0) // 3 times 0 //dyamic programming-tabulation DP[][]
// vector<int> vec2(vec1); it copies vec1 values

// for include this we use #include <bits/c++.h> or #include <vector> from std library

// Vector Functions (for different operations) (O(1 time complexity)
// => size & capacity //length & spaces in memory
// => push_back //it added in last(same type)
// => pop_back //it deleted in last
// => front //front value
// => back //back value
// => at or []//value at that index
// => emplace_back //different emplacepair(any type) push

//costly function O(n) complexity //size changes but capacity is same
// => erase //it erase at particular point
// => insert //insert value at particular index 
//(this function deletes or check) O(1)
// => clear //it clear all the values of that vector
// => empty // check vector is empty //0 or 1

//Iterators 
// => vec.begin //Like pointers derefrencing (it give the value of the first value)
// => vec.end //it gives (n+1) value basically garbage value

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
        vector<int> vec1 = {1,2,3,4,5};
        vector<int> vec2(vec1);
        cout << "value of vec2 which is same as vec1 =>" <<endl;
        for(int val : vec2){
            cout  << val << " ";
        }
        cout << endl;


        vector<char> vecto ={'a','b','c','d','e'};
       
        for(char val : vecto){
            cout << "foreach loop in vector character value value => "<< val << endl;
        }

        //functions
        vecto.push_back('q');
        vecto.push_back('p');
        vecto.push_back('s');
        vecto.emplace_back('t');
        vecto.pop_back();//t
        vecto.pop_back();//s
    

        cout << "vector.front => " << vecto.front() << endl;
        cout << "vector.back => " << vecto.back() << endl;

        cout << "size of vector => " << vecto.size() << endl;
        cout << "vector at=> " << vecto.at(0) << endl;
        cout << "vector at=> " << vecto[0] << endl;



        ////vector capacity
        vector<int> veet;
        veet.push_back(1);
        veet.push_back(2);
        veet.push_back(3);
        cout << "vector size => " << veet.size() << endl;//3
        cout << "vector capacity => " << veet.capacity() << endl;//4
    
    vector<int> vecq = {1,2,3,4,5,6,7};

    //O(n)
    vecq.erase(vecq.begin()); //2 3 4 5
    vecq.erase(vecq.begin()+2); //ITERATOR //1 2 4 5
    vecq.erase(vecq.begin()+1, vecq.begin()+3);//it deleted till 1 to 2 (we have to write one less in end)
    //1 4 5 

    vecq.insert(vecq.begin()+2,100); //index where we want to insert the 100 
    

    vecq.clear(); //it clears all the values of vector

    cout << "vector size => " << vecq.size() << endl;
    cout << "vector capacity => " << vecq.capacity() << endl;
    cout << "vector is empty or not => " << vecq.empty() << endl;
    for(int val : vecq){
        cout << val << " ";
    }
    cout << "Erase/insert function erase/insert at that point or index" << endl;
    
vector<int> veei = {9,8,7,6};

cout << "iterator begin first index=> " << *(veei.begin()) << endl;
// 9
cout << "iterator end gives last + 1 index => " << *(veei.end()-1) << endl;
// 6

    return 0;
}


//

// g++ -std=c++11 9vectors.cpp && ./a.out we are using c++ 11 standard (flag)


