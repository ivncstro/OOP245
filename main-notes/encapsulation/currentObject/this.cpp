#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Setter function (explicit parameters: n, a)
    void setDetails(string name, int age) {
        this->name = name; // Implicit: `this->name` refers to the current object's `name`
        this->age = age;  // Implicit: `this->age` refers to the current object's `age`
    }
    //this-> is important when parameter is the same as the member variable name

    // Getter function (no explicit parameters)
    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person;

    // Explicitly passing values to set the details
    person.setDetails("Alice", 25);

    // Implicitly accessing the instance variables to display the details
    person.displayDetails();

    return 0;
}
