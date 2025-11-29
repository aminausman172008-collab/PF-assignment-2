#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1417; 
    double radius, area, circumference;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}

