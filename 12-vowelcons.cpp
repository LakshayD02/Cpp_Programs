//Program to check whether it is vowel and consonant

#include <iostream>

using namespace std;

int main() {
    char ch;

    // Input character
    cout << "Enter an alphabet character: ";
    cin >> ch;

    // Checking for characters
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Checking for vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel" << endl;
        } else {
            cout << ch << " is a consonant" << endl;
        }
    } else {
        cout << ch << " is not an alphabet" << endl;
    }

    return 0;
}
