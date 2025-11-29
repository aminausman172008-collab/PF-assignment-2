#include <iostream>
using namespace std;

int main() {
    int ageYears = 20;  
    int ageMonths, ageDays;

    ageMonths = ageYears * 12;
    ageDays = ageYears * 365;  

    cout << "Age in years: " << ageYears << " years" << endl;
    cout << "Age in months: " << ageMonths << " months" << endl;
    cout << "Age in days: " << ageDays << " days" << endl;

    return 0;
}

