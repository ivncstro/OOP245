#include <iostream>
class Animal {
public:
    virtual void sound() { // Virtual function
        std::cout << "This animal makes a sound.\n";
    }
};

class Dog : public Animal {
public:
    void sound() override { // Overridden method
        std::cout << "The dog barks.\n";
    }
};

class Cat : public Animal {
public:
    void sound() override { // Overridden method
        std::cout << "The cat meows.\n";
    }
};

int main() {
    Animal* animal1 = new Dog(); // Base class pointer to Dog
    Animal* animal2 = new Cat(); // Base class pointer to Cat

    animal1->sound(); // Calls Dog's sound method
    animal2->sound(); // Calls Cat's sound method

    delete animal1;
    delete animal2;
    return 0;
}
