#include <iostream>
using namespace std;
int main() {
    int a,b,l;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    for(l=a>b?a:b;l<a*b;l++){
        if(l%a==0 && l%b==0){
            cout<<l;
            break;
        }
    }
    return 0;
}
    