//MUHAMMMAD HAROON
// ETEA ID 5121399


#include <iostream>   
using namespace std;  

int main() 
{
    int num1, num2;   // Do integer variables banaye

    cout << "Enter first number: ";  // User se pehla number mang rahe hain
    cin >> num1;   // Pehla number num1 mein store hoga

    cout << "Enter second number: "; // User se doosra number mang rahe hain
    cin >> num2;   // Doosra number num2 mein store hoga

    // Ab dono numbers ka muqabla karenge
    if (num1 == num2)   // Agar dono number barabar hon
    {
        cout << "Both numbers are equal.";  // Message show karein
    }
    else if (num1 > num2)  // Agar pehla number bada ho
    {
        cout << "First number is greater than second number.";
    }
    else   // Agar pehla number chhota ho
    {
        cout << "First number is less than second number.";
    }

    return 0;   
}
