#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;

    int length = 0;
    while(str1[length] != '\0') length++;
    cout << "Length: " << length << endl;

    cout << "Reverse: ";
    for(int i = length - 1; i >= 0; i--)
        cout << str1[i];
    cout << endl;

    cout << "Enter starting index for substring (0-based): ";
    int start, subLen;
    cin >> start;
    cout << "Enter length of substring: ";
    cin >> subLen;
    cout << "Substring: ";
    for(int i = start; i < start + subLen && i < length; i++)
        cout << str1[i];
    cout << endl;

    cout << "Enter second string to concatenate: ";
    cin >> str2;
    int len2 = 0;
    while(str2[len2] != '\0') len2++;

    char concat[200];
    for(int i = 0; i < length; i++)
        concat[i] = str1[i];
    for(int i = 0; i < len2; i++)
        concat[length + i] = str2[i];
    concat[length + len2] = '\0';
    cout << "Concatenated string: " << concat << endl;

    char ch;
    cout << "Enter character to find frequency: ";
    cin >> ch;
    int freq = 0;
    for(int i = 0; i < length; i++)
        if(str1[i] == ch) freq++;
    cout << "Frequency of " << ch << ": " << freq << endl;

    return 0;
}
