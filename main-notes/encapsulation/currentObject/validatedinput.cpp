#include <iostream>

**********************************************************************************************************
// To copy the values of the instance variables of one object into those of the current object, 
// we dereference the keyword and use *this as the left operand in an assignment expression:
// *this

// Let us introduce a member function to our Student class called read() that:

// - Extracts data from standard input
// - Stores that data in a temporary Student object
// - Copies the temporary object to the current object only if the temporary object is not empty
// - Leaves the current object unchanged if the temporary object is empty

// To avoid duplicating validation logic, we:
// - Construct a local Student object passing the input data to the three-argument constructor
// - Let the internal logic determine whether to accept the data or place the object in a safe empty state
// - Assign the local object to the current object if the temporary object accepted the data
// ********************************************************************************************************
#if 0
void Student::read() {

    int no;          // will hold the student number
    int ng;          // will hold the number of grades
    float grade[NG]; // will hold the grades

    cout << "Enter student number : ";
    cin >> no;
    cout << "Enter number of grades : ";
    cin >> ng;
    if (ng > NG) ng = NG;
    for (int i = 0; i < ng; i++) {
        cout << "Enter student grade : ";
        cin >> grade[i];
    }

    // construct the temporary object
    Student temp(no, grade, ng);
    // if data is valid, the student number is non-zero
    if (temp.no != 0)
        // copy the temporary object into the current object
        *this = temp;
}
#endif

