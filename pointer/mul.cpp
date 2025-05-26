#include<iostream>
using namespace std;

int main()
{
    int a,b,mul;
    int *ptr1,*ptr2;

    cout<<"enter a: ";
    cin>>a;

    cout<<"enter b: ";
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    mul = *ptr1 * *ptr2;

    cout<<"multipication of a and b is : "<<mul;

    return 0;
}