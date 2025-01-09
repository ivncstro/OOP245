#include <iostream>

using namespace std;

class ee {

  int count;

public:

  ee() : count(49) {

    cout << "NGE";

  }

  ee(int c ) : count(c) {

    cout << "123 + " << c;

  }

  ~ee() {

    cout << "Bye";

  }

};

class vv : public ee {

  int dd;

public:

  vv() : dd(95) {

    cout << "HJK";

  }

  vv(int q) : dd(q) {

    cout << "T;:U";

  }

  ~vv() {

    cout << "O(0)R";

  }

};

int main() {

  ee ptr1(34);

  ee* ptr2 = new vv(45);

  ee* ptr3 = new ee();

  ee * ptr4 = new vv();

  ee* ptr5 = new ee(789);

  delete ptr2;

  delete ptr3;

}