#include <iostream>
using namespace std;

int main() {
    double number = 15.58971;
    int integralPart;
    double fractionalPart;

    integralPart = static_cast<int>(number);
    fractionalPart = number - integralPart;

    cout << "Number: " << number << endl;
    cout << "Integral part: " << integralPart << endl;
    cout << "Fractional part: " << fractionalPart << endl;

    return 0;
}

