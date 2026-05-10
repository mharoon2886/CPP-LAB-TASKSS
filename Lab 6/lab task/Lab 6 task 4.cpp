#include <iostream>
using namespace std;

int main() {
    int rows; // Number of rows for the triangle
    cout << "Enter number of rows: ";
    cin >> rows; // User input

    // Outer loop controls number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print star with space
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}

