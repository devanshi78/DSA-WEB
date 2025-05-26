#include<iostream>
using namespace std;

int main(){

    const double PI = 3.14;
    double radius,area;

    cout <<"enter the radius of circle: ";
    cin >> radius;

    area = PI*radius*radius;

    cout <<"the area of circle is: "<<area;
    
    return 0;

}