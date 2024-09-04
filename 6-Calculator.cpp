#include <iostream>
using namespace std;

int main(){

    char operation;
    float num1, num2;

    cout << "Enter first number - ";
    cin >> num1;
    cout << "Enter second number - ";
    cin >> num2;

    cout<<"Select the Operation ( +, -, *, / )"<<endl;
    cout << "Enter Operation: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "The Result is - " << num1 + num2;
        break;

    case '-':
        cout << "The Result is - " << num1 - num2;
        break;
        
    case '*':
        cout << "The Result is - " << num1 * num2;
        break;

    case '/':
    if (num2!=0)
    {
        cout << "The Result is - " << num1/num2;
    }
    else{
         cout << "This operation is not possible" <<endl;
    }
    break;
    
    default:
        cout << "Invalid Operation";
        break;
    }
    return 0;
}