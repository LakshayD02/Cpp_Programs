#include <iostream>

using namespace std;

int main() {
    int num;

    // enter a number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Ensure the input number is positive
    if (num <= 0) {
        cout << "The number must be a positive integer." << endl;
       
    }

    cout << "Factors of " << num<< " are: ";

    //  print factors
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " "; 
        }
    }

    

    return 0;
}
