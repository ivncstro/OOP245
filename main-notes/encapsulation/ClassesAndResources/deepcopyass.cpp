#include <iostream>
#include <cstring> // For memset (to initialize arrays)

class Image {
    int* pixels; // Pointer to dynamic memory for pixel data
    int size;    // Number of pixels

public:
    // Constructor to allocate memory for pixels
    Image(int size) : size(size) {
        pixels = new int[size];
        std::memset(pixels, 0, sizeof(int) * size); // Initialize all pixels to 0
        std::cout << "Image of size " << size << " created.\n";
    }

    // Copy constructor for deep copying
    Image(const Image& other) : size(other.size) {
        pixels = new int[size]; // Allocate new memory
        for (int i = 0; i < size; ++i) {
            pixels[i] = other.pixels[i]; // Copy pixel data
        }
        std::cout << "Image copied (deep copy).\n";
    }

    // Copy assignment operator for deep assignment
    Image& operator=(const Image& other) {
        if (this != &other) { // Self-assignment check
            delete[] pixels; // Free existing resource
            size = other.size;
            pixels = new int[size]; // Allocate new memory
            for (int i = 0; i < size; ++i) {
                pixels[i] = other.pixels[i]; // Copy pixel data
            }
            std::cout << "Image assigned (deep copy).\n";
        }
        return *this;
    }

    // Destructor to free the allocated memory
    ~Image() {
        delete[] pixels;
        std::cout << "Image of size " << size << " destroyed.\n";
    }

    // Method to set a pixel value
    void setPixel(int index, int value) {
        if (index >= 0 && index < size) {
            pixels[index] = value;
        }
    }

    // Method to print pixel values
    void printPixels() const {
        std::cout << "Pixels: ";
        for (int i = 0; i < size; ++i) {
            std::cout << pixels[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    // Create an Image object
    Image img1(5); // Image with 5 pixels
    img1.setPixel(0, 255); // Set the first pixel to 255
    img1.setPixel(1, 128); // Set the second pixel to 128
    std::cout << "Image 1:\n";
    img1.printPixels();

    // Copy img1 to img2 using the copy constructor
    Image img2 = img1; 
    std::cout << "Image 2 (after copying from Image 1):\n";
    img2.printPixels();

    // Modify img2 and observe that img1 remains unchanged
    img2.setPixel(0, 64); // Change the first pixel of img2
    std::cout << "Image 2 (after modification):\n";
    img2.printPixels();

    std::cout << "Image 1 (should remain unchanged):\n";
    img1.printPixels();

    // Use the assignment operator to copy img2 into img3
    Image img3(3); // Create an Image with a different size
    img3 = img2;   // Assign img2 to img3 (deep assignment)
    std::cout << "Image 3 (after assignment from Image 2):\n";
    img3.printPixels();

    // Modify img3 and observe that img2 remains unchanged
    img3.setPixel(1, 32); // Change the second pixel of img3
    std::cout << "Image 3 (after modification):\n";
    img3.printPixels();

    std::cout << "Image 2 (should remain unchanged):\n";
    img2.printPixels();

    return 0;
}
