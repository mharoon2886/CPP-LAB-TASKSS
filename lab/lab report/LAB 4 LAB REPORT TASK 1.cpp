// MUHAMMAD HAROON
// ETEA ID 5121399


#include <iostream>   
using namespace std;  

int main() 
{
    int day;   // Variable to store day number

    // Ask user to enter day number
    cout << "Enter day number (1-7): ";
    cin >> day;

    // Switch statement to check day number
    switch(day)
    {
        case 1:
            cout << "Monday";
            break;   // Stop here

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            // If user enters wrong number
            cout << "Invalid input! Please enter number between 1 and 7.";
    }

    return 0;   // Program ends successfully
}
