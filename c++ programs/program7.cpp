#include <iostream>
using namespace std;

int main() {
    int rollNo;
    int marksPF, marksIC, marksCG;
    int total;
    float average;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks in Programming Fundamentals (out of 100): ";
    cin >> marksPF;

    cout << "Enter marks in Introduction to Computing (out of 100): ";
    cin >> marksIC;

    cout << "Enter marks in Computer Graphics (out of 100): ";
    cin >> marksCG;

    total = marksPF + marksIC + marksCG;
    average = total / 3.0; 

    cout << "\nRoll Number: " << rollNo << endl;
    cout << "Total Marks: " << total << "/300" << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}

