#include <iostream>
using namespace std;
int main() {
    int number, sum = 0, digit;

    // enter an integer
    cout << "Enter an integer: ";
    cin >> number;
    while (number > 0) {
        digit = number % 10;  
        sum += digit;        
        number /= 10;       
    }
    cout << "Sum of the digits: " << sum << endl;
    return 0;
}
