#include <iostream>
using namespace std;

int main() {
    int ageYears, ageMonths;

    cout << "Enter your age in years: ";
    cin >> ageYears;

    ageMonths = ageYears * 12;

    cout << "Your age in months is: " << ageMonths << " months." << endl;

    return 0;
}

