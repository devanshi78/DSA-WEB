#include<iostream>
using namespace std;

int main()
{
    int a, b, div;
    int *ptr1,*ptr2;

    cout<<"enter a: ";
    cin>>a;

    cout<<"enter b: ";
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    div = *ptr1 / *ptr2;

    cout<<"division of a and b is : "<<div;

    return 0;

}