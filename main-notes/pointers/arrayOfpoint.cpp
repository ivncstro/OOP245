 // Array of Pointers
 // array_pointers.cpp

 #include <iostream>
 using namespace std;

 const int N_CHARS = 31; // declare a constant int value for N_CHARS var = 31

 struct Student {
     int no;
     double grade;
     char name[N_CHARS];
 }; // STUDENT info structure

 void enterDetails(Student* s) {
    cout << "Enter Student Number: ";
    cin >> s->no;
    cout << "Enter Student Grade: ";
    cin >> s->grade;
    cout << "Enter Student Name: ";
    cin >> s->name;

 }

 int main() {
     const int NO_STUDENTS = 3; // constant int of var NO_STUDENTS = 3
    Student john, jane , dave;

    //  Student john = {1234, 67.8, "john"}; // student 1
    //  Student jane = {1235, 89.5, "jane"}; // student 2
    //  Student dave = {1236, 78.4, "dave"}; // student 3

     Student* pStudent[NO_STUDENTS]; // declare Student struct pointer - array of pointers
     pStudent[0] = &john; // assign 
     pStudent[1] = &jane;
     pStudent[2] = &dave;

    for (int i = 0; i < NO_STUDENTS; i++) {
        enterDetails(pStudent[i]);
    }

     for (int i = 0; i < NO_STUDENTS; i++) {
         cout << pStudent[i]->no << endl;
         cout << pStudent[i]->grade << endl;
         cout << pStudent[i]->name << endl;
         cout << endl;
     }
 }