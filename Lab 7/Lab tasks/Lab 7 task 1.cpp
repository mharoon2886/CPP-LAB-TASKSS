#include <iostream>
using namespace std;

int main() {
    // Declare an integer array of size 5
    int numbers[5] = {10, 20, 30, 40, 50}; // Initialize with values

    // Loop to display array elements
    cout << "Array elements are:" << endl;
    for (int i = 0; i < 5; i++) {
        // Access each element using index i
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    return 0;
}

