#include <iostream>
using namespace std;

int main() {
    // Declare and initialize source array
    int source[5] = {5, 10, 15, 20, 25};

    // Declare destination array
    int destination[5];

    // Copy elements from source to destination using a loop
    for (int i = 0; i < 5; i++) {
        destination[i] = source[i]; // Assign each element
    }

    // Display source array
    cout << "Source array: ";
    for (int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    // Display destination array
    cout << "\nDestination array: ";
    for (int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}

