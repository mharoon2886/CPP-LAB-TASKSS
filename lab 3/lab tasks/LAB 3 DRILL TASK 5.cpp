// MUHAMMAD HAROON
// ETEA ID 5121399


 #include <iostream>   
using namespace std;

int main()
{
    // Variables for resistors, total current and branch currents
    float R1 = 0, R2 = 0, I = 0, I1 = 0, I2 = 0;

    // Ask user to enter first resistor
    cout << "Enter value of first resistor: ";
    cin >> R1;

    // Ask user to enter second resistor
    cout << "Enter value of second resistor: ";
    cin >> R2;

    // Ask user to enter total current
    cout << "Enter total current: ";
    cin >> I;

    // Calculate branch currents
    I1 = I * (R2 / (R1 + R2));
    I2 = I * (R1 / (R1 + R2));

    // Display all values
    cout << "First resistor: " << R1 << endl;
    cout << "Second resistor: " << R2 << endl;
    cout << "Total current: " << I << endl;
    cout << "Current in branch 1: " << I1 << endl;
    cout << "Current in branch 2: " << I2 << endl;

    return 0;   // Program ends
} 
