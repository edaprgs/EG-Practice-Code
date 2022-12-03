// C++ Program to Convert Days Into Minute, Hours, Weeks, Months, Years

#include<iostream>

using namespace std;

int main()
{
    int choice, days, conversion;

    cout << "Converting Days into: \n1-Minutes\n2-Hours\n3-Weeks\n4-Months\n5-Years\n\n";
    cout << "Choose a number to convert(1,2,3,4,5): ";
    cin >> choice;

    cout << "Enter the number in Days to convert: ";
    cin >> days;
    cout << "\n";

    switch(choice)
    {
        case 1:
        {
            conversion = days*1440;
            cout << "["<<days<<"]Days to Minutes = "<< conversion<<" minutes";
            cout << "\n";
            break;
        }
        case 2:
        {
            conversion = days*24;
            cout << "["<<days<<"]Days to Hours = "<< conversion<<" hours";
            cout << "\n";
            break;
        }
        case 3:
        {
            conversion = days/7;
            cout << "["<<days<<"]Days to Weeks = "<< conversion<<" weeks";
            cout << "\n";
            break;
        }
        case 4:
        {
            conversion = days/30.417;
            cout << "["<<days<<"]Days to Months = "<< conversion<<" months";
            cout << "\n";
            break;
        }
        case 5:
        {
            conversion = days/365;
            cout << "["<<days<<"]Days to Year = "<< conversion<<" year/s";
            cout << "\n";
            break;
        }
        default:
            cout << "Please input the correct number for conversion\n";
            break;
    }

    return 0;
}
