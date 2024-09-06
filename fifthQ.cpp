
//Write a C++ progam to find square root of a given number
#include <iostream>
#include <cmath>  // Required for sqrt()
using namespace std;

int main() {
    double num, result;

    // Ask the user for the number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is non-negative
    if (num < 0) {
        cout << "Square root of a negative number is not a real number." << endl;
    } else {
        // Calculate the square root
        result = sqrt(num);

        // Display the result
        cout << "Square root of " << num << " is " << result << endl;
    }

    return 0;
}
