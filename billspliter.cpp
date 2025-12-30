#include <iostream>
using namespace std;

int main() {
    double total;
    int people;
    cout << "Enter total bill amount: ";
    cin >> total;
    cout << "Enter number of people: ";
    cin >> people;

    cout << "Each person should pay: " << total / people << endl;
    return 0;
}