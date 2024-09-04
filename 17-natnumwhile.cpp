// Program to print all natural numbers using while loop

#include <iostream>
using namespace std;

int main() {
    int num;
    int i = 1;

    cout << "Enter a number: ";
    cin >> num;

    // Printing numbers using while loop
    while (i <= num) {
        cout << i << " ";
        i++;
    }

    return 0;
}