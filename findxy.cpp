#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int limit = sqrt(n);

    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << ":\n";

    for (int x = 0; x <= limit; x++) {
        for (int y = 0; y <= limit; y++) {

            int sum = x * x + y * y;

    
            if (sum < n)
                continue;

      
            if (sum > n)
                break;

            
            cout << "(" << x << ", " << y << ")\n";
        }
    }

    return 0;
}
