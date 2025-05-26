#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter number: ";
    cin>>num;

    (num >= 0)
            ? cout<<"number is positive."<<endl
            : cout<<"number is nagetive."<<endl;

    return 0;

}