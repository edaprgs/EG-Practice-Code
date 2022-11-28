// Write a C++ program calculate sum and average of three numbers

#include<iostream>
using namespace std;

int main()
{
    double first, second, third, sum, average;

    cout << "Enter first number: ";
    cin >> first;
    cout << "\n";

    cout << "Enter second number: ";
    cin >> second;
    cout << "\n";

    cout << "Enter third number: ";
    cin >> third;
    cout << "\n";

    sum = first + second + third;
    average = sum/3;

    cout << "The sum of ["<<first<<" + "<<second<<" + "<<third<<"] = "<<sum<<"\n";
    cout << "\n";
    cout << "The average is: " << average;
    cout << "\n";

    return 0;
}
