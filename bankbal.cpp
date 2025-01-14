#include <iostream>
#include <string>
using namespace std;

class Bnkacc {
private:
    string accown;
    int balance;

public:
    Bnkacc( string & holder, int initiBal)
        : accown(holder), balance(initiBal) {}

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
            cout << "Withdraw amount: Rs." << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    int getBalance()  {
        return balance;
    }

    void displayAccount()  {
        cout << "Account Holder: " << accown << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

int main() {
    string name;
    int initiBal;

    cout << "Enter account holder's name: ";
    getline(cin, name);

    cout << "Enter initial balance: Rs.";
    cin >> initiBal;

    cin.ignore();

    Bnkacc userAccount(name, initiBal);
    userAccount.displayAccount();

    string choice;
    do {
        cout << "\nDo you want to deposit, withdraw, or quit? ";
        getline(cin, choice);b

        if (choice == "deposit") {
            int depositAmount;
            cout << "Enter deposit amount: Rs.";
            cin >> depositAmount;
            cin.ignore();
            userAccount.deposit(depositAmount);
        } else if (choice == "withdraw") {
            int withdrawAmount;
            cout << "Enter withdrawal amount: Rs.";
            cin >> withdrawAmount;
            cin.ignore();
            userAccount.withdraw(withdrawAmount);
        } else if (choice == "quit") {
            cout << "Quitting." << endl;
        } else {
            cout << "Invalid choice." << endl;
        }

        userAccount.displayAccount();

    } while (choice != "quit");

    return 0;
}






















cout<<"hi bor";
