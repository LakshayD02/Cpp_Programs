// Program to print sum of all natural numbers from 1 to n.

#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Calulating sum using for loop
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    cout << "The sum of all natural numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}
