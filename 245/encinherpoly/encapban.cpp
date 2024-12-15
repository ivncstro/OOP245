#include <iostream>
#include <string>

class person1 {

    private: 
    std::string myName;
    int myage;
    int birthYear;

    public:

    person1(std::string name, int age, int year) : myName(name), myage (age), birthYear(year) {}

    void display () {
        std::cout << myName << std::endl;
        std::cout << myage << std::endl;
        std::cout << birthYear << std::endl;
    }

};

int main() {
    person1 ivan("Ivan", 21, 2003);

    ivan.display();

    return 0;
}
