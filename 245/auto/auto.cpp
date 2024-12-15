#include <iostream>
#include <cstdio>


int main () {

    auto x = 5;
    auto y = 10.5;
    auto z = x + y; // x is promoted to double before addition since the larger type is double

    std::cout << z << std::endl;


    return 0;
}