// Program to relate two integers

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Compare the integers
    if (num1 == num2) {
        cout << num1 << " = (is equal to) " << num2 << endl;
    } else if (num1 > num2) {
        cout << num1 << " > (is greater than) " << num2 << endl;
    } else {
        cout << num1 << " < (is less than) " << num2 << endl;
    }

    return 0;
}
