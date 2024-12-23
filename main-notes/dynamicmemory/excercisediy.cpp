#include <iostream>
#include <string>

class Student {
private: 
    int* _studentNum; // student numbers
    int* _grades; // grades
    int _size; // array size
public: 
    Student(int size) : _size(size) {
        _studentNum = new int[_size]; // set student number array size to _size
        _grades = new int[_size]; // set grades array to _size
        
        std::cout << "New array size created for student number and grade" << _size << std::endl; 
    }

    ~Student() {
        delete[] _studentNum; //deallocate values for student num
        _studentNum = nullptr;
        delete[] _grades; // deallocate values for grades
        _grades = nullptr;

        std::cout << "Array deallocated and deleted." << std::endl; //for my debug, explicitly show deallocation
    }

    void setVal(int index, int studentNum, int grade) {
        if (index < _size) { // if index is in bounds of the index size continue
            _studentNum[index] = studentNum;
            _grades[index] = grade;
        }
        else { // if not, show invalid message
            std::cout << "Index " << index << "is more than the index size" << std::endl;
        }
    }

    void display() const {
        std::cout << "Students Created: " << std::endl;

        for (int i = 0; i < _size; i++) {
            std::cout << "Student " << i + 1 << ": " << std::endl;
            std::cout << "#"  << _studentNum[i] << " Grade/s: " << _grades[i] << std::endl;
        }
    }
};

int main() {

    int numStudents;

    std::cout << "Enter number of Students: ";
    std::cin >> numStudents;

    Student student(numStudents);

    // set values for each student
    for (int i = 0; i < numStudents; i++) {
        int stdnum;
        int grade;

        std::cout << "Number for Student " << i + 1 << ": ";
        std::cin >> stdnum;

        std::cout << "Grade for Student " << i + 1 << ": ";
        std::cin >> grade;

        student.setVal(i, stdnum, grade);
    }

    // display
    student.display();
    student.~Student();
    return 0;
}