#include <iostream>

int main () {

    char password[50];
    char input[50];

    std::cout << "Input Password: ";
    std::cin.getline(password, 50);
    std::cin.clear();

    std::cout << "Re-Input Password: ";
    std::cin.getline(input, 50);
    std::cin.clear();

    int counter = 0;
    int valid = 1;

   
    for (int i = 0; i < strlen(password); i++) {
        if (password[i] != input[i]) {
            counter++;
        }
        
    }

    switch (counter) {
        case 0:
            std::cout << "Passwords Match!" << std::endl;
            break;
        case 1:
            std::cout << "Close, Password mismatch!" << std::endl;
            break;
        default:
            std::cout << "Error, Password does not match!" << std::endl;
            break;
    }

    return 0;

}