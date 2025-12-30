#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Find Factorial\n";
        cout << "2. Find GCD\n";
        cout << "3. Find LCM\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                if (n < 0)
                    cout << "Factorial not defined for negative numbers.\n";
                else
                    cout << "Factorial = " << factorial(n) << endl;
                break;
            }

            case 2: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "GCD = " << gcd(a, b) << endl;
                break;
            }

            case 3: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "LCM = " << lcm(a, b) << endl;
                break;
            }

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
