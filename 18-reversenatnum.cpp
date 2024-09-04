// Program to print all natural numbers in reverse order

#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;
    int i = num;

    // Printing reverse natural numbers
    while (i >= 1) {
        cout << i << " ";
        i--;
    }

    return 0;
}
