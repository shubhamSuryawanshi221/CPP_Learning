


//Write a C++ progam to find average of 3 numbers
#include <iostream>
using namespace std;

int main() {
    // Declare three variables to store the numbers
    float num1, num2, num3;

    // Prompt user to input the three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Calculate the average
    float average = (num1 + num2 + num3) / 3;

    // Output the result
    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}