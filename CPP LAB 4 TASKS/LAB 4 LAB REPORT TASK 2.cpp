// MUHAMMAD HAROON
// ETEA ID 5121399


#include <iostream>   // Used for input and output
using namespace std;  // So we can use cin and cout easily

int main()
{
    char grade;   // Variable to store grade (A, B, C, D, F)

    // Ask user to enter grade
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    // Switch statement to check grade
    switch(grade)
    {
        case 'A':
            cout << "Excellent";
            break;   // Stop here

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Pass";
            break;

        case 'F':
            cout << "Fail";
            break;

        default:
            // If user enters any other character
            cout << "Invalid Grade";
    }

    return 0;   // Program ends successfully
}
