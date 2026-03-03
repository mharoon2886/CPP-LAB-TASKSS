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

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 1000;   // Initial balance
    double amount;

    // Display menu
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Your balance is: " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "New balance is: " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
                cout << "New balance is: " << balance;
            }
            else
            {
                cout << "Insufficient balance!";
            }
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
