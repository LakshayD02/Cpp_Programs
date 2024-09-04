#include <iostream>
using namespace std;

int main() {
    int number,num, reversedNumber = 0, digit;

    //  enter a number
    cout << "Enter an integer: ";
    cin >> number;
    num = number;
    while (number > 0) {
        digit = number % 10;       
        reversedNumber = reversedNumber * 10 + digit; 
        number /= 10;                  
    }

    
    if (num== reversedNumber) {
        cout <<num<< " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
