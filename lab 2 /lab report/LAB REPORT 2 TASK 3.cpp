// muhammad haroon 
// ETEA ID 5121399

#include<iostream>  // Include input-output library
using namespace std; // Use standard namespace

int main()
{
    float tempcel, tempfah;  // Declare variables to store temperature in Celsius and Fahrenheit

    cout << "Enter temperature in Celsius :" << endl;  // Ask user to input temperature in Celsius
    cin >> tempcel;  // Read the input temperature from user

    // Convert Celsius to Fahrenheit using formula F = (C * 9/5) + 32
    tempfah = (tempcel * 9 / 5) + 32;  

    cout << "Temperature in Fahrenheit = " << tempfah << endl;  // Display the temperature in Fahrenheit

    return 0;  // End of program
}
