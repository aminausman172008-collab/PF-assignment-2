#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 100) {
        cout << "The value of n is greater than 100." << endl;
    }

    // If n <= 100, nothing will be printed

    return 0;
}

