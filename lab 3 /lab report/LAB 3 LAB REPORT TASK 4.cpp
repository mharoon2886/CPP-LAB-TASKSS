//MUHAMMMAD HAROON
// ETEA ID 5121399



#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Apni age enter karein: "; // User se age mangwana
    cin >> age;                        // Age ko variable me store karna

    if (age >= 18) {
        cout << "Aap adult hain." << endl; // Agar age 18 ya zyada ho
    } else {
        cout << "Aap adult nahi hain." << endl; // Agar age 18 se kam ho
    }

    return 0;
}
