#include <iostream>   // Library used for input and output
using namespace std;

int main()
{
    int i = 1;   // Start the variable i with value 1

    // do-while loop runs the code first, then checks the condition
    do
    {
        cout << i << endl;   // Display the value of i on a new line
        i++;                 // Increase the value of i by 1
    }
    while(i <= 10);   // Loop will continue while i is less than or equal to 10

    return 0;   // End of program
}
