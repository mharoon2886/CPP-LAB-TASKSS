#include <iostream>
using namespace std;

// Function declaration and definition
// This function takes one integer parameter and returns its square
int getSquare(int number) {
    return number * number; // Return square of the number
}

int main() {
    int num = 6; // Example number
    int result = getSquare(num); // Call function and store result

    cout << "Square of " << num << " = " << result << endl; // Display result
    return 0;
}

