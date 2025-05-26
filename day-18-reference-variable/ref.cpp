#include<iostream>
using namespace std;

int main()
{

    int num = 10;
    int &ref = num;

    cout<<" Num : "<<num<<endl;
    cout<<" Ref : "<<ref<<endl;

    ref = 20;

    cout<<" Num : "<<num<<endl;
    cout<<" Ref : "<<ref<<endl;

    return 0;

}