//Program for printing the multiplication table of any number

#include <iostream>

using namespace std;

int main() {
    int num;
    
    cout << "Enter the number: ";
    cin >> num;

    // Printing the table using for loop
    cout << "Multiplication table for " << num << "is :\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
