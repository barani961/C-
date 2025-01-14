#include <iostream>
#include <string>
using namespace std;
class Bankacc {
private:
    string accountHolder;
    double balance;

public:

    Bankacc(const string& holder, int initialBalance): accountHolder(holder), balance(initialBalance) {}


    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }


    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: Rs." << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    int getBal() const {
        return balance;
    }

    void displayAccount() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

int main() {
    Bankacc johnAccount("baranidharn", 1500);
    johnAccount.displayAccount();
    johnAccount.deposit(2000);
    johnAccount.withdraw(1008);

    cout<<"\n"<<"the account details:\n";
    johnAccount.displayAccount();

    return 0;
}
