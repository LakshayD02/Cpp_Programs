#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter a number - ";
    cin >> num;

    if (num%2==0)
    {
        cout << "The number is Even" <<endl;
    }
    else{
        cout << "The Number is Odd" <<endl;
    }
    
    return 0;
}