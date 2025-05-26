#include<iostream>
using namespace std;

int main()
{

    int arr[20];
    int n, choice, index, element;

    do
    {
        cout<<endl<<"-----------------------"<<endl;
        cout<<"enter 1 for insert element : "<<endl;
        cout<<"enter 2 for delete element : "<<endl;
        cout<<"enter 3 for update element : "<<endl;
        cout<<"enter 4 for view all element : "<<endl;
        cout<<"enter 0 for exit : "<<endl;
        cout<<"enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                cout<<"Enter the number of elements in the array: ";
                cin>>n;
                for(int i = 0; i < n; i++)
                {
                    cout<<"Enter element "<<i+1<<": ";
                    cin>>arr[i];
                } 
                break;
            case 2 :
                cout<<"enter index of element to delete: ";
                cin>>index;

                for(int i = index; i < n ; i++)
                {
                    arr[i] = arr[i+1];
                }
                n--;
                break;
            case 3 :
                cout<<"enter index of element to update: ";
                cin>>index;
                cout<<"enter new element : ";
                cin>>element;
                arr[index] = element;
                break;
            case 4 :
                for(int i = 0; i < n; i++)
                {
                    cout<<"Element: "<<i+1<<": "<<arr[i]<<endl;
                }
                break;
            case 0 : 
                break;
            default:
                cout<<"wrong choice!!";
        }

    }
    while(choice != 0);

    return 0;
}