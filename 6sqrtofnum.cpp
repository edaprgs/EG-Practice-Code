//  C++ Program to find Square Root of a Number

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
     int num;
     
     // To take the user's input 
     cout << "Enter the number to calculate its square root: ";
     cin >> num;
     
     cout << "\n";
     
     cout << "The square root of ["<<num<<"] is: "<<sqrt(num)<<"\n";
     
     return 0;
}
