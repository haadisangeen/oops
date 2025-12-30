#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float af, bf, cf;
    double ad, bd, cd;

    cout << fixed << setprecision(10);

    cout << "Enter three float numbers (a b c): ";
    cin >> af >> bf >> cf;
    cout << "(a*b)/c = " << (af*bf)/cf << endl;
    cout << "(a/c)*b = " << (af/cf)*bf << endl;

    cout << "Enter three double numbers (a b c): ";
    cin >> ad >> bd >> cd;
    cout << "(a*b)/c = " << (ad*bd)/cd << endl;
    cout << "(a/c)*b = " << (ad/cd)*bd << endl;

    float f_eps = 1.0f;
    while ((1.0f + f_eps/2.0f) != 1.0f) f_eps /= 2.0f;
    cout << "Float epsilon: " << f_eps << endl;

    double d_eps = 1.0;
    while ((1.0 + d_eps/2.0) != 1.0) d_eps /= 2.0;
    cout << "Double epsilon: " << d_eps << endl;

    return 0;
}
