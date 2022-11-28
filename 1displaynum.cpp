// Write a C++ program to display number (entered by the user)

#include<iostream>
using namespace std;

int main()
{
    int intnum;
    double decnum;

    cout << "Enter an integer number: ";
    cin >> intnum;

    cout << "Enter a decimal number: ";
    cin >> decnum;

    cout << "You entered the integer number: " << intnum << endl;
    cout << "You entered the decimal number: " << decnum << endl;

    return 0;
}
