//MUHAMMAD HAROON
// ETEA ID 5121399


#include <iostream>
using namespace std;  

int main()
{
    int choice;      // To store user's menu choice
    double value;    // To store the input value
    double result;   // To store the converted result

    // Display the menu
    cout << "------ Conversion Menu ------\n";
    cout << "1 ? Convert Kilometers to Meters\n";
    cout << "2 ? Convert Meters to Centimeters\n";
    cout << "3 ? Convert Kilograms to Grams\n";
    cout << "4 ? Convert Celsius to Fahrenheit\n";

    // Ask user to enter choice
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Check user's choice using switch
    switch(choice)
    {
        case 1:
            cout << "Enter value in Kilometers: ";
            cin >> value;
            result = value * 1000;   // 1 km = 1000 meters
            cout << "Result: " << result << " meters";
            break;

        case 2:
            cout << "Enter value in Meters: ";
            cin >> value;
            result = value * 100;   // 1 meter = 100 centimeters
            cout << "Result: " << result << " centimeters";
            break;

        case 3:
            cout << "Enter value in Kilograms: ";
            cin >> value;
            result = value * 1000;   // 1 kg = 1000 grams
            cout << "Result: " << result << " grams";
            break;

        case 4:
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            result = (value * 9.0/5.0) + 32;   // Formula: C to F
            cout << "Result: " << result << " Fahrenheit";
            break;

        default:
            // Runs if user enters wrong number
            cout << "Invalid choice";
    }

    return 0;   // Program ends successfully
}
