
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    int hcf = 1; 

    // enter two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Ensure that both numbers are positive
    if (num1 <= 0 || num2 <= 0) {
        cout << "Both numbers must be positive integers." << std::endl;
        
    }

    //smaller of the two numbers
    int min = (num1 < num2) ? num1 : num2;

    // Use a for loop to find the HCF
    for (int i = 1; i <= min; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    
    cout << "The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}
