#include <iostream>
using namespace std;

int main() {
    double a, b, c, disc;
  
   cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    disc = (b * b) - (4 * a * c);

    cout << "The value of disc (b^2 - 4ac) is: " << disc << endl;

    return 0;
}

