#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float cF, fF, kF;
    double cD, fD, kD;

    cout << "Enter temperature in Celsius: ";
    cin >> cF;
    cD = double(cF);

    fF = (cF * 9/5) + 32;
    kF = cF + 273.15f;

    fD = (cD * 9/5) + 32;
    kD = cD + 273.15;

    cout << fixed << setprecision(10);
    cout << "\nFloat results:\n";
    cout << "Celsius: " << cF << "  Fahrenheit: " << fF << "  Kelvin: " << kF << endl;

    cout << "\nDouble results:\n";
    cout << "Celsius: " << cD << "  Fahrenheit: " << fD << "  Kelvin: " << kD << endl;

    cout << "\nNote: Differences appear for very large or very small temperatures due to precision limits of float.\n";

    return 0;
}
