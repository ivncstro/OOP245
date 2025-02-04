#include <iostream>
#include <fstream>

int main() {
    int i;
    int size = 5;



    std::ofstream f("output.txt");
    if (f.is_open()) {
        f << "File is open" << std::endl;

        for (int i = 0; i < size; i++) {
            f << i << std::endl;   // record 3
        }
    }
}
