//List => Doublely linkedlist //push from back,front //pop from back,front
//list<int> I= {1,2,3};
//push_back & push_front
//emplace_back & emplace_front
//pop_back & pop_front

//size, erase, clear, begin, end, rbegin, rend, inser, front, back

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){ 
    list<int> l;
     list<int> l={10,20,30}; 
     //initialized like array only difference is we can access both front and back

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.emplace_front(5);
    l.emplace_back(6);
    l.pop_back();
    l.pop_front();

    for(int val :l){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}



