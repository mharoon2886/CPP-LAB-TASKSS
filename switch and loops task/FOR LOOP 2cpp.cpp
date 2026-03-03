//MUHAMMAD HAROON 
//5121399

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // for loop to print each row
    for(int i = 1; i <= rows; i++) {
        // inner loop to print stars in each row
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // move to next line after each row
    }
    return 0;
}
