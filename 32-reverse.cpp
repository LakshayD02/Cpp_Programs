#include <iostream>
 using namespace std;
 int main() {
    int number, reversedNumber = 0, digit;
    cout << "Enter an integer: ";
    cin >> number;
    while (number > 0) {
        digit = number % 10;          
        reversedNumber = reversedNumber * 10 + digit; 
        number /= 10;                  
    }
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}
