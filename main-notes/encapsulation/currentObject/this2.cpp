#include <iostream>
using namespace std;

class Example {
    int value; // Instance variable
public:
    Example(int v) : value(v) {}

    void setValue(int v) {
        value = v; // Sets the current object's value
    }

    void display() const {
        cout << "Value: " << value << endl;
    }

    Example& returnThis() {
        return *this; // Return the current object
    }
};

int main() {
    Example obj1(10); // Object 1
    Example obj2(20); // Object 2

    // Using *this through returnThis()
    obj1.returnThis().setValue(30); // Sets obj1's value to 30
    obj2.returnThis().setValue(40); // Sets obj2's value to 40

    // Display values
    obj1.display(); // Output: Value: 30
    obj2.display(); // Output: Value: 40

    return 0;
}
