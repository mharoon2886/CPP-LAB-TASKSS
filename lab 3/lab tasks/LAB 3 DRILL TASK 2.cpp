// MUHAMMAD HAROON 
// ETEA ID 5121399

#include <iostream>   
using namespace std;  

int main()
{
    // Define variables for radius and circumference
    float radius = 0, circumference = 1;

    // Ask the user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the circumference using formula C = 2 × p × r
    circumference = 2 * 3.14 * radius;

    // Display the radius entered by the user
    cout << "Radius of the circle: " << radius << endl;

    // Display the calculated circumference
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;   // End of program
}
