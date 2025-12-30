#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter amount in USD: ";
    cin >> amount;

    cout << "In INR: " << amount * 83.2 << endl;
    cout << "In EUR: " << amount * 0.92 << endl;
    cout << "In JPY: " << amount * 149.5 << endl;

    return 0;
}