#include <cstdio>
#include <iostream>

namespace A {
    int x = 1;
}

namespace B {
    int x = 5;
}


int main() {
    
    // using namespace A = i can now use 
    // namespace B will still show since we explicitly say B::x
    std::cout << "A variable x = " << A::x << std::endl;
    std::cout << "B variable x = " << B::x << std::endl;

    A::x++;
    B::x--;

    std::cout << "After changes" << std::endl;
    std::cout << "A = " << A::x << std::endl;
    std::cout << "B = " << B::x << std:: endl;

 return 0;
}