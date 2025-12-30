#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int temp = num;
    int sum = 0, product = 1;

    if(temp == 0) product = 0;

    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    cout << "Product of digits: " << product << endl;

    return 0;
}
