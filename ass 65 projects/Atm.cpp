#include <iostream>
#include <vector>
using namespace std;

class ATM {
private:
    double balance;
    vector<string> transactionHistory;

public:
    ATM() {
        balance = 1000.0; // Initial balance
    }

    // Function to check balance
    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! $" << amount << " has been added to your account." << endl;
            transactionHistory.push_back("Deposit: +$" + to_string(amount));
        } else {
            cout << "Invalid amount. Deposit failed." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! $" << amount << " has been deducted from your account." << endl;
            transactionHistory.push_back("Withdrawal: -$" + to_string(amount));
        } else {
            cout << "Insufficient balance or invalid amount. Withdrawal failed." << endl;
        }
    }

    // Function to view transaction history
    void viewTransactionHistory() {
        if (transactionHistory.empty()) {
            cout << "No transactions found." << endl;
        } else {
            cout << "\nTransaction History:" << endl;
            for (const string& transaction : transactionHistory) {
                cout << transaction << endl;
            }
        }
    }
};

int main() {
    ATM atm;
    int choice;
    double amount;

    do {
        cout << "\n--- ATM Simulator ---" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. View Transaction History" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                atm.deposit(amount);
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                atm.withdraw(amount);
                break;

            case 4:
                atm.viewTransactionHistory();
                break;

            case 5:
                cout << "Thank you for using the ATM Simulator!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}