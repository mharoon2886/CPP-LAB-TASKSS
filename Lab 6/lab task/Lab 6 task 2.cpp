#include <iostream>
using namespace std;

int main() {
    // Outer loop for rows (1 to 10)
    for (int i = 1; i <= 10; i++) {
        // Inner loop for columns (1 to 10)
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t"; // Print product of i and j with tab spacing
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}

