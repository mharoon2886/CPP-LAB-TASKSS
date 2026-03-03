#include <iostream>
using namespace std;

int subTwo(int x, int y);

int main(){
    int a, b, sum;
    
    // Asking for input
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    // Calling out user-defined function 
    sum= subTwo(a , b);
    
    // Displaying output
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
int subTwo(int x, int y)
	{
    return (x - y);// aghar ham "addTwo" ke jagha "subTwo" lekhenge to hmarae pas koi chnge nahi ayega b/c ham sirf fuction ka name change kar rahe he ,na ke function ko.
	}
