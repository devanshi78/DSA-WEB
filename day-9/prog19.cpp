#include<iostream>
using namespace std;

int main(){

    int marks;

    cout<<"enter your marks : ";
    cin>>marks;

    (marks >= 35)
        ? cout<<"Pass"<<endl
        : cout<<"Fail"<<endl;

    return 0;
}