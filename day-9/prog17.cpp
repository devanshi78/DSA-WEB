#include<iostream>
using namespace std;

int main(){

    int num1,num2;

    cout<<"enter first number : "<<endl;
    cin>>num1;

    cout<<"enter second number : "<<endl;
    cin>>num2;

    (num1 > num2)
        ? cout<<num1<<" is largest number."<<endl
        : cout<<num2<<" is largest number."<<endl;

    return 0;

}