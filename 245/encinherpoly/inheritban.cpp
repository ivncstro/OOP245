#include <iostream>

class Person {
    public:

    void hobbies () {
        std::cout << "A person has multiple hobbies such as gaming, reading, and etc" << std::endl;
    }
};

class ban : public Person {
    public:

    void banhobby () {
        std::cout << "Ban specifically plays videogames as his hobby." << std::endl;
    }
};

int main () {

    ban me;
    me.hobbies(); // inherited from the Person class
    me.banhobby(); 

    return 0;
}