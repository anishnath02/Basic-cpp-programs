#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ₹" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ₹" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\n===== Account Details =====" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: ₹" << balance << endl;
        cout << "=============================" << endl;
    }
};

int main() {
    string name;
    int accNo;
    double initialBalance;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter initial balance: ₹";
    cin >> initialBalance;

    BankAccount account(name, accNo, initialBalance);

    int choice;
    double amount;

    do {
        cout << "\n=== Bank Account Menu ===" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. View Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ₹";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ₹";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
