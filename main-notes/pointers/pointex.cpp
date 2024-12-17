// Swapping values by address
// swap1.cpp

#include <iostream>
using namespace std;


void increment(int& x) {  // Reference passed
    x++;  // Modifies the original variable directly
}

int main() {
    int a = 5;
    increment(a);  // Pass by reference
    cout << a << endl;  // Output: 6 (a is modified)
}
