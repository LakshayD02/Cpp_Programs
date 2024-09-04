// Program to print weekdays

#include <iostream>

using namespace std;

int main() {
    int week;

    // Input week number
    cout << "Enter the week number (1 to 7): ";
    cin >> week;

    // Using swtich to determine the weekday
    switch (week) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid week number. Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}
