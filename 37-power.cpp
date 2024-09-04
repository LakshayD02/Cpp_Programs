#include <iostream>
using namespace std;
int main() {
    double base,power;
    double ans= 1;
    // enter the base and power
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the  power: ";
    cin >> power;

    // Check if the power is negative
    if (power< 0) {
        cout << "power should be a non-negative integer." << endl;
        
    }

    //  power using a for loop
    for (int i = 0; i < power; ++i) {
        ans *= base;
    }

    // Print the result
    std::cout << base << " raised to the power of " << power<< " is: " << ans<< endl;

    return 0;
}
