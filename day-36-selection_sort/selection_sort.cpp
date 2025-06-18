#include<iostream>
using namespace std;

class Selection_sort{   
    public:

    void selection_sort(int a[], int n)
    {
        int min, temp;

        for(int i = 0; i <n-1;i++)
        {
            min = i;

            for(int j = i+1; j < n; j++)
            {
                if(a[min] > a[j])
                {
                    min = j;
                }
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    void printarray(int a[], int n)
    {
        cout<<"Array is : ";
        for(int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Selection_sort obj;
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cout<<"enter array of a["<<i<<"] : ";
        cin>>a[i];
    }

    obj.printarray(a,n);

    obj.selection_sort(a,n);

    obj.printarray(a,n);

    return 0;

}