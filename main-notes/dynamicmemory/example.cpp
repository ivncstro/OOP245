// Dynamic Memory Allocation
// dynamic.cpp

#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[20];
    int no;
    float grade[2];
};

int main( ) {
    int n;
    Student* student = nullptr;

    cout << "Enter the number of students : ";
    cin >> n;
    student = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "Student Name: ";
        cin >> student[i].name;
        cin.ignore();
        cout << "Student Number: ";
        cin  >> student[i].no;
        cout << "Student Grade 1: ";
        cin  >> student[i].grade[0];
        cout << "Student Grade 2: ";
        cin  >> student[i].grade[1];
    }

    for (int i = 0; i < n; i++) {
        cout << student[i].name << ": " << student[i].no << " "
        << student[i].grade[0] << ", " << student[i].grade[1]
        << '\n' << endl;
    }

    delete [] student;
    student = nullptr;
}