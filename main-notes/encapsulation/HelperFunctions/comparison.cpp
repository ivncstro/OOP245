// Student.h

const int NG = 20;

class Student {
    int no;
    float grade[NG];
    int ng;
public:
    Student();
    Student(int);
    Student(int, const float*, int);
    void display() const;
    int getStudentNo() const { return no; }
    int getNoGrades() const { return ng; }
    float getGrade(int i) const { return i < ng ? grade[i] : 0.0f; }
};

bool areIdentical(const Student&, const Student&);

// Student.cpp

#include <iostream>
using namespace std;
// #include "Student.h"

Student::Student() {
    no = 0;
    ng = 0;
}

Student::Student(int n) {
    *this = Student(n, nullptr, 0);
}

Student::Student(int sn, const float* g, int ng_) {
    bool valid = sn > 0 && g != nullptr && ng_ >= 0;
    if (valid)
        for (int i = 0; i < ng_ && valid; i++)
            valid = g[i] >= 0.0f && g[i] <= 100.0f;

    if (valid) {
        // accept the client's data
        no = sn;
        ng = ng_ < NG ? ng_ : NG;
        for (int i = 0; i < ng; i++)
            grade[i] = g[i];
    } else {
        *this = Student();
    }
}

void Student::display() const {
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

bool areIdentical(const Student& lhs, const Student& rhs) {
    bool same = lhs.getStudentNo() == rhs.getStudentNo() &&
    lhs.getNoGrades() == rhs.getNoGrades();
    for (int i = 0; i < lhs.getNoGrades() && same; i++)
        same = lhs.getGrade(i) == rhs.getGrade(i);
    return same;
}

// Compare Objects
// compare.cpp

#include <iostream>
// #include "Student.h"
using namespace std;

int main () {
    float gh[] = {89.4f, 67.8f, 45.5f};
    Student harry(1234, gh, 3), harry_(1234, gh, 3);
    if (areIdentical(harry, harry_))
        cout << "are identical" << endl;
    else
        cout << "are different" << endl;
}


// Student.h

const int NG = 20;

class Student {
    int no;
    float grade[NG];
    int ng;
public:
    Student();
    Student(int);
    Student(int, const float*, int);
    void display() const;
    int getStudentNo() const { return no; }
    int getNoGrades() const { return ng; }
    float getGrade(int i) const { return i < ng ? grade[i] : 0.0f; }
};

bool operator==(const Student&, const Student&);

bool operator==(const Student& lhs, const Student& rhs) {
    bool same = lhs.getStudentNo() == rhs.getStudentNo() &&
    lhs.getNoGrades() == rhs.getNoGrades();
    for (int i = 0; i < lhs.getNoGrades() && same; i++)
        same = lhs.getGrade(i) == rhs.getGrade(i);
    return same;
}