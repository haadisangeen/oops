#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num == 0)
        cout << "Zero";
    else {
        string sign = (num > 0) ? "Positive" : "Negative";
        string parity = (num % 2 == 0) ? "Even" : "Odd";
        cout << sign << " " << parity;
    }

    return 0;
}
