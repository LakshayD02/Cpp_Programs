#include <iostream>
using namespace std;

int main() {
    int number, lastDigit, firstDigit;
    int tempNumber;
    //enter an integer
    cout << "Enter an integer: ";
    cin >> number;
    lastDigit = number % 10;
    tempNumber = number;
    while (tempNumber >= 10) {
        tempNumber /= 10;
    }
    firstDigit = tempNumber;
    int sum = firstDigit + lastDigit;
        cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Sum of the first and last digits: " << sum << endl;

    return 0;
}
