#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Coefficient a cannot be zero";
        exit(0);
    }

    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << ", " << root2;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout << "Roots are real and equal: " << root1;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are imaginary: " << realPart << " + " << imagPart << "i, "
             << realPart << " - " << imagPart << "i";
    }

    return 0;
}
