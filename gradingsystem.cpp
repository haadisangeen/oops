#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int failCount = 0;

    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    if (m1 < 40) failCount++;
    if (m2 < 40) failCount++;
    if (m3 < 40) failCount++;
    if (m4 < 40) failCount++;
    if (m5 < 40) failCount++;

    if (failCount > 1) {
        cout << "Repeat Year";
    } else {
        double percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;

        if (percentage >= 75)
            cout << "Grade A";
        else if (percentage >= 60)
            cout << "Grade B";
        else if (percentage >= 50)
            cout << "Grade C";
        else if (percentage >= 40)
            cout << "Grade D";
        else
            cout << "Grade F";
    }

    return 0;
}
