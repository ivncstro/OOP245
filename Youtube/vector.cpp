/*Vectors allow memory allocation to shrink or grow
depending on the program, useful if you don't know the 
size of the program and waits for the program to determine the size
on code execution*/


#include <iostream>
#include <string>
#include <array>
#include <vector>

int main() 
{
    std::vector<std::string> foods; // dynamically initialize a vector
    
    foods = {"grapes", "carrots", "lemons"}; // modernized array for methods
    foods.push_back("tortillas"); // vector method to push a new string into the back of the vector array


    for(auto food : foods) // 
    {
        std::cout << food << std::endl;
    }

    system("pause");
    return 0;
}
