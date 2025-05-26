#include<iostream>
using namespace std;

int main()
{
    int n,min;

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

    min=a[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j]<min)
            {
                min = a[i][j];
            }
        }
        cout<<endl;
    }

    cout<<"min value of matrix is: "<<min<<endl;

    return 0;
}