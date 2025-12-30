#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int length;
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    cout << "Enter password length: ";
    cin >> length;

    srand(time(0));
    string password = "";
    for(int i=0; i<length; i++)
        password += chars[rand() % chars.size()];

    cout << "Generated Password: " << password << endl;
    return 0;
}