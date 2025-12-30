#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int upper=0, lower=0, digits=0, space=0, special=0;

    for(int i=0;i<str.length();i++){
        char c = str[i];
        if(c >= 'A' && c <= 'Z') upper++;
        else if(c >= 'a' && c <= 'z') lower++;
        else if(c >= '0' && c <= '9') digits++;
        else if(c == ' ' || c == '\t') space++;
        else special++;
    }

    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;
    cout << "Digits: " << digits << endl;
    cout << "Whitespace: " << space << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
