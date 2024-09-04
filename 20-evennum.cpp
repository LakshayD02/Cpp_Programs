// Program to print all even numbers using while loop

#include <iostream>

using namespace std;

int main() {
    int num = 2; //First even number

    // Printing all even numbers from 1 to 100
    while (num <= 100) {
        cout << num << " ";
        num += 2; // Increment by 2 to get the next even number
    }

    return 0;
}
