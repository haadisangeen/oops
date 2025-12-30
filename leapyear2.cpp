#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    bool isLeap;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                isLeap = true;
            else
                isLeap = false;
        } else {
            isLeap = true;
        }
    } else {
        isLeap = false;
    }

    if (isLeap) {
        cout << year << " is a Leap Year";
    } else {
        cout << year << " is NOT a Leap Year\n";
        cout << "Next 5 Leap Years are:\n";

        int count = 0;
        int nextYear = year + 1;

        while (count < 5) {
            if (nextYear % 4 == 0) {
                if (nextYear % 100 == 0) {
                    if (nextYear % 400 == 0) {
                        cout << nextYear << " ";
                        count++;
                    }
                } else {
                    cout << nextYear << " ";
                    count++;
                }
            }
            nextYear++;
        }
    }

    return 0;
}
