// Program to check for alphabets

#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an alphabet letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an alphabet." << endl;
    } else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}