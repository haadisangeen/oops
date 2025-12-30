#include <iostream>
using namespace std;

int main() {
    double income, tax = 0;

    cout << "Enter annual income (in ₹): ";
    cin >> income;

    if (cin.fail() || income < 0) {
        cout << "Invalid input! Please enter a valid income amount." << endl;
    }
    else {
        if (income <= 250000) {
            tax = 0;
        }
        else if (income <= 500000) {
            tax = (income - 250000) * 0.05;
        }
        else if (income <= 1000000) {
            tax = (250000 * 0.05) + (income - 500000) * 0.20;
        }
        else {
            tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
        }

        cout << "Income Tax = ₹" << tax << endl;
    }

    return 0;
}
