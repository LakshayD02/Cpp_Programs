#include<iostream>
using namespace std;

int main(){
    int num;
    int fact=1;
    cout<<"enter a number"<<endl;
    cin>>num;
    if(num==0 || num==1){
        cout<<"factorial of "<<num<<"is 1"<<endl;
    }
    else{
        for(int i=1;i<=num;i++){
            fact=fact*i;

        }
        cout<<"factorial of "<<num<<" "<<"is : "<<fact;
    }

}