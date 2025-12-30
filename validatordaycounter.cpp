#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int d, m, y;
    cout << "Enter date (DD MM YYYY): ";
    cin >> d >> m >> y;

    bool valid = true;

    if (y < 1)
        valid = false;
    else if (m < 1 || m > 12)
        valid = false;
    else {
        int daysInMonth;
        if (m == 2)
            daysInMonth = isLeap(y) ? 29 : 28;
        else if (m == 4 || m == 6 || m == 9 || m == 11)
            daysInMonth = 30;
        else
            daysInMonth = 31;

        if (d < 1 || d > daysInMonth)
            valid = false;
    }

    if (!valid) {
        cout << "Invalid Date";
    } else {
        int q = d;
        int m1 = (m < 3) ? m + 12 : m;
        int y1 = (m < 3) ? y - 1 : y;

        int k = y1 % 100;
        int j = y1 / 100;

        int h = (q + 13*(m1 + 1)/5 + k + k/4 + j/4 + 5*j) % 7;

        cout << "Valid Date. Day of the week: ";
        switch(h) {
            case 0: cout << "Saturday"; break;
            case 1: cout << "Sunday"; break;
            case 2: cout << "Monday"; break;
            case 3: cout << "Tuesday"; break;
            case 4: cout << "Wednesday"; break;
            case 5: cout << "Thursday"; break;
            case 6: cout << "Friday"; break;
        }
    }

    return 0;
}
