#include<iostream>
using namespace std;

int main()
{
    int a, b, mod;
    int *ptr1,*ptr2;

    cout<<"enter a: ";
    cin>>a;

    cout<<"enter b: ";
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    mod = *ptr1 % *ptr2;

    cout<<"modul of a and b is: "<<mod;

    return 0;

}