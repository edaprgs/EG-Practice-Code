// C++ Program to raise any number X to power n

#include<iostream>

#include<cmath>

using namespace std;

int main()

{

     double x,y,res;

     

     cout << "--Power Rule--\n";

     

     cout << "Enter your base value: ";

     cin >> x;

     cout << "\n";

     

     cout << "Enter your power value: ";

     cin >> y;

     cout << "\n";

     

     res = pow(x,y);

     

     cout << "Result: " << res;

     cout << "\n";

     

     return 0;

}
