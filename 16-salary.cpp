#include <iostream>

using namespace std;

int main() {

    // BS - Basic Salary
    // GS - Gross Salary
    double BS, HRA, DA, GS;

    cout << "Enter the basic salary: ";
    cin >> BS;

    // Calculate HRA and DA based on the basic salary
    if (BS <= 10000) {
        HRA = BS * 0.20;
        DA = BS * 0.80;
    } else if (BS <= 20000) {
        HRA = BS * 0.25;
        DA = BS * 0.90;
    } else {
        HRA = BS * 0.30;
        DA = BS * 0.95;
    }

    // Gross salary
    GS = BS + HRA + DA;

    // Output results
    cout << "Basic Salary: " << BS << endl;
    cout << "HRA: " << HRA << endl;
    cout << "DA: " << DA << endl;
    cout << "Gross Salary: " << GS << endl;

    return 0;
}
