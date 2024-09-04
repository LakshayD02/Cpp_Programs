// Program to print sum of all odd numbers from 1 to n.

#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Using for loop
    for (int i = 1; i <= num; i += 2) {
        sum += i;
    }
    cout << "The sum of all odd numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}
