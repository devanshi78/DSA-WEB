#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter number of row and col: ";
    cin>>n;

    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<"enter value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    cout << "\nNegative numbers are:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] < 0)
            {
                cout<<a[i][j]<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}