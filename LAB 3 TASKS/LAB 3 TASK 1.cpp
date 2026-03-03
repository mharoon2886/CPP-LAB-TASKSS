#include <iostream>
using namespace std;

int main()
{
    float voltage, current, resistance;

    // Prompt user to enter values
    cout << "Enter the value of Voltage (V): ";// to display the value of voltage.
    cin >> voltage;

    cout << "Enter the value of Current (I): ";
    cin >> current;

    // Calculate resistance
    resistance = voltage / current;// formula for finding resistance

    // Display results
    cout << "Voltage = " << voltage << " Volts" << endl;
    cout << "Current = " << current << " Amperes" << endl;
    cout << "Resistance = " << resistance << " Ohms" << endl;

    return 0;
}
