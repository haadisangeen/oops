#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (0-99): ";
    cin >> num;

    if(num < 0 || num > 99){
        cout << "Number out of range!";
        return 0;
    }

    string ones, tens;

    switch(num/10) {
        case 0: tens = ""; break;
        case 2: tens = "Twenty"; break;
        case 3: tens = "Thirty"; break;
        case 4: tens = "Forty"; break;
        case 5: tens = "Fifty"; break;
        case 6: tens = "Sixty"; break;
        case 7: tens = "Seventy"; break;
        case 8: tens = "Eighty"; break;
        case 9: tens = "Ninety"; break;
        case 1: // For numbers 10-19
            switch(num){
                case 10: cout << "Ten"; return 0;
                case 11: cout << "Eleven"; return 0;
                case 12: cout << "Twelve"; return 0;
                case 13: cout << "Thirteen"; return 0;
                case 14: cout << "Fourteen"; return 0;
                case 15: cout << "Fifteen"; return 0;
                case 16: cout << "Sixteen"; return 0;
                case 17: cout << "Seventeen"; return 0;
                case 18: cout << "Eighteen"; return 0;
                case 19: cout << "Nineteen"; return 0;
            }
    }

    switch(num%10){
        case 0: ones = (num/10==0)? "Zero" : ""; break;
        case 1: ones = "One"; break;
        case 2: ones = "Two"; break;
        case 3: ones = "Three"; break;
        case 4: ones = "Four"; break;
        case 5: ones = "Five"; break;
        case 6: ones = "Six"; break;
        case 7: ones = "Seven"; break;
        case 8: ones = "Eight"; break;
        case 9: ones = "Nine"; break;
    }

    if(tens != "" && ones != "")
        cout << tens << " " << ones;
    else
        cout << tens << ones;

    return 0;
}
