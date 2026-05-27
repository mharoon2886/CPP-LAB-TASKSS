// MUHAMMAD HAROON 
// ETEA ID 5121399

#include <iostream>   
#include <cmath>      

using namespace std;

int main()
{
    // Declare variables
    double a, b, c;           // Coefficients
    double discriminant;      // b^2 - 4ac
    double root1, root2;      // Roots of equation

    // Ask user to enter coefficients
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    // Calculate discriminant
    discriminant = (b * b) - (4 * a * c);

    // Check condition of discriminant
    if (discriminant > 0)
    {
        // Two different real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Two real and different roots are: " << root1 << " and " << root2;
    }
    else if (discriminant == 0)
    {
        // One real root (both roots same)
        root1 = -b / (2 * a);

        cout << "Both roots are equal: " << root1;
    }
    else
    {
        // Roots are complex (not real numbers)
        cout << "Roots are complex and imaginary.";
    }

    return 0;   
}
