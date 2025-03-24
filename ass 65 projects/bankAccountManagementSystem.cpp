#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string accountHolder;
    double balance;
    
    BankAccount(int accNum, string accHolder, double initialBalance) {
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = initialBalance;
    }
    
    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }
    
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
    }
    
    void displayBalance() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Current Balance: Rs." << balance << "\n";
    }
};

class Bank {
private:
    vector<BankAccount> accounts;
public:
    void createAccount(int accNum, string accHolder, double initialBalance) {
        accounts.push_back(BankAccount(accNum, accHolder, initialBalance));
        cout << "Account Created Successfully!\n";
    }
    
    BankAccount* getAccount(int accNum) {
        for (auto &acc : accounts) {
            if (acc.accountNumber == accNum) {
                return &acc;
            }
        }
        return nullptr;
    }
};

int main() {
    Bank bank;
    int choice, accNum;
    string accHolder;
    double amount, initialBalance;
    
    do {
        cout << "\nBank Account Management System\n";
        cout << "1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Check Balance\n5. Exit\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter Account Number: ";
                cin >> accNum;
                cin.ignore();
                cout << "Enter Account Holder Name: ";
                getline(cin, accHolder);
                cout << "Enter Initial Balance: ";
                cin >> initialBalance;
                bank.createAccount(accNum, accHolder, initialBalance);
                break;
            case 2:
                cout << "Enter Account Number: ";
                cin >> accNum;
                if (BankAccount* acc = bank.getAccount(accNum)) {
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;
                    acc->deposit(amount);
                } else {
                    cout << "Account Not Found!\n";
                }
                break;
            case 3:
                cout << "Enter Account Number: ";
                cin >> accNum;
                if (BankAccount* acc = bank.getAccount(accNum)) {
                    cout << "Enter Amount to Withdraw: ";
                    cin >> amount;
                    acc->withdraw(amount);
                } else {
                    cout << "Account Not Found!\n";
                }
                break;
            case 4:
                cout << "Enter Account Number: ";
                cin >> accNum;
                if (BankAccount* acc = bank.getAccount(accNum)) {
                    acc->displayBalance();
                } else {
                    cout << "Account Not Found!\n";
                }
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);
    
    return 0;
}
