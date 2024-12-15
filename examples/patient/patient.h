#ifndef PATIENT_H
#define PATIENT_H

struct Patient {
    std::string name;
    int age;
};

void enter(Patient* pt);
void display(const Patient* pt);

#endif