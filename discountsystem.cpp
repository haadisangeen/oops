#include <iostream>
using namespace std;

int main() {
    double purchase, discount, total;
    cout << "Enter purchase amount: ";
    cin >> purchase;

    discount = (purchase < 100) ? 0 :
               (purchase <= 500) ? 0.10 * purchase :
               (purchase <= 1000) ? 0.15 * purchase :
               0.20 * purchase;

    total = purchase - discount;

    cout << "Discount = Rs " << discount << endl;
    cout << "Total price after discount = Rs " << total << endl;

    return 0;
}
