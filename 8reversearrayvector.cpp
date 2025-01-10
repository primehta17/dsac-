#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArr(const vector<int>& arr) {
    vector<int> reversed; // Create a vector to store reversed elements

    // Reverse iteration using a for loop
    for (int i = arr.size() - 1; i >= 0; i--) {
        reversed.push_back(arr[i]); // Add elements from end of `arr` to `reversed`
    }

    return reversed;
}

int main() {
    vector<int> arr = {2, 33, 24, 15, 10}; // Input vector
    vector<int> reversed = reverseArr(arr); // Get the reversed vector

    // Print the reversed vector
    cout << "Reversed Vector: ";
    for (int elem : reversed) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}

//g++ -std=c++11 9reversearray2pointer.cpp && ./a.out
