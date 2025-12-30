#include <iostream>
using namespace std;

int main() {
    double balance = 0;
    int choice;
    double amount;

    do {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if(amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully. Current balance: " << balance;
                } else {
                    cout << "Invalid amount!";
                }
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount <= 0) {
                    cout << "Invalid amount!";
                } else if(amount > balance) {
                    cout << "Insufficient balance!";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Current balance: " << balance;
                }
                break;

            case 3:
                cout << "Current balance: " << balance;
                break;

            case 4:
                cout << "Exiting... Thank you!";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}
