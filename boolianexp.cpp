#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter first Boolean value (0/1 or false/true as 0/1): ";
    cin >> a;
    cout << "Enter operator (AND=&, OR=|, NOT=!, XOR=^): ";
    cin >> op;

    if(op == '!') {
        cout << "Result: " << !a;
    } else {
        cout << "Enter second Boolean value (0/1): ";
        cin >> b;
        int result = (op == '&') ? (a && b) :
                     (op == '|') ? (a || b) :
                     (op == '^') ? (a != b) : -1;
        if(result == -1)
            cout << "Invalid operator";
        else
            cout << "Result: " << result;
    }

    return 0;
}
