#include <iostream>
using namespace std;

int main() {
    int x[] = {10};      // normal integer variable 'x'
    int* ptr = x;   // pointer 'ptr' that stores the address of 'x'

    cout << "Value of x: " << *x << endl;          // Direct value of 'x'
    cout << "Address of x: " << &x[0] << endl;       // Memory address of 'x'
    cout << "Pointer ptr points to address: " << ptr << endl;  // Address stored in 'ptr'
    cout << "Value at the address pointed to by ptr: " << *ptr << endl;  // Value at 'ptr'
    
    return 0;
}
