// Overloaded Constructor
// overload.cpp

#include <iostream>
using namespace std;
const int NG = 20;

class Student {
    int no;
    float grade[NG];
    int ng;
public:
    Student();
    Student(int, const float*, int);
    ~Student();
    void set(int, const float*, int);
    void display() const;
};

Student::Student() {
    cout << "In constructor" << endl;
    no = 0;
    ng = 0;
}

Student::Student(int sn, const float* g, int ng_) {
    cout << "In 3-arg constructor" << endl;
    set(sn, g, ng_);
}

Student::~Student() {
cout << "In destructor for " << no
        << endl;
}

void Student::set(int sn, const float* g, int ng_) {
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
        no = 0;
        ng = 0;
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

int main () {
    float gh[] = {89.4f, 67.8f, 45.5f};
    float gj[] = {83.4f, 77.8f, 55.5f};
    Student harry(1234, gh, 3), josee(1235, gj, 3);
    harry.display();
    josee.display();
}