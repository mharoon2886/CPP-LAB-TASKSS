//MUHAMMAD HAROON 
//5121399

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // to store factorial

    cout << "Enter a number: ";
    cin >> n;

    // for loop to calculate factorial
    for(int i = 1; i <= n; i++) {
        factorial *= i; // multiply factorial by i each time
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}
