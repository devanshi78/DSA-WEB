#include<iostream>
using namespace std;

int main()
{
    int r,area;
    int *ptr,*p;

    cout<<"enter radius value: ";
    cin>>r;

    ptr = &r;

    cout<<"radius address: "<<ptr<<endl;
    
    const float PI = 3.14;

    area = PI * r * r;

    cout<<"area of circle is : "<<area<<endl;

    p = &area;

    cout<<"area variable address : "<<p<<endl;

    return 0;
}