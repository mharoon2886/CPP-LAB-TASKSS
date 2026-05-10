#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 4x4 array with random values
    int arr[4][4] = {
        {12, 7, 9, 20},
        {5, 25, 14, 8},
        {11, 6, 30, 18},
        {2, 19, 22, 15}
    };

    // Assume first element is maximum initially
    int maxVal = arr[0][0];

    // Traverse the array to find maximum
    for (int i = 0; i < 4; i++) {       // Loop for rows
        for (int j = 0; j < 4; j++) {   // Loop for columns
            if (arr[i][j] > maxVal) {   // Compare with current max
                maxVal = arr[i][j];     // Update max if larger found
            }
        }
    }

    // Display maximum value
    cout << "Maximum value in the array = " << maxVal << endl;

    return 0;
}

