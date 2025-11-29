#include <iostream>
using namespace std;

int main() {
    double millimeters, inches;


    cout << "Enter length in millimeters: ";
    cin >> millimeters;

    inches = millimeters / 25.4;

    cout << millimeters << " millimeters is equal to " << inches << " inches." << endl;

    return 0;
}

