#include <iostream>   // Library used for input and output
using namespace std;

int main()
{
    int num;      // Variable to store the user entered number
    int i = 1;    // Start counting from 1
    int sum = 0;  // Variable to store the total sum

    cout << "Enter a positive integer: ";
    cin >> num;   // Take number from user

    // while loop will run until i becomes greater than num
    while(i <= num)
    {
        sum = sum + i;   // Add current value of i to sum
        i++;             // Increase i by 1
    }

    cout << "The sum of numbers from 1 to " << num << " is: " << sum << endl; // Display result

    return 0;   // End of program
}
