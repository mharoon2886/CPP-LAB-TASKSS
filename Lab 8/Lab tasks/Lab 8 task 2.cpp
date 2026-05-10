#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 3x3 array with random values
    int arr[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0; // Variable to store total sum

    // Calculate sum of each row
    cout << "Row sums:" << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0; // Reset sum for each row
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];   // Add element to row sum
            totalSum += arr[i][j]; // Add element to total sum
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }

    // Calculate sum of each column
    cout << "\nColumn sums:" << endl;
    for (int j = 0; j < 3; j++) {
        int colSum = 0; // Reset sum for each column
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j]; // Add element to column sum
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }

    // Display total sum
    cout << "\nTotal sum of all elements = " << totalSum << endl;

    return 0;
}

