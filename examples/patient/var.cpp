#include <iostream>



int main () {

    int num[] = {1, 2, 3, 4, 5};

    int* grade = num;

    for (int i = 0; i < 5; i++) {

    std::cout << num[i] << std::endl;;
    }


    return 0;
}