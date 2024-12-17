// Overloaded Functions
// overload.cpp
#include <iostream>
using namespace std;

// prototypes
void display(int x);
void display(const int* x, int n);

int main() {
    auto x = 20;
    int a[] = {10, 20, 30, 40};
    display(x);
    display(a, 4);
}

// function definitions
//
void display(int x) {
    cout << x << endl;
}

void display(const int* x, int n) {
    for (int i = 0; i < n; i++)
        cout << x[i] << ' ';
    cout << endl;
}