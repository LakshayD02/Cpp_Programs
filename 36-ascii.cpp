#include <iostream>

using namespace std;

int main() {
    // ASCII values from 0 to 127
    for (int i = 0; i < 128; ++i) {
        // ASCII value and its corresponding character
        cout << "ASCII Value " << i << ": ";
        
        if (i >= 32 && i <= 126) {
            // Printable characters
            cout << (char)i << endl;
        } else {
            // Non-printable characters (e.g., control characters)
            cout << "Non-printable character" << endl;
        }
    }

    return 0;
}
