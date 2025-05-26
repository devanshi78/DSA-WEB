#include<iostream>
using namespace std;

int main(){

    int marks;

    cout<<"enter your marks: ";
    cin>>marks;

    if(marks>=90)
    {
        cout<<"grade A"<<endl;
    }
    else if(marks>=80)
    {
        cout<<"grade B"<<endl;
    }
    else if(marks>=70)
    {
        cout<<"grade C"<<endl;
    }
    else
    {
        cout<<"grade D"<<endl;
    }

    return 0;
    
}