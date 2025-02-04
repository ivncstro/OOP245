#include <iostream>
#include <cstring>

using namespace std;
int main () {
    int n;

    cout << "How many names do you want to input: ";
    cin >> n;
    char** name = new char*[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter name #" << i + 1 << ": ";
        name[i] = new char[100]; // allocate memory for every name
        cin >> name[i];
        cin.ignore();
    }

    for(int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }


    for(int i = 0; i < n; i++) {
        delete[] name[i];
    }  



    return 0;
}
