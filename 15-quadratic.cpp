#include <iostream>
#include <cmath>    // For sqrt() function

using namespace std;

int main() {
    double a, b, c;
    double D, root1, root2;
    int typeofroot;

    // Input coefficients
    cout << "Enter a coefficient: ";
    cin >> a;
    cout << "Enter b coefficient: ";
    cin >> b;
    cout << "Enter c coefficient: ";
    cin >> c;

    // Calculating the discriminant
    D = b * b - 4 * a * c;

    if (D > 0) {
        typeofroot = 1;  // Two real roots
    } else if (D == 0) {
        typeofroot = 2;  // One real root
    } else {
        typeofroot = 3;  // No real roots
    }

    // Use switch statement to handle the discriminant category
    switch (typeofroot) {
        case 1:
            // For Two real roots
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);
            cout << "The quadratic equation has two real roots: " << root1 << " and " << root2 << endl;
            break;
        case 2:
            //For One real root
            root1 = -b / (2 * a);
            cout << "The quadratic equation has one real root: " << root1 << endl;
            break;
        case 3:
            //For Complex roots
            cout << "The quadratic equation has no real roots." << endl;
            break;
        default:
            cout << "Invalid value for Nature of root." << endl;
            break;
    }

    return 0;
}