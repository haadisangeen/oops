#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return a / b;
}

int modulo(int a, int b) {
    if (b == 0) {
        cout << "Error! Modulo by zero." << endl;
        return 0;
    }
    return a % b;
}

int main() {
    double num1, num2;
    char choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /, %): ";
    cin >> choice;

    switch (choice) {
        case '+':
            cout << "Result = " << add(num1, num2);
            break;

        case '-':
            cout << "Result = " << subtract(num1, num2);
            break;

        case '*':
            cout << "Result = " << multiply(num1, num2);
            break;

        case '/':
            cout << "Result = " << divide(num1, num2);
            break;

        case '%':
            cout << "Result = " << modulo((int)num1, (int)num2);
            break;

        default:
            cout << "Invalid operation!";
    }

    return 0;
}
