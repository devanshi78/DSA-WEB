#include<iostream>
using namespace std;

int main()
{
    int *arr,size;

    cout<<"enter size of array: ";
    cin>>size;

    arr = new int[size];

    if(arr == NULL){
        cout<<"memory not allocated";
        return 1;
    }
    else{
        cout<<"memory allocated succesfully";
    }

    delete[] arr;

    return 0;

}