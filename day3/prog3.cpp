#include<iostream>
using namespace std;

int main(){

    double avg;

    cout<<"Enter your avg: ";
    cin>>avg;

    if(avg <= 100 && avg >= 35)
    {
        if(avg >= 80)
        {
            cout<<"A Grade";
        }
        else if(avg >= 60)
        {
            cout<<"B Grade";
        }
        else if(avg >= 50)
        {
            cout<<"c Grade";
        }
        else
        {
            cout<<"Pass Class";
        }
    }
    else if(avg < 35)
    {
        cout<<"Fail.";
    }
    else
    {
        cout<<"wrong input.";
    }

    return 0;

}