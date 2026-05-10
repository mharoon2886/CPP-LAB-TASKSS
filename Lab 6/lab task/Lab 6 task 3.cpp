#include <iostream>
using namespace std;

int main() {
    int num, sum = 0; // Declare variables

    cout << "Enter a positive integer: ";
    cin >> num; // Take user input

    // For loop runs from 1 to num
    for (int i = 1; i <= num; i++) {
        sum += i; // Add i to sum
    }

    cout << "Sum = " << sum << endl; // Display result

    return 0;
}

