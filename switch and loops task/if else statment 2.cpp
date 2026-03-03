// 5121399

//MUHAMMAD HAROON

#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Compare numbers
    if (num1 > num2)
    {
        cout << "First number is greater.";
    }
    else if (num2 > num1)
    {
        cout << "Second number is greater.";
    }
    else
    {
        cout << "Both numbers are equal.";
    }

    return 0;
}
