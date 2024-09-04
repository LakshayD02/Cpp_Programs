// Program to check whether the character entered is a digit, alphabet and special character

#include <iostream>

using namespace std;

int main() {
    char ch;

    // Input character
    cout << "Enter a character: ";
    cin >> ch;

    // If the character is a digit
    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    }
    //If character is an alphabet
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an alphabet." << endl;
    }
    // For Special Character
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
