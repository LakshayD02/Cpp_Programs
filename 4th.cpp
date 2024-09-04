// Program to calculate the grade of a student after the input of marks.
#include <iostream>
using namespace std;

int main() {
    float totalMarks, obtainedMarks, percent;
    char grade;
    string name;

    cout << "Enter Students Name: ";
    cin >> name;

    cout << "Enter total marks: ";
    cin >> totalMarks;

    cout << "Enter marks obtained: ";
    cin >> obtainedMarks;

    // Calculating percentage
    percent = (obtainedMarks / totalMarks) * 100;

    // Grade based on percentage
    if (percent >= 90) {
        grade = 'A';
    } else if (percent >= 70) {
        grade = 'B';
    } else if (percent >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }
 
    cout << "Percentage: " << percent << "%" << endl;
    cout << "Grade Obtained by " << name << " " << "is " << grade << endl;

    return 0;
}
