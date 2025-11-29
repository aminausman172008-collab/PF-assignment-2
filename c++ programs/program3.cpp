#include <iostream>
using namespace std;

int main() {
    int x = 5;  
    int y = 10; 
    int temp;   

    temp = x;
    x = y;
    y = temp;

    cout << "After interchanging:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}

