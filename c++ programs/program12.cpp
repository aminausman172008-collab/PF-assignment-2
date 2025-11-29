#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1417;  
    double radius, height, volume;

    cout << "Enter radius of cylinder: ";
    cin >> radius;
    cout << "Enter height of cylinder: ";
    cin >> height;

    volume = PI * radius * radius * height;

    cout << "Volume of the cylinder is: " << volume << endl;

    return 0;
}

