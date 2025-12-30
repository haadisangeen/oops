#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;

    int i = 2;
    while (i * i <= num) {
        if (num % i == 0)
            return false;
        i++;
    }
    return true;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are:" << endl;

    int i = 2;
    while (i <= n) {
        if (isPrime(i)) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}
