#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double units, bill;
    cout << "Enter units consumed: ";
    cin >> units;

    if(units <= 100)
        bill = units * 1.5;
    else if(units <= 200)
        bill = 100*1.5 + (units-100)*2.5;
    else
        bill = 100*1.5 + 100*2.5 + (units-200)*4.0;

    if(bill > 500)
        bill += 0.10 * bill;

    cout << fixed << setprecision(2);
    cout << "Electricity Bill: ₹" << bill << endl;

    return 0;
}
