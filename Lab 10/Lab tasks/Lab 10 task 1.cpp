#include <iostream>
using namespace std;

// Function declaration and definition
// This function takes two integer parameters and returns nothing
void multiply(int num1, int num2) {
    int product = num1 * num2; // Calculate product
    cout << "Product of " << num1 << " and " << num2 << " = " << product << endl;
}

int main() {
    // Call the function with two numbers
    multiply(5, 7); // Example call
    return 0;
}

