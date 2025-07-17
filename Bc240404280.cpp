#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    // Parameterized constructor
    BankAccount(string name, string accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;

        cout << "Account Created Successfully!" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number (VUID): " << accountNumber << endl;
        cout << "Initial Balance: " << balance << endl << endl;
    }

    // Deposit function
    void deposit(double amount) {
        cout << "Depositing amount: " << amount << endl;
        balance += amount;
        cout << "Balance after deposit: " << balance << endl << endl;
    }

    // Withdraw function
    void withdraw(double amount) {
        cout << "Withdrawing amount: " << amount << endl;
        if (balance >= amount) {
            balance -= amount;
            cout << "Balance after withdrawal: " << balance << endl << endl;
        } else {
            cout << "Insufficient Balance" << endl << endl;
        }
    }

    // Display account details
    void displayDetails() {
        cout << "----- Account Summary -----" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    // Hardcoded values 
    string name = "Wajiha Arif";
    string VUID = "BC240404280";
    double initialBalance = 10000.0;

    BankAccount account(name, VUID, initialBalance);

    int depositAmount = 3049;  // last 4 digits
    int withdrawAmount = 2404; // first 4 digits

    account.deposit(depositAmount);
    account.withdraw(withdrawAmount);
    account.displayDetails();

    return 0;
}
