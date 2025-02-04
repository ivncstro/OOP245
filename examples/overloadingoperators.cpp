#include <iostream>


class Person {
    std::string name;
    int age; // test 

    public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    void display (std::ostream& os) const;
};

std::ostream& operator << (std::ostream& os, const Person& p) {
        p.display(os);
        return os;
}

void Person::display (std::ostream& os) const {
    os << name << std::endl;
    os << age << std::endl;
}

int main() {

    Person p1("Ivan", 21);

    std::cout << "First Person:" << std::endl;
    std::cout << p1;

    Person p2("Anthony", 19);
    std::cout << "Second Person:" << std::endl;
    std::cout << p2;

    std::cout << std::endl;
    std::cout << p1 << p2 << std::endl;


    return 0;
}