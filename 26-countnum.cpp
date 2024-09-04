#include <iostream>

using namespace std;

int main() {
    int number;
    int Num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Save the original number for final printing
    Num = number;

    if (number == 0) {
        count = 1;
    } else {
        // Count digits using a loop
        while (number > 0) {
            number /= 10;
            count++;
        }
    }

    cout << "The number of digits in " << Num << " " << "is " << count << endl;

    return 0;
}

