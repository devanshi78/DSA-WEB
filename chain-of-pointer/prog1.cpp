#include<iostream>
using namespace std;

int main()
{
    int *a,**b,***c,num;

    cout<<"enter a: ";
    cin>>num;

    a = &num;
    b = &a;
    c = &b;

    cout<<"value of num: "<<*a<<endl;
    cout<<"value of num: "<<**b<<endl;
    cout<<"value of num: "<<***c<<endl;

    cout<<"address of num: "<<a<<endl;
    cout<<"address of num: "<<*b<<endl;
    cout<<"address of num: "<<**c<<endl;

    return 0;

}