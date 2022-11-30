//  C++ Program to convert inches into: cm, mm, m, km, yard, feet

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
     int choice;
     double num,conversion;
     
     cout << "Converting inch to:\n1-Centimeter\n2-Millimeter\n3-Meter\n4-Kilometer\n5-Yard\n6-Feet\n\n";
     cout << "Enter a number to execute the conversion(1,2,3,4,5,6): ";
     cin >> choice;
     
     cout << "Enter the number in inches to convert: ";
     cin >> num;
     
     cout << "\n";
     
     switch(choice)
     {
          case 1:
          {
               conversion = num*2.54;
               cout << "inch ["<<num<<"] to cm = " << conversion;
               cout << "\n";
               break;
          }
          case 2:
          {
               conversion = num*25.4;
               cout << "inch ["<<num<<"] to mm = " << conversion;
               cout << "\n";
               break;
          }
          case 3:
          {
               conversion = num/39.37;
               cout << "inch ["<<num<<"] to m = " << conversion;
               cout << "\n";
               break;
          }
          case 4:
          {
               conversion = num/39370;
               cout << "inch ["<<num<<"] to km: " << conversion;
               cout << "\n";
               break;
          }
          case 5: 
          {
               conversion = num/36;
               cout << "inch ["<<num<<"] to yard: " << conversion;
               cout << "\n";
               break;
          }
          case 6:
          {
               conversion = num/12;
               cout << "inch ["<<num<<"] to feet: " << conversion;
               cout << "\n";
               break;
          }
          default:
          cout << "Please input the correct number for conversion\n";
          break;
     }

     return 0;
}
