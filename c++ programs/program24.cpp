#include <iostream>
#include <cmath> // Required for sqrt() function
using namespace std;

int main() {
    double a, b, c;
    double s, area; 

    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of the triangle is: " << area << endl;

    return 0;
}

