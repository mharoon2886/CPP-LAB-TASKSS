#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 integer array
    int matrix[3][3] = {
        {1, 2, 3},   // First row
        {4, 5, 6},   // Second row
        {7, 8, 9}    // Third row
    };

    // Display the array using nested loops
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < 3; i++) {          // Loop for rows
        for (int j = 0; j < 3; j++) {      // Loop for columns
            cout << matrix[i][j] << " ";   // Print element at row i, column j
        }
        cout << endl; // Move to next row
    }

    return 0;
}

