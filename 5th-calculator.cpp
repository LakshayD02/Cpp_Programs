#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Select the Operation (+, -, *, /): ";
    cin >> operation;
    
    // Calculating based on the operator
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Invalid operator." << endl;
    }
    
    return 0;
}
