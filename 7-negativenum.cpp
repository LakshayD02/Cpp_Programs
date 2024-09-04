#include <iostream>
using namespace std;

int main(){

    float num;

    cout << "Enter a number: ";
    cin  >> num;

    if (num<0)
    {
        cout << "The Entered number is Negative" << endl;
    }
    else if (num==0){
        cout << "The Number is 0" << endl;
    }
    else{
        cout << "The Entered number is not negative or either positive" << endl;
    }
    
    return 0;
}