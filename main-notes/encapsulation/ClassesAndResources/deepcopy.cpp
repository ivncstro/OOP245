#include <iostream>
#include <cstring> // For strcpy and strlen

class Student {
private:
    char* name;       // Instance resource variable: dynamic memory for name
    int* grades;      // Instance resource variable: dynamic memory for grades
    int gradeCount;   // Non-instance variable: number of grades

public:
    // Constructor to initialize the Student
    Student(const char* studentName, const int* studentGrades, int count) {
        // Allocate and copy the name
        name = new char[strlen(studentName) + 1];
        strcpy(name, studentName);

        // Allocate and copy the grades
        gradeCount = count;
        grades = new int[gradeCount];
        for (int i = 0; i < gradeCount; ++i) {
            grades[i] = studentGrades[i];
        }
    }

    // Copy constructor for deep copying
    Student(const Student& other) {
        // Allocate and copy the name
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        // Allocate and copy the grades
        gradeCount = other.gradeCount;
        grades = new int[gradeCount];
        for (int i = 0; i < gradeCount; ++i) {
            grades[i] = other.grades[i];
        }
    }

    // Destructor to clean up dynamically allocated memory
    ~Student() {
        delete[] name;   // Free memory for the name
        delete[] grades; // Free memory for the grades
    }

    // Display the student information
    void display() const {
        std::cout << "Name: " << name << "\nGrades: ";
        for (int i = 0; i < gradeCount; ++i) {
            std::cout << grades[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Original student data
    const char* studentName = "Alice";
    int studentGrades[] = {85, 90, 78};
    int gradeCount = 3;

    // Create an original Student object
    Student original(studentName, studentGrades, gradeCount);
    std::cout << "Original Student:\n";
    original.display();

    // Create a copy using the copy constructor
    Student copy = original;
    std::cout << "\nCopied Student:\n";
    copy.display();

    return 0;
}
