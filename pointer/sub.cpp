#include<iostream>
using namespace std;

int main()
{
    int a,b,sub;
    int *ptr1,*ptr2;

    cout<<"enter a: ";
    cin>>a;

    cout<<"enter b: ";
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    sub = *ptr1 - *ptr2;

    cout<<"substraction of a and b is: "<<sub;

    return 0;
}