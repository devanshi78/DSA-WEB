#include<iostream>
using namespace std;

// ternary operater ?:
int main(){

    int a,b,c;

    cout<<"enter a: ";
    cin>>a;

    cout<<"enter b: ";
    cin>>b;

    cout<<"enter c: ";
    cin>>c;

    a > b
        ? a >= c
            ?cout<<"a is max"
            :cout<<"c is max"
        : b >= c
            ?cout<<"b is max"
            :cout<<"c is max";

    return 0;
}