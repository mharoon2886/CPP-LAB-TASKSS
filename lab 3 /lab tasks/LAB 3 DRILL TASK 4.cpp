// MUHAMMAD HAROON
// MUHAMMAD HAROON

#include <iostream>   
using namespace std;  

int main()
{
    // Variables for two resistors and net resistance
    float R1 = 0, R2 = 0, Rnet = 0;

    // Ask user to enter first resistor value
    cout << "Enter value of first resistor: ";
    cin >> R1;

    // Ask user to enter second resistor value
    cout << "Enter value of second resistor: ";
    cin >> R2;

    // Calculate net resistance of parallel resistors
    Rnet = (R1 * R2) / (R1 + R2);

    // Show first resistor value
    cout << "First resistor: " << R1 << endl;

    // Show second resistor value
    cout << "Second resistor: " << R2 << endl;

    // Show net resistance
    cout << "Net resistance: " << Rnet << endl;

    return 0;   
}
