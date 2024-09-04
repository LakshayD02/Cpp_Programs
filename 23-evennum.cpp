// Program to print sum of all even numbers from 1 to n.

#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a positive integer n: ";
    cin >> num;

    // Using for loop
    for (int i = 2; i <= num; i += 2) {
        sum += i;
    }
    cout << "The sum of all even numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}
