#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if(a + b > c && b + c > a && c + a > b) {
        cout << "Valid Triangle\n";

        if(a == b && b == c)
            cout << "Equilateral Triangle\n";
        else if(a == b || b == c || c == a)
            cout << "Isosceles Triangle\n";
        else
            cout << "Scalene Triangle\n";

        double sqA = a*a, sqB = b*b, sqC = c*c;
        if(fabs(sqA + sqB - sqC) < 1e-6 || fabs(sqB + sqC - sqA) < 1e-6 || fabs(sqC + sqA - sqB) < 1e-6)
            cout << "Right-angled Triangle\n";
    } 
    else
        cout << "Not a valid triangle\n";

    return 0;
}
