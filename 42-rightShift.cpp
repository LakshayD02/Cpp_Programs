#include <iostream>
using namespace std;

int main() {
    int num; 
    int rightShift; 

   
    cout << "Enter an integer: ";
    cin >> num;

    // Perform the right shift operation by 2 bits
    rightShift= num >> 2;

    // Print the original integer and the result after the right shift
    cout << "Entered integer: " << num <<endl;
    cout << "After right shift by 2 bits: " <<rightShift<< endl;

    return 0;
}
