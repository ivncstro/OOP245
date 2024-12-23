#include <iostream>

class DynamicArray {
private:
    int* m_array; // Pointer to the dynamic array
    size_t m_size; // Current size of the array

public:
    // Constructor to initialize the array
    DynamicArray(size_t size) : m_size(size) {
        m_size = size;
        m_array = new int[m_size];
        std::cout << "DynamicArray created with size " << m_size << std::endl;
    }

    // Destructor to free the memory
    ~DynamicArray() {
        delete[] m_array;
        std::cout << "DynamicArray destroyed." << std::endl;
    }

    // Function to set a value at a specific index
    void setValue(size_t index, int value) {
        if (index < m_size) {
            m_array[index] = value;
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
        }
    }

    // Function to get a value at a specific index
    int getValue(size_t index) const {
        if (index < m_size) {
            return m_array[index];
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
            return -1;
        }
    }

    // Function to display the contents of the array
    void display() const {
        for (size_t i = 0; i < m_size; ++i) {
            std::cout << m_array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DynamicArray arr(5); // Create an array of size 5

    // Set values
    std::cout << "Valid Output: " << std::endl;
    arr.display();
    arr.setValue(0, 10);
    arr.setValue(1, 20);
    arr.setValue(2, 30);
    arr.setValue(3, 40);
    arr.setValue(4, 50);
    arr.display();
    std::cout << "\n";

    // Invalid
    std::cout << "Invalid Output: (6, 60) " << std::endl;
    arr.setValue(6, 60);

    // Display values
    arr.display();

    return 0;
}
