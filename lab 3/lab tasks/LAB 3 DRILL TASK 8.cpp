// TALHA TUFAIL


#include <iostream>  
#include <cmath>      

using namespace std;

int main() 
{
    // Declare variables
    double base, perpendicular, hypotenuse;

    // Ask user to enter base
    cout << "Enter the value of base: ";
    cin >> base;

    // Ask user to enter perpendicular
    cout << "Enter the value of perpendicular: ";
    cin >> perpendicular;

    // Calculate hypotenuse using Pythagoras formula
    hypotenuse = sqrt((base * base) + (perpendicular * perpendicular));

    // Display the result
    cout << "The value of hypotenuse is: " << hypotenuse << endl;

    return 0;   
}
