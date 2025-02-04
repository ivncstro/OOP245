#include <iostream>
#include <cstring> // For std::strcpy, std::strlen

class SimpleString {
    char* str; // Dynamically allocated string

public:
    // 1. Default Constructor
    SimpleString() : str(nullptr) {
        // Initialize str to nullptr
    }

    // 2. Parameterized Constructor
    SimpleString(const char* s) {
        // Allocate memory for str and copy s into it
        if (s) {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
        else {
            str = nullptr;
        }
    }

    // 3. Copy Constructor
    SimpleString(const SimpleString& other) {
        // Implement the copy constructor (allocate memory and copy other's str)
        // Deep Copy
        if (other.str) {
            str = new char[std::strlen(other.str) + 1 ];
            std::strcpy(str, other.str);
        }
        else {
            str = nullptr;
        }
    }

    // 4. Copy Assignment Operator
    SimpleString& operator=(const SimpleString& other) {
        // Implement the copy assignment operator
        // Check for self-assignment, deallocate existing memory, then copy other's str
        if (this != &other) {
            delete [] str;
        
            if (other.str) {
                str = new char[std::strlen(other.str) + 1 ];
                std::strcpy(str, other.str);
            }
            else {
                str = nullptr;
            }
        }
        return *this;
    }

    // 5. Destructor
    ~SimpleString() {
        // Implement the destructor (release allocated memory)
        delete [] str;
    }

    // 6. Print Method
    void print() const {
        // Print the string (if str is not null)
        if (str) {
            std::cout << str << std::endl;
        } else {
            std::cout << "Empty string" << std::endl;
        }
    }
};

int main() {
    // Create a SimpleString object using the parameterized constructor
    SimpleString s1("Hello, World!");

    // Use the copy constructor to create a new object
    SimpleString s2 = s1;

    // Print both objects
    std::cout << "s1: ";
    s1.print();
    std::cout << "s2: ";
    s2.print();

    // Create another object and use the assignment operator
    SimpleString s3;
    s3 = s1;

    // Print the new object
    std::cout << "s3: ";
    s3.print();

    return 0; // All destructors should be called automatically here
}
