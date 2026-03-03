

//MUHAMMAD HAROON
// 5121399
#include <iostream>
using namespace std;

int main()
{
    char grade;

    // Ask user to enter grade
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    // Switch statement
    switch(grade)
    {
        case 'A':
            cout << "Excellent!";
            break;

        case 'B':
            cout << "Very Good!";
            break;

        case 'C':
            cout << "Good!";
            break;

        case 'D':
            cout << "You Passed.";
            break;

        case 'F':
            cout << "Failed.";
            break;

        default:
            cout << "Invalid Grade!";
    }

    return 0;
}
