#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, maxNum;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    maxNum = a;

    if (b > maxNum)
        maxNum = b;
    if (c > maxNum)
        maxNum = c;
    if (d > maxNum)
        maxNum = d;

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

