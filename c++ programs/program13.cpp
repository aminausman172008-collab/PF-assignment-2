#include <iostream>
using namespace std>

#define PI 3.1417 

int main() {
    double radius, area;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of the circle is: " << area << endl;

    return 0;
}

