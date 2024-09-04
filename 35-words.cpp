#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string result;

    string oneToNine[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string tenToNineteen[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // enter a number
    cout << "Enter a number between 0 and 100: ";
    cin >> number;

    
    if (number < 0 || number > 100) {
        cout << "Number out of range. Please enter a number between 0 and 100." << endl;
        
    }

    if (number == 100) {
        result = "One Hundred";
    } else if (number >= 20) {
        
        int tensPlace = number / 10;
        int unitsPlace = number % 10;
        
        if (tensPlace > 1) {
            result += tens[tensPlace];
            if (unitsPlace > 0) {
                result += " " + oneToNine[unitsPlace];
            }
        }
    } else if (number >= 10) {
        
        result = tenToNineteen[number - 10];
    } else {
        
        result = oneToNine[number];
    }

   
    if (number == 0) {
        result = "Zero";
    }

    // Print the result
    cout << result << endl;

    return 0;
}
