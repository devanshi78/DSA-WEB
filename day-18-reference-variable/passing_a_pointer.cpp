#include<iostream>
using namespace std;

void func(int *ptr)
{
    cout<< *ptr;
}

int main()
{
    int a = 6;
    int *p = &a;
    func(p);

    return 0;
}