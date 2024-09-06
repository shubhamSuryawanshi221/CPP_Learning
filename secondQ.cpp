//Write a C++ progam to find sum of N natural numbers


#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Ask the user for the value of N
    cout << "Enter a positive integer: ";
    cin >> N;

    // Calculate the sum of first N natural numbers
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    // Display the result
    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
