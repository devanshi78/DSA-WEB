#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"enter a: ";
    cin>>a;

    cout<<"enter b: ";
    cin>>b;

    cout<<"enter c: ";
    cin>>c;

    if(a>=b)
    {
        if(a>=c)
        {
            cout<<"a is max";
        }
        else
        {
            cout<<"c is max";
        }
    }
    else
    {
        if(b>=c)
        {
            cout<<"b is max";
        }
        else
        {
            cout<<"c is max";
        }
    }

    return 0;

}