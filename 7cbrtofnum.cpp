//  C++ Program to find Cube Root of a Number

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
     int num;
     
     // To take the user's input 
     cout << "Enter the number to calculate its cube root: ";
     cin >> num;
     
     cout << "\n";
     
     cout << "The cube root of ["<<num<<"] is: "<<cbrt(num)<<"\n";
     
     return 0;
}
