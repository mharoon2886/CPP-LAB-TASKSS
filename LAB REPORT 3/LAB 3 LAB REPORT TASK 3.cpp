//MUHAMMMAD HAROON
// ETEA ID 5121399



#include <iostream>   // input aur output ke liye library

using namespace std;  // std likhne ki zarurat khatam karta hai

int main() 
{
    int num;   // ek integer variable banaya

    cout << "Enter an integer: ";   // user se number lene ke liye message
    cin >> num;   // user ka input lena

    // check kar rahe hain ke number positive hai ya nahi
    if (num > 0)   
    {
        cout << "The number is positive." << endl;   // agar number 0 se bara ho
    }
    else
    {
        cout << "The number is not positive." << endl;  // agar number 0 ya negative ho
    }

    return 0;   // program khatam
}
