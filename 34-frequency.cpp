#include <iostream>


using namespace std;

int main() {
    int number;
    int frequency[10] = {0}; 

    //  enter an integer
    cout << "Enter an integer: ";
    cin >> number;

   
    // Count the frequency of each digit
    while (number > 0) {
        int digit = number % 10; 
        frequency[digit]++;     
        number /= 10;        
    }

    // Print the frequency of each digit
    cout << "Digit frequencies:" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << "Digit " << i << ": " << frequency[i] << endl;
        }
    }

    return 0;
}
