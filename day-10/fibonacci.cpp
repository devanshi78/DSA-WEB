#include<iostream>
using namespace std;

int main(){

    int i=1,f,f1=0,f2=1,n;

    cout<<"enter n: ";
    cin>>n;

    cout<<"fibonacci series: ";

    while(i<=n)
    {
        cout << f1 << " ";

        f = f1;
        f1 = f + f2;
        f2 = f;
        i++;
    }

    return 0;
}