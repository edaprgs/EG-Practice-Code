// Write a C++ Program to Find Quotient and Remainder of 2 numbers. 

#include<iostream>

using namespace std;

int main() 
{
     int dividend, divisor;
     int quotient, remainder;
     
     cout << "Enter the dividend: ";
     cin >> dividend;
     
     cout << "Enter the divisor: ";
     cin >> divisor;
     
     cout << "\n--To compute the quotient--\n\n";
     quotient = dividend/divisor;
     
     cout << "Quotient of ["<<dividend<<" ÷ "<<divisor<<"] = "<<quotient<<"\n";
     
     remainder = dividend%divisor;
     
     cout << "Remainder: " << remainder;
     cout << "\n";
    
     return 0;
      
}
      
