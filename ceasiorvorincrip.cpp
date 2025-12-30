#include <iostream>
using namespace std;

int main() {
    string text;
    int shift;
    char key;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter shift for Caesar Cipher: ";
    cin >> shift;

    cout << "Enter single character key for XOR encryption: ";
    cin >> key;

    cout << "\nOriginal ASCII values: ";
    for(char c : text)
        cout << int(c) << " ";
    cout << endl;

    string caesar = text;
    for(int i = 0; i < caesar.length(); i++)
        caesar[i] = char(((caesar[i] - 'A' + shift) % 26) + 'A');

    cout << "Caesar Cipher ASCII values: ";
    for(char c : caesar)
        cout << int(c) << " ";
    cout << endl;

    string xorText = text;
    for(int i = 0; i < xorText.length(); i++)
        xorText[i] = xorText[i] ^ key;

    cout << "XOR Encryption ASCII values: ";
    for(char c : xorText)
        cout << int(c) << " ";
    cout << endl;

    return 0;
}
