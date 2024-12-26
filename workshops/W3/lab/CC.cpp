#include <iostream>
#include "cstr.h"
#include "CC.h"
using namespace std;
namespace seneca {
   void CC::prnNumber(unsigned long long no) const {
      cout << no / 1000000000000ull << " ";
      no %= 1000000000000ull;
      cout.fill('0');
      cout.width(4);
      cout.setf(ios::right);
      cout << no / 100000000ull << " ";
      no %= 100000000ull;
      cout.width(4);
      cout << no / 10000ull << " ";
      no %= 10000ull;
      cout.width(4);
      cout << no;
      cout.unsetf(ios::right);
      cout.fill(' ');
   }
   void CC::display(const char* name, unsigned long long number, short expYear, short expMon, short cvv) const{
      char lname[31]{};
      strcpy(lname, name, 30);
      cout << "| ";
      cout.width(30);
      cout.fill(' ');
      cout.setf(ios::left);
      cout << lname << " | ";
      prnNumber(number);
      cout << " | " << cvv << " | ";
      cout.unsetf(ios::left);
      cout.setf(ios::right);
      cout.width(2);
      cout << expMon << "/" << expYear << " |" << endl;
      cout.unsetf(ios::right);
   }

   bool CC::validate(const char* name, unsigned long long cardNo, short cvv, short expMon, short expYear) const {
      int valid = 1;

      if (!name || strlen(name) <= 2) {
         valid = 0;
      }
      if (cardNo < 4000000000000000ull || cardNo > 4099999999999999ull) {
         valid = 0;
      }
      if (cvv < 100 || cvv > 999) {
         valid = 0;
      }
      if (expMon < 1 || expMon > 12) {
         valid = 0;
      }
      if (expYear < 24 || expYear > 32) {
         valid = 0;
      }
      return valid;
   }

   void CC::set() {
      name = nullptr;
      cvv = 0;
      expMon = 0;
      expYear = 0;
      number = 0;
   }

   void CC::cleanUp() {
      if (name != nullptr) {  
         freeMem(name);
      }
      set();
   }

   bool CC::isEmpty() const {
      int valid = 1;
      if (name == nullptr && cvv == 0 && expMon == 0 && expYear == 0 && number == 0){
         valid = 1;
      }
      else {
         valid = 0;
      }
      return valid;
   }

   void CC::set(const char* cc_name, unsigned long long cc_no, short cvv, short expMon, short expYear) {
      CC::cleanUp();
      
      if (validate(cc_name, cc_no, cvv, expMon, expYear)) {
         alocpy(name, cc_name);
         this->number = cc_no;
         this->cvv = cvv;
         this->expMon = expMon;
         this->expYear = expYear;
      }
      else {//do nothing}
         
      }
   }

   void CC::display () const {
      if (isEmpty()) {
         std::cout << "Invalid Credit Card Record" << std::endl;
      }
      else {
         CC::display(name, number, expYear, expMon, cvv);
      }
   }
}