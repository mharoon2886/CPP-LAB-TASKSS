//TALHA TUFAIL
// ETEA ID 5121405


#include <iostream>   
using namespace std;  

int main()
{
    int number;   // Ek integer variable banaya

    cout << "Enter an integer: ";  // User se number mang rahe hain
    cin >> number;   // Number variable mein store hoga

    // Check karenge ke number 0 se bada aur 100 se chhota hai ya nahi
    if (number > 0 && number < 100)  
    {
        // Agar dono conditions sahi hon
        cout << "The number is greater than 0 and less than 100.";
    }
    else
    {
        // Agar koi bhi condition galat ho
        cout << "The number does NOT meet both conditions.";
    }

    return 0;  
}
