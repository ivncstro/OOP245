#include <iostream>
#include <fstream>

int main() {

    int i;

    std::ifstream fin("test.txt");
    if (fin.is_open()) {
        while (fin) {
            fin >> i;
            if (fin) {
                std::cout << i << ' ';
            } else {
                std::cout << "\n**Bad Input**\n";
            }
        }
    }
}



