/*Program for determining whether a character is an uppercase letter, a lowercase letter, 
a digit, or a special symbol using ASCII values:*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    } else {
        cout << ch << " is a special symbol." << endl;
    }

    return 0;
}
