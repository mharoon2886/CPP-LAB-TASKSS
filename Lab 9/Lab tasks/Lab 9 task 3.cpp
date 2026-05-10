#include <iostream>
using namespace std;

// Function to calculate sum of array elements
// Parameters: array and its size
// Returns: sum of all elements
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to sum
    }
    return sum; // Return total sum
}

int main() {
    int numbers[10]; // Declare 1D array of size 10

    // Input 10 integers from user
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i]; // Store input in array
    }

    // Call function to calculate sum
    int sum = calculateSum(numbers, 10);

    // Calculate average
    double average = static_cast<double>(sum) / 10;

    // Display results
    cout << "Sum of elements = " << sum << endl;
    cout << "Average of elements = " << average << endl;

    return 0;
}

