//MUHAMMAD HAROON 
//5121399

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    int sum = 0;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> n;

    // Loop to calculate sum
    while(i <= n)
    {
        sum = sum + i;   // Add i to sum
        i++;             // Increase i
    }

    cout << "Sum = " << sum;

    return 0;
}
