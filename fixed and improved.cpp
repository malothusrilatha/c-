 #include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    friend class AccountManager;
};

class AccountManager {
public:
    void displayBalance(BankAccount &acc) {
        cout << "Account Balance: " << acc.balance << endl;
    }

    void addMoney(BankAccount &acc, double amount) {
        acc.balance += amount;
        cout << amount << " added successfully." << endl;
    }

    void deductMoney(BankAccount &acc, double amount) {
        if (amount <= acc.balance) {
            acc.balance -= amount;
            cout << amount << " deducted successfully." << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount account(50000);
    AccountManager manager;

    manager.displayBalance(account);
    manager.addMoney(account, 30000);
    manager.displayBalance(account);
    manager.deductMoney(account, 4000);
    manager.displayBalance(account);

    return 0;
}





