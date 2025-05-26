#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"enter a value: ";
    cin>>a;

    cout<<"enter b value: ";
    cin>>b;

    if(a>b)
    {
        cout<<"A is greater than B";
    }
    else if(a<b)
    {
        cout<<"B is greater than A";
    }
    else
    {
        cout<<"A and B are equal";
    }

    return 0;

}