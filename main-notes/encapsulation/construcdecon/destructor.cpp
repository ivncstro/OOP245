// Constructors
// constructors.cpp

#include <iostream>
#include <cstring>
using namespace std;
const int NG = 20;

class Student {
    int no; // var for int
    float grade[NG]; // float for grade with array size of NG = 20
    int ng;
public:
    Student(); // constructor definition
    ~Student(); // destructor
    void set(int, const float*, int); // set member function
    void display() const; // display member function
};

// initializes the data members
// implementing a constructor
Student::Student() {
    cout << "In constructor" << endl;
    no = 0;
    ng = 0;
    //definition
}

void Student::set(int sn, const float* g, int ng_) { // set function implementation
    bool valid = sn > 0 && g != nullptr && ng_ >= 0; // set 1 or 0 depeding if conditions met
    
    // if conditions met run if loop
    if (valid)
        for (int i = 0; i < ng_ && valid; i++) // for loop as long as i is less than ng_ parameter and valid
            valid = g[i] >= 0.0f && g[i] <= 100.0f; // checks validation until it empties out or invalid

    if (valid) { // if all data is valid
        // accept the client's data
        no = sn; // set no to sn
        ng = ng_ < NG ? ng_ : NG; // set ng using ternary expression depending if ng is less than or greater than NG (global const var)
        for (int i = 0; i < ng; i++)
            grade[i] = g[i]; // loop to set grade[] to g[] (parameter)
    } else { // if invalid set to safe state 0 or nullptr
        no = 0;
        ng = 0;
    }
}

void Student::display() const { // display function implementation
    if (no > 0) {
        cout << no << ":\n";
        cout.setf(ios::fixed);
        cout.precision(2);
        for (int i = 0; i < ng; i++) {
            cout.width(6);
            cout << grade[i] << endl;
        }
        cout.unsetf(ios::fixed);
        cout.precision(6);
    } else {
        cout << "no data available" << endl;
    }
}

Student::~Student() {
    cout << "In destructor for: " << no << endl;
}

int main () { 
    Student harry, josee; // created two object class for class Student 
    float gh[] = {89.4f, 67.8f, 45.5f}; // grades to be assigned 1
    float gj[] = {83.4f, 77.8f, 55.5f}; // grades to be assigned 2
    harry.set(1234, gh, 3); // set object harry with info and grades
    josee.set(1235, gj, 3); // set object josee with info and grades
    harry.display(); 
    josee.display();
}