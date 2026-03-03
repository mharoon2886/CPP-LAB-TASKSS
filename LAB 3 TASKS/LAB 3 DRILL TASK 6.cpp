#include <iostream>   // For input and output
#include <cmath>      // For sqrt() function

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

    return 0;   // End of program
}

#include <iostream>   
using namespace std;

int main()
{
    // Variables for star resistances and delta resistance
    float R1 = 0, R2 = 0, R3 = 0, Rdelta = 0;

    // Ask user to enter first star resistor
    cout << "Enter value of first star resistor (R1): ";
    cin >> R1;

    // Ask user to enter second star resistor
    cout << "Enter value of second star resistor (R2): ";
    cin >> R2;

    // Ask user to enter third star resistor
    cout << "Enter value of third star resistor (R3): ";
    cin >> R3;

    // Calculate delta resistance
    Rdelta = R1 + R2 + (R1 * R2) / R3;

    // Display the star resistor values
    cout << "Star resistor R1: " << R1 << endl;
    cout << "Star resistor R2: " << R2 << endl;
    cout << "Star resistor R3: " << R3 << endl;

    // Display calculated delta resistance
    cout << "Corresponding delta resistance: " << Rdelta << endl;

    return 0;   
}
