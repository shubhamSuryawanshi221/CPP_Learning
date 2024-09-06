//Write a C++ progam to find  a given number is palindrome or not
#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0, remainder;

    // Ask the user for the number
    cout << "Enter an integer: ";
    cin >> n;

    original = n;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;  // Get the last digit
        reversed = reversed * 10 + remainder;  // Build the reversed number
        n /= 10;  // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;

    return 0;
}
