//MUHAMMMAD HAROON
// ETEA ID 5121399



#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Ek number enter karein: "; // User se number mangwana
    cin >> number;                     // Number ko variable me store karna

    if (number > 0) {
        cout << "Number positive hai." << endl; // Agar number 0 se bara ho
    } else if (number < 0) {
        cout << "Number negative hai." << endl; // Agar number 0 se chota ho
    } else {
        cout << "Number zero hai." << endl;     // Agar number 0 ho
    }

    return 0;
}
