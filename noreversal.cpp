#include <iostream>
using namespace std;

int main() {
    int num;

    while (true) {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> num;

        if (num == 0) {
            cout << "Program stopped." << endl;
            break;
        }

        if (num < 0) {
            cout << "Please enter a positive integer." << endl;
            continue;
        }

        int reversed = 0, temp = num;

        while (temp > 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }

        cout << "Reversed number: " << reversed << endl;
    }

    return 0;
}
