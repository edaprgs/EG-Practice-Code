// C++ Program to swap two numbers without using third variable

#include<iostream>

#include<cmath>

using namespace std;

void swap(int &a, int&b)

{

    a = a + b;

    b = a - b;

    a = a - b;

}

int main()

{

     int x,y;

     

     cout << "--To Swap Numbers--\n";

     cout << "Enter the 1st number: ";

     cin >> x;

     

     cout << "Enter the 2nd number: ";

     cin >> y;

     cout << "\n";

     

     cout << "-before swapping the values-";

     cout << "\n";

     cout << "x = "<<x<<", y = "<<y<<"";

     

     cout << "\n";

     swap(x,y);

     

     cout << "-after swapping the values-";

     cout << "\n";

     cout << "x = "<<x<<", y = "<<y<<"";

     

     return 0;

}
