// Program for checking whether the entered year is leap year or not.

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter the year - ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
