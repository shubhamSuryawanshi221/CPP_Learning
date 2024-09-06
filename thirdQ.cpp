
//Write a C++ progam to find factorial of a given number
#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    // Ask the user for the number
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate the factorial
    if (n < 0)
        cout << "Factorial of a negative number doesn't exist." << endl;
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;  // factorial = factorial * i
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}
