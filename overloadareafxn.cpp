#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

// Area of circle
double area(double radius) {
    return PI * radius * radius;
}

// Area of rectangle
double area(double length, double breadth) {
    return length * breadth;
}

// Area of triangle
double area(int base, int height) {
    return 0.5 * base * height;
}

int main() {
    double r, l, b;
    int base, height;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle: " << area(r) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle: " << area(l, b) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << area(base, height) << endl;

    return 0;
}
