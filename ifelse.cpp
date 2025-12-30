#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

 
    if (cin.fail() || year <= 0) {
        cout << "Invalid input! Please enter a positive integer year." << endl;
    }
   
    else if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year." << endl;
    }
    else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}
