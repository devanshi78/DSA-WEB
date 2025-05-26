#include<iostream>
using namespace std;

void shyam()
{
    cout<<"I am Shyam" <<endl;
}

void ram()
{
    cout<<"I am Ram" <<endl;
    shyam();
}

int main()
{
    ram();
    return 0;
}