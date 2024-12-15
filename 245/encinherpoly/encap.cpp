#include <iostream>
#include <string>
class BankAccount {
private:
    double balance; // Encapsulated data, not directly accessible

public:
    // Constructor
    // * initializes the data member 'balance' for BankAccount account(1000)
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Public method to access the balance safely
    double getBalance() const {
        return balance;
    }

    // Public method to modify the balance
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw
    void withdraw(double amount) {
        if (amount > 0) {
            balance -= amount;
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }
};
int main() {
    BankAccount account(1000);
    account.deposit(500); // Safely updates balance
    std::cout << "Balance: $" << account.getBalance() << std::endl;
    account.withdraw(1000); 
    std::cout << "Balance: $" << account.getBalance() << std::endl;

    return 0;
}
