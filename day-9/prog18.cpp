#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter number : ";
    cin>>num;

    (num % 2 == 0)
        ? cout<<num<<" is even number."<<endl
        : cout<<num<<" is odd number."<<endl;

    return 0;

}