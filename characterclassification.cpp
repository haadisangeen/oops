#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Lowercase vowel";
            break;

        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Uppercase vowel";
            break;

        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << "Digit";
            break;

        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                cout << "Consonant";
            else
                cout << "Special character";
    }

    return 0;
}
