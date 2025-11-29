#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float height;
    char gender;
    
    cout << "Enter name: ";
    getline(cin, name);  // Use getline to input full name with spaces

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter height (in meters): ";
    cin >> height;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "\nStudent Data:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Gender: " << gender << endl;

    return 0;
}

