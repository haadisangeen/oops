#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double marks[5], sum=0, percentage;
    cout << "Enter marks for 5 subjects: ";
    for(int i=0;i<5;i++){
        cin >> marks[i];
        sum += marks[i];
    }

    percentage = sum / 5;

    cout << fixed << setprecision(2);
    cout << "Percentage: " << percentage << "%\n";

    if(percentage >= 90)
        cout << "Grade: A (Distinction)";
    else if(percentage >= 75)
        cout << "Grade: B (First Division)";
    else if(percentage >= 60)
        cout << "Grade: C (Second Division)";
    else if(percentage >= 40)
        cout << "Grade: D (Pass)";
    else
        cout << "Fail";

    return 0;
}
