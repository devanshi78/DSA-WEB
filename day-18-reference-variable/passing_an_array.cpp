#include<iostream>
using namespace std;

void func(int n[])
{
    cout<<"n[1]: "<<n[2];
}

int main()
{
    int a[3] = {6,3,8};
    func(a);

    return 0;
}