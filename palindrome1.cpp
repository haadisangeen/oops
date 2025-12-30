#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number to check palindrome: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome" << endl;
    else
        cout << num << " is NOT a palindrome" << endl;

    int start, end;
    cout << "Enter range to find all palindrome numbers (start end): ";
    cin >> start >> end;

    cout << "Palindrome numbers in range: ";
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            cout << i << " ";
    }

    return 0;
}
