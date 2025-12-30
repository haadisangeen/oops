#include <iostream>
using namespace std;

int main() {
    double result = 0;
    char op;
    double num1, num2;

    cout << "Enter expression (num1 operator num2), e.g., 5 + 3.2: ";
    cin >> num1 >> op >> num2;

    result = (op == '+') ? (num1 + num2) :
             (op == '-') ? (num1 - num2) :
             (op == '*') ? (num1 * num2) :
             (op == '/') ? (num2 != 0 ? num1 / num2 : 0) : 0;

    if(op == '/' && num2 == 0)
        cout << "Error: Division by zero";
    else
        cout << "Result = " << result;

    return 0;
}
