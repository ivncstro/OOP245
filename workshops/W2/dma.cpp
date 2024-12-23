#include <iostream>
#include "dma.h"
using namespace std;
namespace seneca {

    void reverse() {
        int num;

        cout << "Enter the number of double values:\n> ";
        cin >> num;

        double values[num];

        for (int i= 0; i < num; i++ ) {
            cout << i + 1 << ">";
            cin >> values[i];
        }
        cout << "Reversing: " << endl; // T1
        for (int i = num; i > 0; i--) {
            cout << values[i-1] << endl;
        }
    }

    Contact* getContact () {

        Contact* contact = new Contact; // dynamic memory allocation
        
        cout << "Name: ";
        cin >> contact->m_name;
        cin.ignore();

        cout << "Last Name: ";
        cin >> contact->m_lastname;
        cin.ignore();
        
        cout << "Phone Number: ";
        cin >> contact->m_phoneNumber;
        cin.ignore();

        return contact;
    }

    void display(const Contact& c) {

        cout << c.m_name << " " << c.m_lastname << ", +" << c.m_phoneNumber << endl;
    }

    void deallocate(Contact* c) {
        delete c;
    }

    void setEmpty(Contact& c) {
        c.m_name[0] = '\0';
        c.m_lastname[0] = '\0';
        c.m_phoneNumber = 0;
    }
}
