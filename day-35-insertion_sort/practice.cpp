#include<iostream>
using namespace std;

void insertion_sort(int [], int);
void printarray(int [], int);

int main()
{
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cout<<"Array of a["<<i<<"] : ";
        cin>>a[i];
    }

    printarray(a,n);

    insertion_sort(a,n);

    printarray(a,n);

    return 0;

}

void printarray(int a[], int n)
{
    cout<<"Array is : ";
    
    for(int i=0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
};

void insertion_sort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i-1;

        while(j >= 0 && a[j] >key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
};