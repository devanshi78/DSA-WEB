#include<iostream>
using namespace std;

int main()
{   
    int n,max;

    cout<<"enter number for row and col: ";
    cin>>n;

    int a[n][n];

    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n;j++)
        {
            cout<<"enter value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    max=a[0][0];

    for(int i = 0;i < n;i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
        }
    }

    cout<<"max value of matrix is: "<<max<<endl;

    return 0;
}