#include<iostream>
using namespace std;

int main()
{
    int a[5],index,element;

    for(int i = 0; i < 5; i++)
    {
        cout<<"enter element "<<i<<" : ";
        cin>>a[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout<<"element of a["<<i<<"]: "<<a[i]<<endl;
    }

    cout<<"enter index for update: ";
    cin>>index;
    cout<<"enter element for update: ";
    cin>>element;

    for(int i = 0;i < 5;i++)
    {
        cout<<"element of a["<<i<<"]: "<<a[i]<<endl;
    }

    return 0;
}