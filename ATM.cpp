#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance = 5000; 
    int choice;
    double amount;

    do {
        cout << "\n--- Mini ATM Menu ---\n";
        cout << "1 → Balance Inquiry\n";
        cout << "2 → Cash Withdrawal\n";
        cout << "3 → Cash Deposit\n";
        cout << "4 → Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << fixed << setprecision(2);
                cout << "Current Balance: ₹" << balance << endl;
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if(amount > balance)
                    cout << "Insufficient balance!\n";
                else if(amount <= 0)
                    cout << "Invalid amount!\n";
                else {
                    balance -= amount;
                    cout << "Withdrawal successful. New Balance: ₹" << balance << endl;
                }
                break;
            case 3:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if(amount <= 0)
                    cout << "Invalid amount!\n";
                else {
                    balance += amount;
                    cout << "Deposit successful. New Balance: ₹" << balance << endl;
                }
                break;
            case 4:
                cout << "Exiting... Thank you!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
