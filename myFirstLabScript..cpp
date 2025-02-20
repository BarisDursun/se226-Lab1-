#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << endl;

    string studentID;
    cout << "What is your Student ID? ";
    cin >> studentID;
    cout << "Your ID is " << studentID << endl;

    int var1;
    int var2;
    cout << "Enter variable: ";
    cin >> var1;
    cout << "Enter variable: ";
    cin >> var2;
    cout << var1 + var2 << endl;
    cout << var1 - var2 << endl;
    cout << var1 * var2 << endl;

    string studentName;
    int gradeLab;
    int gradeMidterm;
    int gradeFinal;
    cout << "What is your name? ";
    cin >> studentName;
    cout << "Lab grade: ";
    cin >> gradeLab;
    cout << "Midterm grade: ";
    cin >> gradeMidterm;
    cout << "Final grade: ";
    cin >> gradeFinal;
    cout << "Last score = " << (gradeLab * 0.25) + (gradeMidterm * 0.35) + (gradeFinal * 0.40) << endl;

    cout << "*" << endl;
    cout << "**" << endl;
    cout << "***" << endl;
    cout << "**" << endl;
    cout << "*" << endl;

    return 0;
}
