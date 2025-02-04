#include <iostream>
#include <string>
#include <array>
#include <vector>

void printArray(std::string items[], int size) {
    std::cout << items << std::endl;
    for (int i = 0; i < size; i++) {

        items[i] = "pie";
        std::cout << items[i] << std::endl;
    }
}

void printSTDArray(std::array<std::string, 5> items) {
    std::cout << &items << std::endl;
    for (int i = 0; i < items.size(); i++) {
        items[i] = "pie2";
        std::cout << items[i] << std::endl;
    }
} 

void printVector (std::vector<std::string> items) {
    std::cout << &items << std::endl;
    for (int i = 0; i < items.size(); i++) {

        items[i] = "pie3";
        std::cout << items[i] << std::endl;
    }
}

int main() 
{
    std::string foods1[5] = {"regular", "honey", "apples", "grapes", "pumpkin"};
    std::array<std::string, 5> foods2 = {"array", "honey", "apples", "grapes", "pumpkin"};
    std::vector<std::string> foods3 = {"vector", "honey", "apples", "grapes", "pumpkin"};
    
    std::cout << foods1 << std::endl;
    printArray(foods1, 5);
    for (auto f : foods1) {
        std::cout << f << std::endl;
    }
    std::cout << std::endl;


    std::cout << &foods2 << std::endl;
    printSTDArray(foods2);
    for (auto f : foods2) {
        std::cout << f << std::endl;
    }
    std::cout << std::endl;

    std::cout << &foods3 << std::endl;
    printVector(foods3);

    for (auto f : foods3) {
        std::cout << f << std::endl;
    }
    std::cout << std::endl;



    // std::vector<std::string> foods; 
    
    // foods = {"grapes", "carrots", "lemons"};
    // foods.push_back("tortillas"); 

    // system("pause");
    return 0;
}


/*
3 functions

1.c Style arrays
2. arrays from standard namespace
3. arrays from vectors
*/