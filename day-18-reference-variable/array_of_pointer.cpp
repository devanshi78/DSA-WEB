#include<iostream>
using namespace std;

int main()
{
    int a[5] = {5,8,4,1,9};
    int *p[5], i;

    for(int i = 0; i <= 4; i++)
    {
        p[i] = &a[i];
    }

    cout<<"Value using pointer array: ";
    for(int i = 0; i <= 5; i++)
    {
        cout<< *p[i] << " ";
    }

    return 0;

}