#include <iostream>
using namespace std;

int main() {
    int numbers[5]; // Declare array to store 5 integers
    int sum = 0;    // Variable to store sum

    // Prompt user to enter 5 numbers
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i]; // Store input in array
    }

    // Calculate sum of array elements
    for (int i = 0; i < 5; i++) {
        sum += numbers[i]; // Add each element to sum
    }

    // Display the result
    cout << "Sum of entered numbers = " << sum << endl;

    return 0;
}

