#include <cstdio>
#include <iostream>
#include "patient.h"

void enter (Patient* pt) {
    std::cout << "Enter Patient Name: ";
    std::cin.ignore();
    std::getline(std::cin, pt->name);

    std::cout << "Enter Patient Age: ";
    std::cin >> pt->age;
};

void display(const Patient* pt) {
    std::cout << pt->name << std::endl;
    std::cout << pt->age << std::endl;
};

