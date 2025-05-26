#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b){

    return a+b;

}

int main()
{
    int result;
    result = add(10,20);
    cout<<"sum of a and b is : "<<result<<endl;

    return 0;

}