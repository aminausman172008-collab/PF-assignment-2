#include <iostream>
using namespace std;

int main() {
    double rupees = 12000;
    double dollars;
    const double rate = 60;

    dollars = rupees / rate;
    
    cout << rupees << " rupees is equal to " << dollars << " dollars." << endl;

    return 0;
}

