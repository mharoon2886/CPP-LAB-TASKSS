#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a character array (string stored as array of chars)
    char message[] = "Hello"; // Size is automatically set to 6 (5 chars + '\0')

    // Loop through each character
    cout << "Characters in the array:" << endl;
    for (int i = 0; i < 5; i++) { // Loop runs for 5 characters
        // Display each character separately
        cout << "message[" << i << "] = " << message[i] << endl;
    }

    return 0;
}

