//MUHAMMAD HAROON 
//5121399
#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0, remainder;

    // Take input
    cout << "Enter a number: ";
    cin >> num;

    // Loop until number becomes 0
    while(num != 0)
    {
        remainder = num % 10;              // Get last digit
        reverse = reverse * 10 + remainder; // Build reverse number
        num = num / 10;                    // Remove last digit
    }

    cout << "Reversed number = " << reverse;

    return 0;
}
