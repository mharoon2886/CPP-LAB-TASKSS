// muhammad haroonn
//etea id  ; 5121399
#include <iostream>
using namespace std;

int main() {
    
    // Declare and initialize variables
    float subject1 = 50, subject2 = 0, subject3 = 0, subject4 = 0, subject5 = 0;/* Hum ne yaha pe float isleye leya hy dya hy tha keh hum agar subject marks decimal me bhi
    de tho hamare pass result decimal me exact show kare*/
    
    float total = 0, average = 0;

    // Prompt user to enter marks
    cout << "Enter marks for Subject 1: "; // to display marks of subject 1
    

    cout << "Enter marks for Subject 2: "; // to display marks of subject 2 , and so on 
    cin >> subject2;

    cout << "Enter marks for Subject 3: ";
    cin >> subject3;

    cout << "Enter marks for Subject 4: ";
    cin >> subject4;

    cout << "Enter marks for Subject 5: ";
    cin >> subject5;

    // Calculate total
    total = subject1 + subject2 + subject3 + subject4 + subject5; // to display marks of subject 1+2+3+4+5

    // Calculate average
    average = total / 5; // to display average marks

    // Display result
    cout << "Total Marks = " << total;
    cout << "\nAverage Marks = " << average;

    return 0;
}
