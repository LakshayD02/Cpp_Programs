// Program for Second largest number among the three numbers

#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    int seclarge;

    cout<<"Enter the first number - ";
    cin>>num1;
    cout<<"Enter the second number - ";
    cin>>num2;
    cout<<"Enter the third number - ";
    cin>>num3;

    // Using if-else and logical operator
    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2)){
        seclarge = num1;
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)){
        seclarge = num2;
    }
    else{
        seclarge = num3;
    }

    //Printing the third largest number
    cout<<"Second largest number is "<<seclarge;

    return 0;
}