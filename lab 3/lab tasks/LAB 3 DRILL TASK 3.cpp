//MUHAMMAD HAROON 
//ETEA ID 5121399

#include <iostream>   
using namespace std;  

int main()
{
    // Define variables for length, width, area and perimeter
    float length = 0, width = 0, area = 1, perimeter = 1;

    // Prompt the user to enter the width
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Prompt the user to enter the length
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    // Calculate the area of the rectangle
    area = length * width;// this  is  the formula of area

    // Calculate the perimeter of the rectangle
    perimeter = 2 * (length + width);// this is the perimeter formula

    // Display the area of the rectangle
    cout << "Area of the rectangle: " << area << endl;

    // Display the perimeter of the rectangle
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;   
}
