#include <iostream>
using namespace std;

int main() {
    int number, lastDigit, firstDigit;

    // enter an integer
    cout << "Enter an integer: ";
    cin >> number;
    lastDigit = number % 10;

    // Find the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    // Print the results
    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;

    return 0;
}
