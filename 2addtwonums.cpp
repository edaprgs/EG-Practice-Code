// Write a C++ program to add two numbers

#include<iostream>
using namespace std;

int main()
{
    int intfirst, intsecond;
    double firstD, secondD, sum;

    cout << "Enter first integer number: ";
    cin >> intfirst;

    cout << "Enter second integer number: ";
    cin >> intsecond;

    cout << "The sum of the integer numbers: " << intfirst+intsecond;

    cout << "\n\n";
    cout << "__________________________________";
    cout << "\n\n";

    cout << "Enter first decimal number: ";
    cin >> firstD;

    cout << "Enter second decimal number: ";
    cin >> secondD;

    sum = firstD + secondD;

    cout << "The sum of the decimal numbers ["<< firstD <<" + "<< secondD <<"] = "<< sum <<"";
    cout << "\n";

    return 0;
}
