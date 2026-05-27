#include <iostream>
using namespace std;

int main()
{
    float sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0;
    float average = 0;

    // Prompt user to enter marks
    cout << "Enter marks for Subject 1: ";
    cin >> sub1;

    cout << "Enter marks for Subject 2: ";
    cin >> sub2;

    cout << "Enter marks for Subject 3: ";
    cin >> sub3;

    cout << "Enter marks for Subject 4: ";
    cin >> sub4;

    cout << "Enter marks for Subject 5: ";
    cin >> sub5;

    // Calculate average
    average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    // Display result
    cout << "\nAverage Marks = " << average << endl;

    return 0;
}
